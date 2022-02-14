
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_fence {int seq; int ring; int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct radeon_fence*) ;
 int FUNC_1 (int ,int ,int ,int,int) ;

int FUNC_2(struct radeon_fence *VAR_2, bool VAR_3)
{
 int VAR_4;

 if (VAR_2 == ((void*)0)) {
  FUNC_0(1, "Querying an invalid fence : %p !\n", VAR_2);
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2->rdev, VAR_2->seq,
      VAR_2->ring, VAR_3, 1);
 if (VAR_4) {
  return VAR_4;
 }
 VAR_2->seq = VAR_1;
 return 0;
}
