
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_fence {int ring; scalar_t__ seq; struct radeon_device* rdev; int kref; } ;
struct radeon_device {int ddev; TYPE_1__* fence_drv; } ;
struct TYPE_2__ {scalar_t__* sync_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct radeon_fence* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_device*,int,struct radeon_fence*) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(struct radeon_device *VAR_2,
        struct radeon_fence **VAR_3,
        int VAR_4)
{

 *VAR_3 = FUNC_0(sizeof(struct radeon_fence), VAR_1);
 if ((*VAR_3) == ((void*)0)) {
  return -VAR_0;
 }
 FUNC_1(&((*VAR_3)->kref));
 (*VAR_3)->rdev = VAR_2;
 (*VAR_3)->seq = ++VAR_2->fence_drv[VAR_4].sync_seq[VAR_4];
 (*VAR_3)->ring = VAR_4;
 FUNC_2(VAR_2, VAR_4, *VAR_3);
 FUNC_3(VAR_2->ddev, (*VAR_3)->seq);
 return 0;
}
