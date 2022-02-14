
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct radeon_ring*,int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct radeon_device *VAR_8,
       struct radeon_fence *VAR_9)
{
 struct radeon_ring *VAR_10 = &VAR_8->ring[VAR_9->ring];
 u64 VAR_11 = VAR_8->fence_drv[VAR_9->ring].gpu_addr;


 FUNC_5(VAR_10, FUNC_4(VAR_3, 1));
 FUNC_5(VAR_10, (VAR_1 - VAR_4) >> 2);
 FUNC_5(VAR_10, 0);
 FUNC_5(VAR_10, FUNC_4(VAR_6, 3));
 FUNC_5(VAR_10, VAR_7 | VAR_5);
 FUNC_5(VAR_10, 0xFFFFFFFF);
 FUNC_5(VAR_10, 0);
 FUNC_5(VAR_10, 10);

 FUNC_5(VAR_10, FUNC_4(VAR_2, 4));
 FUNC_5(VAR_10, FUNC_2(VAR_0) | FUNC_1(5));
 FUNC_5(VAR_10, VAR_11 & 0xffffffff);
 FUNC_5(VAR_10, (FUNC_6(VAR_11) & 0xff) | FUNC_0(1) | FUNC_3(2));
 FUNC_5(VAR_10, VAR_9->seq);
 FUNC_5(VAR_10, 0);
}
