
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int skip; int max_entries; int entries; scalar_t__ nr_entries; } ;
struct kmemcheck_error {TYPE_1__ trace; int trace_entries; int regs; int type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct kmemcheck_error* FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,struct pt_regs*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct pt_regs *VAR_2)
{
 struct kmemcheck_error *VAR_3;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return;

 VAR_3->type = VAR_0;

 FUNC_2(&VAR_3->regs, VAR_2, sizeof(*VAR_2));

 VAR_3->trace.nr_entries = 0;
 VAR_3->trace.entries = VAR_3->trace_entries;
 VAR_3->trace.max_entries = FUNC_0(VAR_3->trace_entries);
 VAR_3->trace.skip = 1;
 FUNC_3(&VAR_3->trace);

 FUNC_4(&VAR_1);
}
