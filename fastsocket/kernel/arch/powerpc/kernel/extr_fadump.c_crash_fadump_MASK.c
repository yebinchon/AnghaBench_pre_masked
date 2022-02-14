
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct fadump_crash_info_header {int cpu_online_mask; struct pt_regs regs; int crashing_cpu; } ;
struct TYPE_2__ {int fadumphdr_addr; int dump_registered; } ;


 struct fadump_crash_info_header* FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

void FUNC_5(struct pt_regs *VAR_3, const char *VAR_4)
{
 struct fadump_crash_info_header *VAR_5 = ((void*)0);

 if (!VAR_2.dump_registered || !VAR_2.fadumphdr_addr)
  return;

 VAR_5 = FUNC_0(VAR_2.fadumphdr_addr);
 VAR_1 = FUNC_4();
 VAR_5->crashing_cpu = VAR_1;
 FUNC_1();

 if (VAR_3)
  VAR_5->regs = *VAR_3;
 else
  FUNC_2(&VAR_5->regs);

 VAR_5->cpu_online_mask = *VAR_0;


 FUNC_3((char *)VAR_4);
}
