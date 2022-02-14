
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_semaphore {int waiters; } ;
struct radeon_device {int * ring; } ;


 int FUNC_0 (struct radeon_device*,int,int *,struct radeon_semaphore*,int) ;

void FUNC_1(struct radeon_device *VAR_0, int VAR_1,
             struct radeon_semaphore *VAR_2)
{
 --VAR_2->waiters;
 FUNC_0(VAR_0, VAR_1, &VAR_0->ring[VAR_1], VAR_2, 0);
}
