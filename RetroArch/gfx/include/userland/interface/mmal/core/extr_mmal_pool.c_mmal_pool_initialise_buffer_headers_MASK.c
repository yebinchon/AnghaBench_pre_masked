
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_1__* priv; scalar_t__ alloc_size; int * data; } ;
struct TYPE_10__ {int header_size; scalar_t__ payload_size; int (* allocator_free ) (int ,int *) ;int allocator_context; scalar_t__ (* allocator_alloc ) (int ,scalar_t__) ;} ;
struct TYPE_9__ {unsigned int headers_num; TYPE_4__** header; } ;
struct TYPE_8__ {int refcount; scalar_t__ payload_size; int (* pf_payload_free ) (int ,int *) ;int payload_context; int * payload; void* owner; int pf_release; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_POOL_T ;
typedef TYPE_3__ MMAL_POOL_PRIVATE_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;
typedef scalar_t__ MMAL_BOOL_T ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int FUNC_1 (char*,scalar_t__,unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 TYPE_4__* FUNC_3 (TYPE_4__*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_6(MMAL_POOL_T *VAR_4, unsigned int VAR_5,
                                                         MMAL_BOOL_T VAR_6)
{
   MMAL_POOL_PRIVATE_T *VAR_7 = (MMAL_POOL_PRIVATE_T *)VAR_4;
   MMAL_BUFFER_HEADER_T *VAR_8;
   uint8_t *VAR_9 = ((void*)0);
   unsigned int VAR_10;

   VAR_8 = (MMAL_BUFFER_HEADER_T *)((uint8_t *)VAR_4->header + FUNC_2(sizeof(void *)*VAR_5,VAR_0));

   for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   {
      if (VAR_6)
         VAR_8 = FUNC_3(VAR_8, VAR_7->header_size);

      if (VAR_7->payload_size && VAR_7->allocator_alloc)
      {
         FUNC_1("allocating %u bytes for payload %u/%u", VAR_7->payload_size, VAR_10, VAR_5);
         VAR_9 = (uint8_t*)VAR_7->allocator_alloc(VAR_7->allocator_context, VAR_7->payload_size);
         if (! VAR_9)
         {
            FUNC_0("failed to allocate payload %u/%u", VAR_10, VAR_5);
            return VAR_1;
         }
      }
      else
      {
         if (VAR_8->priv->pf_payload_free && VAR_8->priv->payload && VAR_8->priv->payload_size)
         {
            FUNC_1("freeing %u bytes for payload %u/%u", VAR_8->priv->payload_size, VAR_10, VAR_5);
            VAR_8->priv->pf_payload_free(VAR_8->priv->payload_context, VAR_8->priv->payload);
         }
      }
      VAR_8->data = VAR_9;
      VAR_8->alloc_size = VAR_7->payload_size;
      VAR_8->priv->pf_release = VAR_3;
      VAR_8->priv->owner = (void *)VAR_4;
      VAR_8->priv->refcount = 1;
      VAR_8->priv->payload = VAR_9;
      VAR_8->priv->payload_context = VAR_7->allocator_context;
      VAR_8->priv->pf_payload_free = VAR_7->allocator_free;
      VAR_8->priv->payload_size = VAR_7->payload_size;
      VAR_4->header[VAR_10] = VAR_8;
      VAR_4->headers_num = VAR_10+1;
      VAR_8 = (MMAL_BUFFER_HEADER_T *)((uint8_t*)VAR_8 + VAR_7->header_size);
   }

   return VAR_2;
}
