
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ips_driver {int (* gpu_busy ) () ;} ;


 int FUNC_0 (struct ips_driver*) ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct ips_driver *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0;

 return VAR_0->gpu_busy();
}
