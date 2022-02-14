
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ips_driver {int __gpu_turbo_on; TYPE_1__* dev; int (* gpu_turbo_disable ) () ;} ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct ips_driver *VAR_0)
{

 if (!VAR_0->__gpu_turbo_on)
  return;

 if (!VAR_0->gpu_turbo_disable())
  FUNC_0(&VAR_0->dev->dev, "failed to disable graphis turbo\n");
 else
  VAR_0->__gpu_turbo_on = 0;
}
