
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ task_t ;
typedef int pid_t ;
typedef int mach_port_name_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

int
FUNC_4(mach_port_name_t VAR_1)
{
 if (!FUNC_0(VAR_1)) {
  return -1;
 }

 task_t VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == VAR_0) {
  return -1;
 }
 pid_t VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_2);

 return VAR_3;
}
