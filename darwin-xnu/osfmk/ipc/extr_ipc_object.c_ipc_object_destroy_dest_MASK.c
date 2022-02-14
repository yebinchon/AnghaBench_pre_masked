
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_type_name_t ;
typedef int ipc_port_t ;
typedef int ipc_object_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;

void
FUNC_9(
 ipc_object_t VAR_1,
 mach_msg_type_name_t VAR_2)
{
 FUNC_1(FUNC_0(VAR_1));
 FUNC_1(FUNC_3(VAR_1) == VAR_0);

 switch (VAR_2) {
     case 129:
  FUNC_6((ipc_port_t) VAR_1);
  break;

     case 128:
  if (FUNC_2(VAR_1) &&
      !FUNC_4((ipc_port_t) VAR_1))
   FUNC_5((ipc_port_t) VAR_1);
  else
   FUNC_7((ipc_port_t) VAR_1);
  break;

     default:
  FUNC_8("ipc_object_destroy_dest: strange rights");
 }
}
