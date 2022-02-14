
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_port_t ;
typedef int ipc_object_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;

task_t
FUNC_6(
 mach_port_name_t VAR_3)
{
 ipc_port_t VAR_4;
 kern_return_t VAR_5;
 task_t VAR_6 = VAR_2;

 if (FUNC_1(VAR_3)) {
  VAR_5 = FUNC_4(FUNC_3(), VAR_3,
           VAR_1,
           (ipc_object_t *) &VAR_4);
  if (VAR_5 != VAR_0)
   return VAR_2;

  VAR_6 = FUNC_2(VAR_4);

  if (FUNC_0(VAR_4))
   FUNC_5(VAR_4);
 }
 return VAR_6;
}
