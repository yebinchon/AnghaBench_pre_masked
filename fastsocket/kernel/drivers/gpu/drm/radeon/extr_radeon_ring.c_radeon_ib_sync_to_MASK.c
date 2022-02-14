
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ib {struct radeon_fence** sync_to; } ;
struct radeon_fence {size_t ring; } ;


 struct radeon_fence* FUNC_0 (struct radeon_fence*,struct radeon_fence*) ;

void FUNC_1(struct radeon_ib *VAR_0, struct radeon_fence *VAR_1)
{
 struct radeon_fence *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_0->sync_to[VAR_1->ring];
 VAR_0->sync_to[VAR_1->ring] = FUNC_0(VAR_1, VAR_2);
}
