
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vc_container_net_status_t ;
typedef int vc_container_net_control_t ;
typedef int va_list ;
typedef int VC_CONTAINER_NET_T ;




 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

vc_container_net_status_t FUNC_3( VC_CONTAINER_NET_T *VAR_2,
      vc_container_net_control_t VAR_3,
      va_list VAR_4)
{
   vc_container_net_status_t VAR_5;

   switch (VAR_3)
   {
   case 129:
      VAR_5 = FUNC_0(VAR_2, FUNC_2(VAR_4, VAR_1));
      break;
   case 128:
      VAR_5 = FUNC_1(VAR_2, FUNC_2(VAR_4, VAR_1));
      break;
   default:
      VAR_5 = VAR_0;
   }

   return VAR_5;
}
