
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int int64_t ;
struct TYPE_19__ {TYPE_3__* format; TYPE_2__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
struct TYPE_20__ {void* frame_duration; void* type; void* number; int codecid; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_21__ {TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_22__ {TYPE_4__* parsing; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {size_t extradata_size; char* extradata; } ;
struct TYPE_17__ {TYPE_5__* module; } ;
struct TYPE_16__ {TYPE_7__* module; } ;
typedef int MKV_ELEMENT_ID_T ;


 int FUNC_0 (TYPE_6__*,char*,int,int) ;
 int FUNC_1 (TYPE_6__*,char*,char*) ;
 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 size_t FUNC_2 (TYPE_6__*,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_6__*,int,void**) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_6__*,TYPE_4__*,unsigned int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_8, MKV_ELEMENT_ID_T VAR_9, int64_t VAR_10 )
{
   VC_CONTAINER_STATUS_T VAR_11 = VAR_7;
   VC_CONTAINER_MODULE_T *VAR_12 = VAR_8->priv->module;
   VC_CONTAINER_TRACK_T *VAR_13 = VAR_12->parsing;
   VC_CONTAINER_TRACK_MODULE_T *VAR_14 = VAR_13->priv->module;
   uint64_t VAR_15;


   if( VAR_9 == VAR_2 ||
       VAR_9 == VAR_1 ||
       VAR_9 == VAR_3 ||
       VAR_9 == VAR_4 )
   {
      char VAR_16[VAR_6+1];

      if(VAR_10 > VAR_6)
      {
         FUNC_0(VAR_8, "string truncated (%i>%i)", (int)VAR_10, VAR_6);
         VAR_10 = VAR_6;
      }
      if(FUNC_2(VAR_8, VAR_16, VAR_10) != (size_t)VAR_10)
      {

         return FUNC_3(VAR_8);
      }
      VAR_16[VAR_10] = 0;

      FUNC_1(VAR_8, "%s", VAR_16);

      if(VAR_9 == VAR_3)
         FUNC_5(VAR_14->codecid, VAR_16, VAR_0-1);

      return VAR_7;
   }


   if( VAR_9 == VAR_5 )
   {
      VAR_11 = FUNC_6(VAR_8, VAR_13, (unsigned int)VAR_10);
      if(VAR_11 != VAR_7) return VAR_11;
      VAR_13->format->extradata_size = FUNC_2(VAR_8, VAR_13->format->extradata, VAR_10);
      return FUNC_3(VAR_8);
   }


   VAR_11 = FUNC_4(VAR_8, VAR_10, &VAR_15);
   if(VAR_11 != VAR_7) return VAR_11;

   switch(VAR_9)
   {
   case 129:
      VAR_14->number = VAR_15; break;
   case 128:
      VAR_14->type = VAR_15; break;
   case 130:
      VAR_14->frame_duration = VAR_15; break;
   default: break;
   }

   return VAR_11;
}
