
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_fence {scalar_t__ seq; int ring; int rdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;

bool FUNC_1(struct radeon_fence *VAR_1)
{
 if (!VAR_1) {
  return 1;
 }
 if (VAR_1->seq == VAR_0) {
  return 1;
 }
 if (FUNC_0(VAR_1->rdev, VAR_1->seq, VAR_1->ring)) {
  VAR_1->seq = VAR_0;
  return 1;
 }
 return 0;
}
