
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {double duration; int timecode_scale; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {TYPE_3__* module; } ;
typedef int MKV_ELEMENT_ID_T ;







 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,double*) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1, MKV_ELEMENT_ID_T VAR_2, int64_t VAR_3 )
{
   VC_CONTAINER_MODULE_T *VAR_4 = VAR_1->priv->module;
   VC_CONTAINER_STATUS_T VAR_5 = VAR_0;
   uint64_t VAR_6;
   double VAR_7;

   switch(VAR_2)
   {
   case 130:
      VAR_5 = FUNC_2(VAR_1, VAR_3, &VAR_6);
      if(VAR_5 != VAR_0) break;
      VAR_4->timecode_scale = VAR_6;
      break;
   case 132:
      VAR_5 = FUNC_1(VAR_1, VAR_3, &VAR_7);
      if(VAR_5 != VAR_0) break;
      VAR_4->duration = VAR_7;
      break;
   case 129:
   case 131:
   case 128:
      FUNC_0(VAR_1, VAR_3, "string");
      break;

   default: break;
   }

   return VAR_5;
}
