
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {scalar_t__ skip; unsigned long* entries; scalar_t__ nr_entries; scalar_t__ max_entries; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long*) ;

__attribute__((used)) static void FUNC_2(struct stack_trace *VAR_0,
 unsigned long VAR_1)
{
 unsigned long *VAR_2 = (unsigned long *)VAR_1;
 unsigned long VAR_3;

 while (!FUNC_1(VAR_2)) {
  VAR_3 = *VAR_2++;
  if (FUNC_0(VAR_3)) {
   if (VAR_0->skip > 0)
    VAR_0->skip--;
   else
    VAR_0->entries[VAR_0->nr_entries++] = VAR_3;
   if (VAR_0->nr_entries >= VAR_0->max_entries)
    break;
  }
 }
}
