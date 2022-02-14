
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vc_container_net_status_t ;
typedef int va_list ;
struct VC_CONTAINER_IO_T {int status; TYPE_1__* module; } ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_CONTROL_T ;
struct TYPE_2__ {int sock; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(struct VC_CONTAINER_IO_T *VAR_3,
      VC_CONTAINER_CONTROL_T VAR_4,
      va_list VAR_5)
{
   vc_container_net_status_t VAR_6;
   VC_CONTAINER_STATUS_T VAR_7;

   switch (VAR_4)
   {
   case 129:
      VAR_6 = FUNC_1(VAR_3->module->sock, VAR_0, VAR_5);
      break;
   case 128:
      VAR_6 = FUNC_1(VAR_3->module->sock, VAR_1, VAR_5);
      break;
   default:
      VAR_6 = VAR_2;
   }

   VAR_7 = FUNC_0(VAR_6);
   VAR_3->status = VAR_7;

   return VAR_7;
}
