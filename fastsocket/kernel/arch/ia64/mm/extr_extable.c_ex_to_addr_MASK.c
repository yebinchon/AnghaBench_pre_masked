
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {unsigned long addr; } ;



__attribute__((used)) static inline unsigned long FUNC_0(const struct exception_table_entry *VAR_0)
{
 return (unsigned long)&VAR_0->addr + VAR_0->addr;
}
