
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct x86_cpu_id {scalar_t__ driver_data; } ;
struct pstate_adjust_policy {int dummy; } ;
struct TYPE_5__ {unsigned long data; scalar_t__ expires; int function; } ;
struct TYPE_4__ {int max_pstate; } ;
struct cpudata {unsigned int cpu; TYPE_2__ timer; TYPE_1__ pstate; struct pstate_adjust_policy* pstate_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,unsigned int) ;
 struct cpudata** VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct cpudata*) ;
 int VAR_5 ;
 int FUNC_3 (struct cpudata*) ;
 int FUNC_4 (struct cpudata*) ;
 int FUNC_5 (struct cpudata*) ;
 int FUNC_6 (struct cpudata*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct cpudata* FUNC_7 (int,int ) ;
 int FUNC_8 (char*,unsigned int) ;
 struct x86_cpu_id* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(unsigned int VAR_8)
{

 const struct x86_cpu_id *VAR_9;
 struct cpudata *VAR_10;

 VAR_9 = FUNC_9(VAR_5);
 if (!VAR_9)
  return -VAR_0;

 VAR_4[VAR_8] = FUNC_7(sizeof(struct cpudata), VAR_2);
 if (!VAR_4[VAR_8])
  return -VAR_1;

 VAR_10 = VAR_4[VAR_8];

 FUNC_3(VAR_10);

 VAR_10->cpu = VAR_8;
 VAR_10->pstate_policy =
  (struct pstate_adjust_policy *)VAR_9->driver_data;
 FUNC_1(&VAR_10->timer);
 VAR_10->timer.function = VAR_6;
 VAR_10->timer.data =
  (unsigned long)VAR_10;
 VAR_10->timer.expires = VAR_7 + VAR_3/100;
 FUNC_2(VAR_10);
 FUNC_4(VAR_10);
 FUNC_5(VAR_10);
 FUNC_6(VAR_10, VAR_10->pstate.max_pstate);

 FUNC_0(&VAR_10->timer, VAR_8);

 FUNC_8("Intel pstate controlling: cpu %d\n", VAR_8);

 return 0;
}
