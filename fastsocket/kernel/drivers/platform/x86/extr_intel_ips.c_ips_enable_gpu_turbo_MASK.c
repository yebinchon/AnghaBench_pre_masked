
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ips_driver {int __gpu_turbo_on; } ;



__attribute__((used)) static void FUNC_0(struct ips_driver *VAR_0)
{
 if (VAR_0->__gpu_turbo_on)
  return;
 VAR_0->__gpu_turbo_on = 1;
}
