
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_26__ {int chunk_index; int index_size; int index_offset; } ;
typedef TYPE_6__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_27__ {TYPE_3__** tracks; TYPE_1__* priv; } ;
typedef TYPE_7__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_25__ {int io; } ;
struct TYPE_24__ {scalar_t__ refcount; } ;
struct TYPE_28__ {int data_offset; TYPE_5__ temp_io; TYPE_4__ null_io; } ;
typedef TYPE_8__ VC_CONTAINER_MODULE_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_23__ {TYPE_2__* priv; } ;
struct TYPE_22__ {TYPE_6__* module; } ;
struct TYPE_21__ {TYPE_8__* module; } ;


 int FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_7__*,int *,int) ;
 int FUNC_5 (TYPE_7__*,int ,char*) ;
 int FUNC_6 (TYPE_7__*,int,char*) ;
 int FUNC_7 (TYPE_7__*,int,char*) ;
 int FUNC_8 (TYPE_7__*,int,char*) ;
 int FUNC_9 (TYPE_7__*,int ,char*) ;
 int FUNC_10 (TYPE_7__*,int *,unsigned int) ;
 int FUNC_11 (int *,unsigned int) ;
 scalar_t__ FUNC_12 (TYPE_7__*,unsigned int*,int*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_15( VC_CONTAINER_T *VAR_5, unsigned int VAR_6,
   uint32_t VAR_7 )
{
   VC_CONTAINER_MODULE_T *VAR_8 = VAR_5->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_9 = VAR_5->tracks[VAR_6]->priv->module;
   VC_CONTAINER_STATUS_T VAR_10;
   VC_CONTAINER_FOURCC_T VAR_11;
   int64_t VAR_12 = VAR_8->data_offset + 12;
   uint32_t VAR_13 = VAR_9->chunk_index;
   uint32_t VAR_14 = 4;

   FUNC_13(32 + VAR_13 * (int64_t)VAR_2 <= (int64_t)VAR_3);

   if(VAR_8->null_io.refcount)
   {

      FUNC_4(VAR_5, ((void*)0), 8 + 24 + VAR_13 * FUNC_1(8));
      return FUNC_3(VAR_5);
   }

   VAR_9->index_offset = FUNC_2(VAR_5);
   VAR_9->index_size = VAR_7 ? (VAR_7 - 8) : 0;

   FUNC_11(&VAR_11, VAR_6);
   FUNC_5(VAR_5, VAR_11, "Chunk ID");
   FUNC_7(VAR_5, VAR_7, "Chunk Size");

   FUNC_10(VAR_5, &VAR_11, VAR_6);
   FUNC_6(VAR_5, 2, "wLongsPerEntry");
   FUNC_9(VAR_5, 0, "bIndexSubType");
   FUNC_9(VAR_5, VAR_1, "bIndexType");
   FUNC_7(VAR_5, VAR_13, "nEntriesInUse");
   FUNC_5(VAR_5, VAR_11, "dwChunkId");
   FUNC_8(VAR_5, VAR_12, "qwBaseOffset");
   FUNC_7(VAR_5, 0, "dwReserved");


   FUNC_14(VAR_8->temp_io.io, FUNC_1(0));

   while(FUNC_3(VAR_5) == VAR_4)
   {
      uint32_t VAR_15;
      unsigned int VAR_16;

      VAR_10 = FUNC_12(VAR_5, &VAR_16, &VAR_15);
      if (VAR_10 != VAR_4) break;

      if(VAR_16 != VAR_6) continue;

      FUNC_7(VAR_5, VAR_14, "dwOffset");
      FUNC_7(VAR_5, VAR_15, "dwSize");

      VAR_14 += ((VAR_15 + 1) & ~(1 | VAR_0)) + 12;
   }

   FUNC_0(VAR_5);

   return FUNC_3(VAR_5);
}
