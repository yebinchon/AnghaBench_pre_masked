
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {scalar_t__ skip; scalar_t__ nr_entries; scalar_t__ max_entries; unsigned long* entries; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, unsigned long VAR_1, int VAR_2)
{
 struct stack_trace *VAR_3 = VAR_0;

 if (!VAR_2)
  return;

 if (VAR_3->skip > 0) {
  VAR_3->skip--;
  return;
 }

 if (VAR_3->nr_entries < VAR_3->max_entries)
  VAR_3->entries[VAR_3->nr_entries++] = VAR_1;
}
