
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int ppattr_cpu_attr; int ppattr_cpu_percentage; } ;
typedef TYPE_1__ proc_policy_cpuusage_attr_t ;
typedef int proc_policy_attribute_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_4 ;

int
FUNC_2(pid_t VAR_5, int VAR_6, int VAR_7)
{
 proc_policy_cpuusage_attr_t VAR_8;

 FUNC_1(&VAR_8, sizeof(proc_policy_cpuusage_attr_t));
 VAR_8.ppattr_cpu_attr = VAR_6;
 VAR_8.ppattr_cpu_percentage = VAR_7;
 if (FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2, (proc_policy_attribute_t*)&VAR_8, VAR_5, (uint64_t)0) != -1)
  return(0);
 else
  return(VAR_4);
}
