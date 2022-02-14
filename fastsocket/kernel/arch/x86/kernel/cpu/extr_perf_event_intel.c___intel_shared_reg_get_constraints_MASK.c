
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct hw_perf_event_extra {int idx; int alloc; scalar_t__ config; int reg; } ;
struct event_constraint {int dummy; } ;
struct er_account {scalar_t__ config; int lock; int ref; int reg; } ;
struct cpu_hw_events {TYPE_1__* shared_regs; } ;
struct TYPE_2__ {struct er_account* regs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct event_constraint VAR_0 ;
 scalar_t__ FUNC_2 (struct perf_event*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static struct event_constraint *
FUNC_5(struct cpu_hw_events *VAR_1,
       struct perf_event *VAR_2,
       struct hw_perf_event_extra *VAR_3)
{
 struct event_constraint *VAR_4 = &VAR_0;
 struct er_account *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = VAR_3->idx;


 if (VAR_3->alloc)
  return ((void*)0);

again:
 VAR_5 = &VAR_1->shared_regs->regs[VAR_3->idx];




 FUNC_3(&VAR_5->lock, VAR_6);

 if (!FUNC_1(&VAR_5->ref) || VAR_5->config == VAR_3->config) {


  VAR_5->config = VAR_3->config;
  VAR_5->reg = VAR_3->reg;


  FUNC_0(&VAR_5->ref);


  VAR_3->alloc = 1;





  VAR_4 = ((void*)0);
 } else if (FUNC_2(VAR_2, VAR_7)) {
  FUNC_4(&VAR_5->lock, VAR_6);
  goto again;
 }
 FUNC_4(&VAR_5->lock, VAR_6);

 return VAR_4;
}
