
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct radeon_ring {int dummy; } ;
struct radeon_fence {size_t ring; int seq; } ;
struct TYPE_3__ {scalar_t__ use_event; } ;
struct radeon_device {TYPE_2__* fence_drv; TYPE_1__ wb; struct radeon_ring* ring; } ;
struct TYPE_4__ {int gpu_addr; int scratch_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
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
 int VAR_14 ;
 int FUNC_6 (struct radeon_ring*,int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct radeon_device *VAR_15,
     struct radeon_fence *VAR_16)
{
 struct radeon_ring *VAR_17 = &VAR_15->ring[VAR_16->ring];

 if (VAR_15->wb.use_event) {
  u64 VAR_18 = VAR_15->fence_drv[VAR_16->ring].gpu_addr;

  FUNC_6(VAR_17, FUNC_5(VAR_8, 3));
  FUNC_6(VAR_17, VAR_9 |
     VAR_10 |
     VAR_7);
  FUNC_6(VAR_17, 0xFFFFFFFF);
  FUNC_6(VAR_17, 0);
  FUNC_6(VAR_17, 10);

  FUNC_6(VAR_17, FUNC_5(VAR_4, 4));
  FUNC_6(VAR_17, FUNC_2(VAR_1) | FUNC_1(5));
  FUNC_6(VAR_17, VAR_18 & 0xffffffff);
  FUNC_6(VAR_17, (FUNC_7(VAR_18) & 0xff) | FUNC_0(1) | FUNC_3(2));
  FUNC_6(VAR_17, VAR_16->seq);
  FUNC_6(VAR_17, 0);
 } else {

  FUNC_6(VAR_17, FUNC_5(VAR_8, 3));
  FUNC_6(VAR_17, VAR_9 |
     VAR_10 |
     VAR_7);
  FUNC_6(VAR_17, 0xFFFFFFFF);
  FUNC_6(VAR_17, 0);
  FUNC_6(VAR_17, 10);
  FUNC_6(VAR_17, FUNC_5(VAR_3, 0));
  FUNC_6(VAR_17, FUNC_2(VAR_0) | FUNC_1(0));

  FUNC_6(VAR_17, FUNC_5(VAR_5, 1));
  FUNC_6(VAR_17, (VAR_14 - VAR_6) >> 2);
  FUNC_6(VAR_17, VAR_13 | VAR_12);

  FUNC_6(VAR_17, FUNC_5(VAR_5, 1));
  FUNC_6(VAR_17, ((VAR_15->fence_drv[VAR_16->ring].scratch_reg - VAR_6) >> 2));
  FUNC_6(VAR_17, VAR_16->seq);

  FUNC_6(VAR_17, FUNC_4(VAR_2, 0));
  FUNC_6(VAR_17, VAR_11);
 }
}
