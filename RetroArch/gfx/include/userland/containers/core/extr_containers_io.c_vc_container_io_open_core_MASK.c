
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {char* uri; int capabilities; int uri_parts; TYPE_2__* priv; scalar_t__ pf_seek; } ;
typedef TYPE_1__ VC_CONTAINER_IO_T ;
struct TYPE_15__ {unsigned int mem_max_size; unsigned int mem_size; void* mem; void* buffer_end; void* buffer; TYPE_1__* io; } ;
struct TYPE_14__ {int caches_num; int async_io; TYPE_3__* cache; TYPE_3__ caches; } ;
typedef TYPE_2__ VC_CONTAINER_IO_PRIVATE_T ;
typedef TYPE_3__ VC_CONTAINER_IO_PRIVATE_CACHE_T ;
typedef int VC_CONTAINER_IO_MODE_T ;
typedef int VC_CONTAINER_IO_CAPABILITIES_T ;


 unsigned int MAX_NUM_MEMORY_AREAS ;
 unsigned int MEM_CACHE_READ_MAX_SIZE ;
 unsigned int MEM_CACHE_TMP_MAX_SIZE ;
 unsigned int MEM_CACHE_WRITE_MAX_SIZE ;
 unsigned int NUM_TMP_MEMORY_AREAS ;
 scalar_t__ VC_CONTAINER_ERROR_OUT_OF_MEMORY ;
 int VC_CONTAINER_IO_CAPS_CANT_SEEK ;
 int VC_CONTAINER_IO_CAPS_NO_CACHING ;
 int VC_CONTAINER_IO_MODE_WRITE ;
 scalar_t__ VC_CONTAINER_SUCCESS ;
 int async_io_start (TYPE_1__*,unsigned int,int ) ;
 int free (TYPE_1__*) ;
 scalar_t__ io_seek_not_seekable ;
 void* malloc (int) ;
 int memcpy (char*,char const*,unsigned int) ;
 int memset (TYPE_1__*,int ,int) ;
 int strcasecmp (scalar_t__,char*) ;
 int strlen (char const*) ;
 scalar_t__ vc_container_io_file_open (TYPE_1__*,char const*,int ) ;
 scalar_t__ vc_container_io_http_open (TYPE_1__*,char const*,int ) ;
 scalar_t__ vc_container_io_net_open (TYPE_1__*,char const*,int ) ;
 scalar_t__ vc_container_io_null_open (TYPE_1__*,char const*,int ) ;
 scalar_t__ vc_container_io_pktfile_open (TYPE_1__*,char const*,int ) ;
 int vc_uri_create () ;
 int vc_uri_parse (int ,char const*) ;
 scalar_t__ vc_uri_path_extension (int ) ;
 int vc_uri_release (int ) ;

__attribute__((used)) static VC_CONTAINER_IO_T *vc_container_io_open_core( const char *uri, VC_CONTAINER_IO_MODE_T mode,
                                                     VC_CONTAINER_IO_CAPABILITIES_T capabilities,
                                                     bool b_open, VC_CONTAINER_STATUS_T *p_status )
{
   VC_CONTAINER_STATUS_T status = VC_CONTAINER_SUCCESS;
   VC_CONTAINER_IO_T *p_ctx = 0;
   VC_CONTAINER_IO_PRIVATE_T *private = 0;
   unsigned int uri_length, caches = 0, cache_max_size, num_areas = MAX_NUM_MEMORY_AREAS;


   uri_length = strlen(uri) + 1;


   p_ctx = malloc( sizeof(*p_ctx) + sizeof(*private) + uri_length);
   if(!p_ctx) { status = VC_CONTAINER_ERROR_OUT_OF_MEMORY; goto error; }
   memset(p_ctx, 0, sizeof(*p_ctx) + sizeof(*private) + uri_length );
   p_ctx->priv = private = (VC_CONTAINER_IO_PRIVATE_T *)&p_ctx[1];
   p_ctx->uri = (char *)&private[1];
   memcpy((char *)p_ctx->uri, uri, uri_length);
   p_ctx->uri_parts = vc_uri_create();
   if(!p_ctx->uri_parts) { status = VC_CONTAINER_ERROR_OUT_OF_MEMORY; goto error; }
   vc_uri_parse(p_ctx->uri_parts, uri);

   if (b_open)
   {

      status = vc_container_io_null_open(p_ctx, uri, mode);
      if(status) status = vc_container_io_net_open(p_ctx, uri, mode);
      if(status) status = vc_container_io_pktfile_open(p_ctx, uri, mode);



      if(status) status = vc_container_io_file_open(p_ctx, uri, mode);
      if(status != VC_CONTAINER_SUCCESS) goto error;

      if(!p_ctx->pf_seek || (p_ctx->capabilities & VC_CONTAINER_IO_CAPS_CANT_SEEK))
      {
         p_ctx->capabilities |= VC_CONTAINER_IO_CAPS_CANT_SEEK;
         p_ctx->pf_seek = io_seek_not_seekable;
      }
   }
   else
   {

      p_ctx->capabilities = capabilities;
   }

   if(p_ctx->capabilities & VC_CONTAINER_IO_CAPS_NO_CACHING)
      caches = 1;

   if(mode == VC_CONTAINER_IO_MODE_WRITE) cache_max_size = MEM_CACHE_WRITE_MAX_SIZE;
   else cache_max_size = MEM_CACHE_READ_MAX_SIZE;

   if(mode == VC_CONTAINER_IO_MODE_WRITE &&
      vc_uri_path_extension(p_ctx->uri_parts) &&
      !strcasecmp(vc_uri_path_extension(p_ctx->uri_parts), "tmp"))
   {
      caches = 1;
      cache_max_size = MEM_CACHE_TMP_MAX_SIZE;
      num_areas = NUM_TMP_MEMORY_AREAS;
   }


   if(caches)
   {
      VC_CONTAINER_IO_PRIVATE_CACHE_T *cache = &p_ctx->priv->caches;
      cache->mem_max_size = cache_max_size;
      cache->mem_size = cache->mem_max_size;
      cache->io = p_ctx;
      cache->mem = malloc(p_ctx->priv->caches.mem_size);
      if(cache->mem)
      {
         cache->buffer = cache->mem;
         cache->buffer_end = cache->mem + cache->mem_size;
         p_ctx->priv->caches_num = 1;
      }
   }

   if(p_ctx->priv->caches_num)
      p_ctx->priv->cache = &p_ctx->priv->caches;


   if(mode == VC_CONTAINER_IO_MODE_WRITE && p_ctx->priv->cache && num_areas >= 2)
      p_ctx->priv->async_io = async_io_start( p_ctx, num_areas, 0 );

 end:
   if(p_status) *p_status = status;
   return p_ctx;

 error:
   if(p_ctx) vc_uri_release(p_ctx->uri_parts);
   if(p_ctx) free(p_ctx);
   p_ctx = 0;
   goto end;
}
