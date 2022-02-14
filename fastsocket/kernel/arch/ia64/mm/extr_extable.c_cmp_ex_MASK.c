
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct exception_table_entry {scalar_t__ addr; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct exception_table_entry *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 u64 VAR_4 = (u64) &VAR_2->addr + VAR_2->addr;
 u64 VAR_5 = (u64) &VAR_3->addr + VAR_3->addr;


 if (VAR_4 > VAR_5)
  return 1;
 if (VAR_4 < VAR_5)
  return -1;
 return 0;
}
