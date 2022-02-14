
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int ip; } ;
struct perf_callchain_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* is_in_guest ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,struct pt_regs*,int *,int *,struct perf_callchain_entry*) ;
 int FUNC_1 (struct perf_callchain_entry*,int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 () ;

void
FUNC_3(struct perf_callchain_entry *VAR_2, struct pt_regs *VAR_3)
{
 if (VAR_1 && VAR_1->is_in_guest()) {

  return;
 }

 FUNC_1(VAR_2, VAR_3->ip);

 FUNC_0(((void*)0), VAR_3, ((void*)0), &VAR_0, VAR_2);
}
