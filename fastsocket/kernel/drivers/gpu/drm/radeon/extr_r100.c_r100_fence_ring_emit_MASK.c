
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_ring {int dummy; } ;
struct radeon_fence {size_t ring; int seq; } ;
struct TYPE_4__ {int hdp_cntl; } ;
struct TYPE_5__ {TYPE_1__ r100; } ;
struct radeon_device {TYPE_3__* fence_drv; TYPE_2__ config; struct radeon_ring* ring; } ;
struct TYPE_6__ {int scratch_reg; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct radeon_ring*,int) ;

void FUNC_2(struct radeon_device *VAR_11,
     struct radeon_fence *VAR_12)
{
 struct radeon_ring *VAR_13 = &VAR_11->ring[VAR_12->ring];



 FUNC_1(VAR_13, FUNC_0(VAR_4, 0));
 FUNC_1(VAR_13, VAR_3);
 FUNC_1(VAR_13, FUNC_0(VAR_5, 0));
 FUNC_1(VAR_13, VAR_6);

 FUNC_1(VAR_13, FUNC_0(VAR_10, 0));
 FUNC_1(VAR_13, VAR_8 | VAR_9);
 FUNC_1(VAR_13, FUNC_0(VAR_2, 0));
 FUNC_1(VAR_13, VAR_11->config.r100.hdp_cntl |
    VAR_1);
 FUNC_1(VAR_13, FUNC_0(VAR_2, 0));
 FUNC_1(VAR_13, VAR_11->config.r100.hdp_cntl);

 FUNC_1(VAR_13, FUNC_0(VAR_11->fence_drv[VAR_12->ring].scratch_reg, 0));
 FUNC_1(VAR_13, VAR_12->seq);
 FUNC_1(VAR_13, FUNC_0(VAR_0, 0));
 FUNC_1(VAR_13, VAR_7);
}
