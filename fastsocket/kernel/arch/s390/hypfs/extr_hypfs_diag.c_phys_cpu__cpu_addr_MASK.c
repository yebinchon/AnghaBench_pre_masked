
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x_phys_cpu {int cpu_addr; } ;
struct phys_cpu {int cpu_addr; } ;
typedef enum diag204_format { ____Placeholder_diag204_format } diag204_format ;
typedef int __u16 ;


 int VAR_0 ;

__attribute__((used)) static inline __u16 FUNC_0(enum diag204_format VAR_1, void *VAR_2)
{
 if (VAR_1 == VAR_0)
  return ((struct phys_cpu *)VAR_2)->cpu_addr;
 else
  return ((struct x_phys_cpu *)VAR_2)->cpu_addr;
}
