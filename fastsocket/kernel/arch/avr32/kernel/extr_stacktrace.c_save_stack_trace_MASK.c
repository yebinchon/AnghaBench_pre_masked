
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {unsigned long fp; int lr; } ;
struct stack_trace {int skip; scalar_t__ nr_entries; scalar_t__ max_entries; int * entries; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(struct stack_trace *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6;
 struct stackframe *VAR_7;
 int VAR_8 = VAR_3->skip;

 VAR_4 = (unsigned long)FUNC_0(VAR_1);
 VAR_5 = VAR_4 + VAR_0;
 VAR_6 = VAR_2;

 while (VAR_6 >= VAR_4 && VAR_6 <= (VAR_5 - 8)) {
  VAR_7 = (struct stackframe *)VAR_6;

  if (VAR_8) {
   VAR_8--;
  } else {
   VAR_3->entries[VAR_3->nr_entries++] = VAR_7->lr;
   if (VAR_3->nr_entries >= VAR_3->max_entries)
    break;
  }





  VAR_4 = VAR_6 + 8;
  VAR_6 = VAR_7->fp;
 }
}
