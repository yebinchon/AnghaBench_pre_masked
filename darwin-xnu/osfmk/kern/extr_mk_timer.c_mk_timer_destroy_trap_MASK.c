
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mk_timer_destroy_trap_args {int name; } ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef int ipc_port_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

kern_return_t
FUNC_5(
 struct mk_timer_destroy_trap_args *VAR_3)
{
 mach_port_name_t VAR_4 = VAR_3->name;
 ipc_space_t VAR_5 = FUNC_0();
 ipc_port_t VAR_6;
 kern_return_t VAR_7;

 VAR_7 = FUNC_3(VAR_5, VAR_4, &VAR_6);
 if (VAR_7 != VAR_2)
  return (VAR_7);

 if (FUNC_1(VAR_6) == VAR_0) {
  FUNC_2(VAR_6);
  VAR_7 = FUNC_4(VAR_5, VAR_4);
 }
 else {
  FUNC_2(VAR_6);
  VAR_7 = VAR_1;
 }

 return (VAR_7);
}
