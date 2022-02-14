
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef unsigned int uint16_t ;
typedef int int64_t ;
struct TYPE_20__ {TYPE_3__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_19__ {TYPE_2__* priv; } ;
struct TYPE_18__ {TYPE_1__* module; } ;
struct TYPE_17__ {scalar_t__ index_offset; int index_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 unsigned int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_11 (TYPE_4__*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_12 (TYPE_4__*,scalar_t__,unsigned int,int *,int ,scalar_t__*) ;
 int FUNC_13 (int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_14(VC_CONTAINER_T *VAR_6, unsigned VAR_7,
   int64_t *VAR_8, VC_CONTAINER_SEEK_FLAGS_T VAR_9, uint64_t *VAR_10)
{
   VC_CONTAINER_STATUS_T VAR_11 = VAR_4;
   VC_CONTAINER_FOURCC_T VAR_12;
   uint64_t VAR_13;
   uint32_t VAR_14;
   uint16_t VAR_15, VAR_16;
   uint32_t VAR_17, VAR_18;
   uint16_t VAR_19;
   uint8_t VAR_20, VAR_21;

   VAR_13 = VAR_6->tracks[VAR_7]->priv->module->index_offset;
   VAR_14 = VAR_6->tracks[VAR_7]->priv->module->index_size;

   FUNC_6(VAR_6, VAR_13);

   VAR_19 = FUNC_2(VAR_6, "wLongsPerEntry");
   VAR_20 = FUNC_5(VAR_6, "bIndexSubType");
   VAR_21 = FUNC_5(VAR_6, "bIndexType");
   VAR_18 = FUNC_3(VAR_6, "nEntriesInUse");
   VAR_12 = FUNC_1(VAR_6, "dwChunkId");
   FUNC_7(VAR_6, "dwReserved0");
   FUNC_7(VAR_6, "dwReserved1");
   FUNC_7(VAR_6, "dwReserved2");

   if ((VAR_11 = FUNC_9(VAR_6)) != VAR_5)
      return VAR_11;

   if (VAR_21 == VAR_1)
   {
      FUNC_13(VAR_12, &VAR_15, &VAR_16);
      VAR_11 = FUNC_11(VAR_6, VAR_15, VAR_16);
      if (VAR_11 || VAR_14 < 24 || VAR_16 != VAR_7) return VAR_2;


      if (VAR_19 != 4 || VAR_20 != 0)
         return VAR_3;

      VAR_18 = FUNC_0(VAR_18, (VAR_14 - 24) / VAR_19);

      for (VAR_17 = 0; VAR_17 < VAR_18; ++VAR_17)
      {
         uint64_t VAR_22, VAR_23;
         VAR_23 = FUNC_4(VAR_6, "qwOffset");
         FUNC_7(VAR_6, "dwSize");
         FUNC_7(VAR_6, "dwDuration");

         if ((VAR_11 = FUNC_9(VAR_6)) != VAR_5)
            break;

         if (VAR_23 == FUNC_10(0))
         {
            VAR_11 = VAR_3;
            break;
         }

         VAR_22 = FUNC_8(VAR_6);
         VAR_11 = FUNC_12(VAR_6, VAR_23, VAR_7, VAR_8, VAR_9, VAR_10);
         if (VAR_11 != VAR_4) break;
         FUNC_6(VAR_6, VAR_22);
      }
   }
   else if (VAR_21 == VAR_0)
   {

      VAR_11 = FUNC_12(VAR_6, VAR_13, VAR_7, VAR_8, VAR_9, VAR_10);
   }
   else
   {
      VAR_11 = VAR_3;
   }

   return VAR_11;
}
