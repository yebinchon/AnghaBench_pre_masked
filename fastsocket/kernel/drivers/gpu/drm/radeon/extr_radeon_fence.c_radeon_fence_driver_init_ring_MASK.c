
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* fence_drv; } ;
struct TYPE_2__ {int scratch_reg; int initialized; int last_activity; int last_seq; scalar_t__* sync_seq; scalar_t__ gpu_addr; int * cpu_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_2->fence_drv[VAR_3].scratch_reg = -1;
 VAR_2->fence_drv[VAR_3].cpu_addr = ((void*)0);
 VAR_2->fence_drv[VAR_3].gpu_addr = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  VAR_2->fence_drv[VAR_3].sync_seq[VAR_4] = 0;
 FUNC_0(&VAR_2->fence_drv[VAR_3].last_seq, 0);
 VAR_2->fence_drv[VAR_3].last_activity = VAR_1;
 VAR_2->fence_drv[VAR_3].initialized = 0;
}
