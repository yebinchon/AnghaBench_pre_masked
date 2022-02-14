
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_fence_driver {int scratch_reg; int * cpu_addr; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; struct radeon_fence_driver* fence_drv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct radeon_device *VAR_0, int VAR_1)
{
 struct radeon_fence_driver *VAR_2 = &VAR_0->fence_drv[VAR_1];
 u32 VAR_3 = 0;

 if (FUNC_2(VAR_0->wb.enabled || !VAR_2->scratch_reg)) {
  VAR_3 = FUNC_1(*VAR_2->cpu_addr);
 } else {
  VAR_3 = FUNC_0(VAR_2->scratch_reg);
 }
 return VAR_3;
}
