
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_22__ {int index_size; int chunk_offs; int chunk_index; scalar_t__ sample_size; scalar_t__ index_offset; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_23__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {scalar_t__ refcount; } ;
struct TYPE_24__ {TYPE_4__ null_io; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_20__ {TYPE_2__* priv; } ;
struct TYPE_19__ {TYPE_5__* module; } ;
struct TYPE_18__ {TYPE_7__* module; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (char,unsigned char,char,char) ;
 int FUNC_3 (TYPE_6__*,int *,int) ;
 int FUNC_4 (TYPE_6__*,int ,char*) ;
 int FUNC_5 (TYPE_6__*,int,char*) ;
 int FUNC_6 (TYPE_6__*,int,char*) ;
 int FUNC_7 (TYPE_6__*,scalar_t__,char*) ;
 int FUNC_8 (TYPE_6__*,int ,char*) ;
 int FUNC_9 (TYPE_6__*,int *,unsigned int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_10(VC_CONTAINER_T *VAR_2, unsigned int VAR_3,
   uint32_t VAR_4)
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_2->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_6 = VAR_2->tracks[VAR_3]->priv->module;
   VC_CONTAINER_FOURCC_T VAR_7;
   uint32_t VAR_8 = 1;
   unsigned int VAR_9;

   if(VAR_5->null_io.refcount)
   {

      FUNC_3(VAR_2, ((void*)0), 8 + 24 + VAR_8 * (int64_t)VAR_1);
      return FUNC_1(VAR_2);
   }

   if (VAR_6->index_offset)
      FUNC_4(VAR_2, FUNC_2('i','n','d','x'), "Chunk ID");
   else
      FUNC_4(VAR_2, FUNC_2('J','U','N','K'), "Chunk ID");

   FUNC_6(VAR_2, VAR_4, "Chunk Size");

   FUNC_9(VAR_2, &VAR_7, VAR_3);
   FUNC_5(VAR_2, 4, "wLongsPerEntry");
   FUNC_8(VAR_2, 0, "bIndexSubType");
   FUNC_8(VAR_2, VAR_0, "bIndexType");
   FUNC_6(VAR_2, VAR_8, "nEntriesInUse");
   FUNC_4(VAR_2, VAR_7, "dwChunkId");
   FUNC_6(VAR_2, 0, "dwReserved0");
   FUNC_6(VAR_2, 0, "dwReserved1");
   FUNC_6(VAR_2, 0, "dwReserved2");

   for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9)
   {
      uint64_t VAR_10 = VAR_6->index_offset;
      uint32_t VAR_11 = VAR_6->index_size;
      uint32_t VAR_12 = VAR_6->sample_size ?
         VAR_6->chunk_offs : VAR_6->chunk_index;
      FUNC_7(VAR_2, VAR_10, "qwOffset");
      FUNC_6(VAR_2, VAR_11, "dwSize");
      FUNC_6(VAR_2, VAR_12, "dwDuration");
   }

   FUNC_0(VAR_2);

   return FUNC_1(VAR_2);
}
