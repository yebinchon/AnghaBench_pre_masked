
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int va_list ;
typedef int uint16_t ;
struct TYPE_9__ {int timestamp_base; int flags; void* expected_ssrc; int probation; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_MODULE_T ;
struct TYPE_10__ {TYPE_2__** tracks; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_CONTROL_T ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* module; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 void* FUNC_2 (int ,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_4,
                                                VC_CONTAINER_CONTROL_T VAR_5,
                                                va_list VAR_6)
{
   VC_CONTAINER_STATUS_T VAR_7;
   VC_CONTAINER_TRACK_MODULE_T *VAR_8 = VAR_4->tracks[0]->priv->module;

   switch (VAR_5)
   {
   case 128:
      {
         VAR_8->timestamp_base = FUNC_2(VAR_6, VAR_3);
         if (!VAR_8->timestamp_base)
            VAR_8->timestamp_base = 1;
         VAR_7 = VAR_2;
      }
      break;
   case 130:
      {
         FUNC_1(VAR_8, (uint16_t)FUNC_2(VAR_6, VAR_3));
         VAR_8->probation = 0;
         VAR_7 = VAR_2;
      }
      break;
   case 129:
      {
         VAR_8->expected_ssrc = FUNC_2(VAR_6, VAR_3);
         FUNC_0(VAR_8->flags, VAR_0);
         VAR_7 = VAR_2;
      }
      break;
   default:
      VAR_7 = VAR_1;
   }

   return VAR_7;
}
