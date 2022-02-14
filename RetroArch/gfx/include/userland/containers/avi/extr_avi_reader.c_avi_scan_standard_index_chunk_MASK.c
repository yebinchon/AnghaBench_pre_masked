
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef unsigned int uint16_t ;
typedef int int64_t ;
struct TYPE_21__ {int offs; int time_pos; int index; scalar_t__ flags; int member_0; } ;
struct TYPE_19__ {TYPE_5__ chunk; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_20__ {TYPE_2__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_18__ {TYPE_1__* priv; } ;
struct TYPE_17__ {TYPE_3__* module; } ;
typedef TYPE_5__ AVI_TRACK_CHUNK_STATE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 unsigned int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,unsigned int,unsigned int) ;
 int FUNC_13 (int ,int ,int,int ) ;
 int FUNC_14 (int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_15(VC_CONTAINER_T *VAR_7, uint64_t VAR_8,
   unsigned VAR_9, int64_t *VAR_10, VC_CONTAINER_SEEK_FLAGS_T VAR_11, uint64_t *VAR_12)
{
   VC_CONTAINER_STATUS_T VAR_13 = VAR_4;
   VC_CONTAINER_TRACK_MODULE_T *VAR_14 = ((void*)0);
   VC_CONTAINER_FOURCC_T VAR_15;
   uint32_t VAR_16;
   uint16_t VAR_17, VAR_18;
   uint8_t VAR_19, VAR_20;
   uint32_t VAR_21, VAR_22 = 0;
   uint16_t VAR_23;
   uint64_t VAR_24 = FUNC_10(0);
   uint64_t VAR_25 = FUNC_10(0);
   uint64_t VAR_26 = FUNC_0(0);
   AVI_TRACK_CHUNK_STATE_T VAR_27 = { 0 };

   FUNC_7(VAR_7, VAR_8);

   VAR_15 = FUNC_2(VAR_7, "Chunk ID");
   VAR_16 = FUNC_4(VAR_7, "Chunk Size");

   VAR_23 = FUNC_3(VAR_7, "wLongsPerEntry");
   VAR_20 = FUNC_6(VAR_7, "bIndexSubType");
   VAR_19 = FUNC_6(VAR_7, "bIndexType");
   VAR_22 = FUNC_4(VAR_7, "nEntriesInUse");
   VAR_15 = FUNC_2(VAR_7, "dwChunkId");
   VAR_24 = FUNC_5(VAR_7, "qwBaseOffset");
   FUNC_8(VAR_7, "dwReserved");

   if ((VAR_13 = FUNC_9(VAR_7)) != VAR_6)
      return VAR_13;

   FUNC_14(VAR_15, &VAR_17, &VAR_18);
   VAR_13 = FUNC_12(VAR_7, VAR_17, VAR_18);
   if (VAR_13 || VAR_16 < 24 || VAR_18 != VAR_9)
      return VAR_2;

   if (VAR_23 != 2 || VAR_20 != 0 || VAR_19 != VAR_1)
      return VAR_3;

   VAR_22 = FUNC_1(VAR_22, (VAR_16 - 24) / (VAR_23 * 4));

   VAR_14 = VAR_7->tracks[VAR_9]->priv->module;

   for (VAR_21 = 0; VAR_21 < VAR_22; ++VAR_21)
   {
      uint32_t VAR_28;
      int VAR_29 = 0;

      VAR_28 = FUNC_4(VAR_7, "dwOffset");
      VAR_16 = FUNC_4(VAR_7, "dwSize");

      if ((VAR_13 = FUNC_9(VAR_7)) != VAR_6)
         break;

      VAR_13 = VAR_4;

      if (!(VAR_16 & VAR_0))
         VAR_29 = 1;
      VAR_16 &= ~VAR_0;

      VAR_25 = VAR_24 + VAR_28 - 8;

      if (VAR_29)
         VAR_14->chunk.flags = VAR_5;
      else
         VAR_14->chunk.flags = 0;

      if (VAR_10 != ((void*)0))
      {
         int VAR_30;
         VAR_13 = VAR_4;
         VAR_30 = FUNC_13(VAR_14->chunk.time_pos, *VAR_10, VAR_29, VAR_11);

         if (VAR_30 == 0)
         {
            *VAR_12 = VAR_25;
            *VAR_10 = VAR_14->chunk.time_pos;
            VAR_13 = VAR_6;
            break;
         }
         else if (VAR_30 > 0)
         {
            if (VAR_26)
            {
               *VAR_12 = VAR_26;
               VAR_14->chunk = VAR_27;
               *VAR_10 = VAR_14->chunk.time_pos;
               VAR_13 = VAR_6;
            }
            break;
         }

         if (VAR_29)
         {
            VAR_26 = VAR_25;
            VAR_27 = VAR_14->chunk;
         }
      }
      else
      {



         if (VAR_25 >= *VAR_12)
         {
            VAR_13 = VAR_6;
            break;
         }
      }

      VAR_14->chunk.index++;
      VAR_14->chunk.offs += VAR_16;
      VAR_14->chunk.time_pos = FUNC_11(VAR_14);
   }

   return VAR_13;
}
