
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct radeon_semaphore {int sa_bo; int gpu_addr; scalar_t__ waiters; } ;
struct radeon_device {int ring_tmp_bo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_semaphore*) ;
 struct radeon_semaphore* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*,int *,int *,int,int,int) ;

int FUNC_5(struct radeon_device *VAR_2,
       struct radeon_semaphore **VAR_3)
{
 int VAR_4;

 *VAR_3 = FUNC_1(sizeof(struct radeon_semaphore), VAR_1);
 if (*VAR_3 == ((void*)0)) {
  return -VAR_0;
 }
 VAR_4 = FUNC_4(VAR_2, &VAR_2->ring_tmp_bo,
        &(*VAR_3)->sa_bo, 8, 8, 1);
 if (VAR_4) {
  FUNC_0(*VAR_3);
  *VAR_3 = ((void*)0);
  return VAR_4;
 }
 (*VAR_3)->waiters = 0;
 (*VAR_3)->gpu_addr = FUNC_3((*VAR_3)->sa_bo);
 *((uint64_t*)FUNC_2((*VAR_3)->sa_bo)) = 0;
 return 0;
}
