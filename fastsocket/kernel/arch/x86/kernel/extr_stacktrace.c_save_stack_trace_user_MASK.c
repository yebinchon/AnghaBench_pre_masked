
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; int * entries; } ;
struct TYPE_2__ {scalar_t__ mm; } ;


 int VAR_0 ;
 int FUNC_0 (struct stack_trace*) ;
 TYPE_1__* VAR_1 ;

void FUNC_1(struct stack_trace *VAR_2)
{



 if (VAR_1->mm) {
  FUNC_0(VAR_2);
 }
 if (VAR_2->nr_entries < VAR_2->max_entries)
  VAR_2->entries[VAR_2->nr_entries++] = VAR_0;
}
