
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {struct drm_file* cmask_filp; struct drm_file* hyperz_filp; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;



void FUNC_0(struct drm_device *VAR_0,
    struct drm_file *VAR_1)
{
 struct radeon_device *VAR_2 = VAR_0->dev_private;
 if (VAR_2->hyperz_filp == VAR_1)
  VAR_2->hyperz_filp = ((void*)0);
 if (VAR_2->cmask_filp == VAR_1)
  VAR_2->cmask_filp = ((void*)0);
}
