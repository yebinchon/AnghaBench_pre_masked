
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ppattr_cpu_attr_deadline; scalar_t__ ppattr_cpu_attr_interval; int ppattr_cpu_percentage; int ppattr_cpu_attr; } ;
typedef TYPE_1__ proc_policy_cpuusage_attr_t ;
typedef int proc_policy_attribute_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int ,int ) ;

int
FUNC_1(pid_t VAR_6)
{
 proc_policy_cpuusage_attr_t VAR_7;

 VAR_7.ppattr_cpu_attr = VAR_3;
 VAR_7.ppattr_cpu_percentage = VAR_1;
 VAR_7.ppattr_cpu_attr_interval = 0;
 VAR_7.ppattr_cpu_attr_deadline = 0;

 return(FUNC_0(VAR_5, VAR_0, VAR_2,
  VAR_4, (proc_policy_attribute_t*)&VAR_7, VAR_6, 0));
}
