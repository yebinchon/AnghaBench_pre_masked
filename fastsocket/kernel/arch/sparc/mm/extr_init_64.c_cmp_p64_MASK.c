
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_prom64_registers {scalar_t__ phys_addr; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct linux_prom64_registers *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 if (VAR_2->phys_addr > VAR_3->phys_addr)
  return 1;
 if (VAR_2->phys_addr < VAR_3->phys_addr)
  return -1;
 return 0;
}
