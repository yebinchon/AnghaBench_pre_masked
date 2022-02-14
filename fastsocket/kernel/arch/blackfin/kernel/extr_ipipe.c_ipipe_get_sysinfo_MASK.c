
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tmfreq; int tmirq; } ;
struct ipipe_sysinfo {int cpufreq; TYPE_1__ archdep; int ncpus; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int FUNC_2(struct ipipe_sysinfo *VAR_1)
{
 VAR_1->ncpus = FUNC_1();
 VAR_1->cpufreq = FUNC_0();
 VAR_1->archdep.tmirq = VAR_0;
 VAR_1->archdep.tmfreq = VAR_1->cpufreq;

 return 0;
}
