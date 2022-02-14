
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_17__ {size_t encodings_num; TYPE_4__* encodings; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_18__ {TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_19__ {TYPE_3__* parsing; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ data_size; int * data; } ;
struct TYPE_15__ {TYPE_2__* priv; } ;
struct TYPE_14__ {TYPE_5__* module; } ;
struct TYPE_13__ {TYPE_7__* module; } ;
typedef scalar_t__ MKV_ELEMENT_ID_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int *,scalar_t__) ;
 int FUNC_1 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_6__*,scalar_t__,int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_9, MKV_ELEMENT_ID_T VAR_10, int64_t VAR_11 )
{
   VC_CONTAINER_MODULE_T *VAR_12 = VAR_9->priv->module;
   VC_CONTAINER_TRACK_MODULE_T *VAR_13 = VAR_12->parsing->priv->module;
   VC_CONTAINER_STATUS_T VAR_14;
   uint64_t VAR_15;
   uint8_t *VAR_16;

   if(VAR_10 == VAR_3)
   {
      VAR_14 = FUNC_4(VAR_9, VAR_11, &VAR_15);
      if(VAR_14 != VAR_8) return VAR_14;

      if(VAR_15 == 0) VAR_13->encodings[VAR_13->encodings_num].type = VAR_1;
      if(VAR_15 == 3) VAR_13->encodings[VAR_13->encodings_num].type = VAR_0;
      else VAR_13->encodings[VAR_13->encodings_num].type = VAR_2;
      return VAR_14;
   }

   if(VAR_10 == VAR_4)
   {
      if(VAR_13->encodings[VAR_13->encodings_num].type == VAR_0)
      {
         if(VAR_11 > VAR_5) return VAR_7;

         VAR_16 = FUNC_3((int)VAR_11);
         if(!VAR_16) return VAR_6;

         VAR_13->encodings[VAR_13->encodings_num].data = VAR_16;
         VAR_13->encodings[VAR_13->encodings_num].data_size = FUNC_0(VAR_9, VAR_16, VAR_11);
         if(VAR_13->encodings[VAR_13->encodings_num].data_size != VAR_11)
            VAR_13->encodings[VAR_13->encodings_num].data_size = 0;
         return FUNC_2(VAR_9);
      }
      else
      {
         FUNC_1(VAR_9, VAR_11);
      }
      return FUNC_2(VAR_9);
   }

   return VAR_8;
}
