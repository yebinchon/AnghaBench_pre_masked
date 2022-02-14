
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct radeon_ring {int dummy; } ;
struct radeon_fence {size_t ring; int seq; } ;
struct radeon_device {TYPE_1__* fence_drv; struct radeon_ring* ring; } ;
struct TYPE_2__ {int gpu_addr; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct radeon_ring*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_4,
       struct radeon_fence *VAR_5)
{
 struct radeon_ring *VAR_6 = &VAR_4->ring[VAR_5->ring];
 u64 VAR_7 = VAR_4->fence_drv[VAR_5->ring].gpu_addr;

 FUNC_1(VAR_6, FUNC_0(VAR_0, 0, 0));
 FUNC_1(VAR_6, VAR_7 & 0xfffffffc);
 FUNC_1(VAR_6, (FUNC_2(VAR_7) & 0xff));
 FUNC_1(VAR_6, VAR_5->seq);

 FUNC_1(VAR_6, FUNC_0(VAR_2, 0, 0));

 FUNC_1(VAR_6, FUNC_0(VAR_1, 0, 0));
 FUNC_1(VAR_6, (0xf << 16) | (VAR_3 >> 2));
 FUNC_1(VAR_6, 1);
}
