
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x_phys_hdr {int cpus; } ;
struct phys_hdr {int cpus; } ;
typedef enum diag204_format { ____Placeholder_diag204_format } diag204_format ;
typedef int __u8 ;


 int VAR_0 ;

__attribute__((used)) static inline __u8 FUNC_0(enum diag204_format VAR_1, void *VAR_2)
{
 if (VAR_1 == VAR_0)
  return ((struct phys_hdr *)VAR_2)->cpus;
 else
  return ((struct x_phys_hdr *)VAR_2)->cpus;
}
