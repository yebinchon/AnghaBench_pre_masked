
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_table_entry {unsigned long region_start; unsigned long region_end; } ;
struct unwind_table {int length; struct unwind_table_entry* table; } ;



__attribute__((used)) static inline const struct unwind_table_entry *
FUNC_0(const struct unwind_table *VAR_0, unsigned long VAR_1)
{
 const struct unwind_table_entry *VAR_2 = ((void*)0);
 unsigned long VAR_3, VAR_4, VAR_5;

 VAR_3 = 0;
 VAR_4 = VAR_0->length - 1;

 while (VAR_3 <= VAR_4) {
  VAR_5 = (VAR_4 - VAR_3) / 2 + VAR_3;
  VAR_2 = &VAR_0->table[VAR_5];
  if (VAR_1 < VAR_2->region_start)
   VAR_4 = VAR_5 - 1;
  else if (VAR_1 > VAR_2->region_end)
   VAR_3 = VAR_5 + 1;
  else
   return VAR_2;
 }

 return ((void*)0);
}
