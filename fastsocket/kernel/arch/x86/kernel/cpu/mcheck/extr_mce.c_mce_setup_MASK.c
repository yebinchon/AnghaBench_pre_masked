
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mce {int mcgcap; int extcpu; int apicid; int socketid; int cpuid; int cpuvendor; int time; int tsc; int cpu; } ;
struct TYPE_4__ {int x86_vendor; } ;
struct TYPE_3__ {int initial_apicid; int phys_proc_id; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mce*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

void FUNC_7(struct mce *VAR_2)
{
 FUNC_3(VAR_2, 0, sizeof(struct mce));
 VAR_2->cpu = VAR_2->extcpu = FUNC_6();
 FUNC_5(VAR_2->tsc);

 VAR_2->time = FUNC_2();
 VAR_2->cpuvendor = VAR_1.x86_vendor;
 VAR_2->cpuid = FUNC_1(1);



 VAR_2->apicid = FUNC_0(VAR_2->extcpu).initial_apicid;
 FUNC_4(VAR_0, VAR_2->mcgcap);
}
