
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
struct TYPE_5__ {TYPE_1__ r300; } ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct radeon_ring*,int) ;

void FUNC_2(struct radeon_device *VAR_14,
     struct radeon_fence *VAR_15)
{
 struct radeon_ring *VAR_16 = &VAR_14->ring[VAR_15->ring];




 FUNC_1(VAR_16, FUNC_0(VAR_4, 0));
 FUNC_1(VAR_16, 0);
 FUNC_1(VAR_16, FUNC_0(VAR_3, 0));
 FUNC_1(VAR_16, 0);

 FUNC_1(VAR_16, FUNC_0(VAR_1, 0));
 FUNC_1(VAR_16, VAR_0);
 FUNC_1(VAR_16, FUNC_0(VAR_2, 0));
 FUNC_1(VAR_16, VAR_5);

 FUNC_1(VAR_16, FUNC_0(VAR_13, 0));
 FUNC_1(VAR_16, (VAR_11 |
     VAR_10 |
     VAR_12));
 FUNC_1(VAR_16, FUNC_0(VAR_8, 0));
 FUNC_1(VAR_16, VAR_14->config.r300.hdp_cntl |
    VAR_7);
 FUNC_1(VAR_16, FUNC_0(VAR_8, 0));
 FUNC_1(VAR_16, VAR_14->config.r300.hdp_cntl);

 FUNC_1(VAR_16, FUNC_0(VAR_14->fence_drv[VAR_15->ring].scratch_reg, 0));
 FUNC_1(VAR_16, VAR_15->seq);
 FUNC_1(VAR_16, FUNC_0(VAR_6, 0));
 FUNC_1(VAR_16, VAR_9);
}
