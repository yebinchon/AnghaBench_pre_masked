
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_semaphore {int dummy; } ;
struct radeon_sa_bo {int dummy; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,struct radeon_fence**,struct radeon_sa_bo*,struct radeon_semaphore*) ;
 int FUNC_1 (struct radeon_device*,unsigned int,struct radeon_fence**,struct radeon_sa_bo**,struct radeon_semaphore**) ;
 int FUNC_2 (struct radeon_device*,int ,int ,unsigned int,struct radeon_sa_bo*) ;

int FUNC_3(struct radeon_device *VAR_0,
     uint64_t VAR_1,
     uint64_t VAR_2,
     unsigned VAR_3,
     struct radeon_fence **VAR_4)
{
 struct radeon_semaphore *VAR_5 = ((void*)0);
 struct radeon_sa_bo *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_3, VAR_4, &VAR_6, &VAR_5);
 if (VAR_7) {
  return VAR_7;
 }
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
 FUNC_0(VAR_0, VAR_4, VAR_6, VAR_5);
 return 0;
}
