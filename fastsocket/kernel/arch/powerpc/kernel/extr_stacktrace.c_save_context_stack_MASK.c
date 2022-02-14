
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {unsigned long* entries; scalar_t__ nr_entries; scalar_t__ max_entries; int skip; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,struct task_struct*,int ) ;

__attribute__((used)) static void FUNC_2(struct stack_trace *VAR_2, unsigned long VAR_3,
   struct task_struct *VAR_4, int VAR_5)
{
 for (;;) {
  unsigned long *VAR_6 = (unsigned long *) VAR_3;
  unsigned long VAR_7, VAR_8;

  if (!FUNC_1(VAR_3, VAR_4, VAR_1))
   return;

  VAR_7 = VAR_6[0];
  VAR_8 = VAR_6[VAR_0];

  if (VAR_5 || !FUNC_0(VAR_8)) {
   if (!VAR_2->skip)
    VAR_2->entries[VAR_2->nr_entries++] = VAR_8;
   else
    VAR_2->skip--;
  }

  if (VAR_2->nr_entries >= VAR_2->max_entries)
   return;

  VAR_3 = VAR_7;
 }
}
