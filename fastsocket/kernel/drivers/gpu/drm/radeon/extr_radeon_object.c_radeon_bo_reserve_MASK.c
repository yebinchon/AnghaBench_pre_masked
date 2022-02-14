
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_bo {TYPE_1__* rdev; int tbo; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct radeon_bo*) ;
 int FUNC_1 (int *,int,int,int,int ) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct radeon_bo *VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_1->tbo, !VAR_2, 0, 0, 0);
 if (FUNC_2(VAR_3 != 0)) {
  if (VAR_3 != -VAR_0)
   FUNC_0(VAR_1->rdev->dev, "%p reserve failed\n", VAR_1);
  return VAR_3;
 }
 return 0;
}
