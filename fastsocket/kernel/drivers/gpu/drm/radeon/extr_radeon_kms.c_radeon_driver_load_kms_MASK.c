
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct drm_device {TYPE_1__* pdev; void* dev_private; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 struct radeon_device* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,struct drm_device*,TYPE_1__*,unsigned long) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct radeon_device*) ;

int FUNC_9(struct drm_device *VAR_5, unsigned long VAR_6)
{
 struct radeon_device *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_3(sizeof(struct radeon_device), VAR_1);
 if (VAR_7 == ((void*)0)) {
  return -VAR_0;
 }
 VAR_5->dev_private = (void *)VAR_7;


 if (FUNC_2(VAR_5)) {
  VAR_6 |= VAR_2;
 } else if (FUNC_4(VAR_5->pdev)) {
  VAR_6 |= VAR_4;
 } else {
  VAR_6 |= VAR_3;
 }







 VAR_8 = FUNC_6(VAR_7, VAR_5, VAR_5->pdev, VAR_6);
 if (VAR_8) {
  FUNC_1(&VAR_5->pdev->dev, "Fatal error during GPU init\n");
  goto out;
 }





 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8)
  FUNC_1(&VAR_5->pdev->dev, "Fatal error during modeset init\n");




 if (!VAR_8) {
  VAR_9 = FUNC_5(VAR_7);
  if (VAR_9)
  FUNC_0(&VAR_5->pdev->dev,
    "Error during ACPI methods call\n");
 }

out:
 if (VAR_8)
  FUNC_7(VAR_5);
 return VAR_8;
}
