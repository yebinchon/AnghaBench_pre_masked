
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dev; int fence_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int) ;

int FUNC_4(struct radeon_device *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->fence_queue);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_3(VAR_1, VAR_2);
 }
 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_1->dev, "fence debugfs file creation failed\n");
 }
 return 0;
}
