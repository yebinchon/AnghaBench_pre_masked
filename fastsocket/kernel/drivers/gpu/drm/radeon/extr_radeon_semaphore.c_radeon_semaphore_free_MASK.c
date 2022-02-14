
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_semaphore {scalar_t__ waiters; int sa_bo; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dev; } ;


 int FUNC_0 (int ,char*,struct radeon_semaphore*) ;
 int FUNC_1 (struct radeon_semaphore*) ;
 int FUNC_2 (struct radeon_device*,int *,struct radeon_fence*) ;

void FUNC_3(struct radeon_device *VAR_0,
      struct radeon_semaphore **VAR_1,
      struct radeon_fence *VAR_2)
{
 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0)) {
  return;
 }
 if ((*VAR_1)->waiters > 0) {
  FUNC_0(VAR_0->dev, "semaphore %p has more waiters than signalers,"
   " hardware lockup imminent!\n", *VAR_1);
 }
 FUNC_2(VAR_0, &(*VAR_1)->sa_bo, VAR_2);
 FUNC_1(*VAR_1);
 *VAR_1 = ((void*)0);
}
