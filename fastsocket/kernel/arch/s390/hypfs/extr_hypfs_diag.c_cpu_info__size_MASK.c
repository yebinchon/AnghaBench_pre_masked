
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x_cpu_info {int dummy; } ;
struct cpu_info {int dummy; } ;
typedef enum diag204_format { ____Placeholder_diag204_format } diag204_format ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(enum diag204_format VAR_1)
{
 if (VAR_1 == VAR_0)
  return sizeof(struct cpu_info);
 else
  return sizeof(struct x_cpu_info);
}
