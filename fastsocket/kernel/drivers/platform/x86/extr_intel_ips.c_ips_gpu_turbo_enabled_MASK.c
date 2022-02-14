
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ips_driver {int gpu_turbo_enabled; TYPE_1__* dev; int gpu_busy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct ips_driver*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(struct ips_driver *VAR_3)
{
 if (!VAR_3->gpu_busy && VAR_2) {
  if (FUNC_1(VAR_3)) {
   FUNC_0(&VAR_3->dev->dev,
     "i915 driver attached, reenabling gpu turbo\n");
   VAR_3->gpu_turbo_enabled = !(FUNC_2(VAR_1) & VAR_0);
  }
 }

 return VAR_3->gpu_turbo_enabled;
}
