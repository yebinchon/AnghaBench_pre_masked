
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_destruct_special_reply_port_rights_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;


 int VAR_0 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 () ;

kern_return_t
FUNC_3(
  mach_port_name_t VAR_1,
  thread_destruct_special_reply_port_rights_t VAR_2)
{
 switch (VAR_2) {
 case 130:
  return FUNC_1(FUNC_2(), VAR_1, -1, 0);

 case 129:
  return FUNC_1(FUNC_2(), VAR_1, 0, 0);

 case 128:
  return FUNC_0(FUNC_2(), VAR_1);

 default:
  return VAR_0;
 }
}
