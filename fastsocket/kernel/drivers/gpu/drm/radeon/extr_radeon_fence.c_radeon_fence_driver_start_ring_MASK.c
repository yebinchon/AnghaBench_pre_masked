
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ gpu_addr; int * wb; scalar_t__ use_event; } ;
struct TYPE_4__ {int reg_base; } ;
struct radeon_device {TYPE_3__* fence_drv; int dev; TYPE_2__ wb; TYPE_1__ scratch; int * ring; } ;
struct TYPE_6__ {int scratch_reg; int initialized; int * cpu_addr; scalar_t__ gpu_addr; int last_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,scalar_t__,int *) ;
 int FUNC_3 (struct radeon_device*,int ,int) ;
 int FUNC_4 (struct radeon_device*,int *) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (struct radeon_device*,int*) ;

int FUNC_7(struct radeon_device *VAR_2, int VAR_3)
{
 uint64_t VAR_4;
 int VAR_5;

 FUNC_5(VAR_2, VAR_2->fence_drv[VAR_3].scratch_reg);
 if (VAR_2->wb.use_event || !FUNC_4(VAR_2, &VAR_2->ring[VAR_3])) {
  VAR_2->fence_drv[VAR_3].scratch_reg = 0;
  VAR_4 = VAR_0 + VAR_3 * 4;
 } else {
  VAR_5 = FUNC_6(VAR_2, &VAR_2->fence_drv[VAR_3].scratch_reg);
  if (VAR_5) {
   FUNC_1(VAR_2->dev, "fence failed to get scratch register\n");
   return VAR_5;
  }
  VAR_4 = VAR_1 +
   VAR_2->fence_drv[VAR_3].scratch_reg -
   VAR_2->scratch.reg_base;
 }
 VAR_2->fence_drv[VAR_3].cpu_addr = &VAR_2->wb.wb[VAR_4/4];
 VAR_2->fence_drv[VAR_3].gpu_addr = VAR_2->wb.gpu_addr + VAR_4;
 FUNC_3(VAR_2, FUNC_0(&VAR_2->fence_drv[VAR_3].last_seq), VAR_3);
 VAR_2->fence_drv[VAR_3].initialized = 1;
 FUNC_2(VAR_2->dev, "fence driver on ring %d use gpu addr 0x%016llx and cpu addr 0x%p\n",
   VAR_3, VAR_2->fence_drv[VAR_3].gpu_addr, VAR_2->fence_drv[VAR_3].cpu_addr);
 return 0;
}
