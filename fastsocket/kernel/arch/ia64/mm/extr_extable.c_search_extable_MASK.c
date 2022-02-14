
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct exception_table_entry {int addr; } ;



const struct exception_table_entry *
FUNC_0 (const struct exception_table_entry *VAR_0,
  const struct exception_table_entry *VAR_1,
  unsigned long VAR_2)
{
 const struct exception_table_entry *VAR_3;
 unsigned long VAR_4;
 long VAR_5;

        while (VAR_0 <= VAR_1) {
  VAR_3 = &VAR_0[(VAR_1 - VAR_0)/2];
  VAR_4 = (u64) &VAR_3->addr + VAR_3->addr;
  VAR_5 = VAR_4 - VAR_2;
                if (VAR_5 == 0)
                        return VAR_3;
                else if (VAR_5 < 0)
                        VAR_0 = VAR_3 + 1;
                else
                        VAR_1 = VAR_3 - 1;
        }
        return ((void*)0);
}
