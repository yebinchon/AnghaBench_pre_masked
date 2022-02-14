
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_radeon_private {int r600_group_size; int r600_nbanks; int r600_npipes; } ;
struct drm_device {struct drm_radeon_private* dev_private; } ;



void FUNC_0(struct drm_device *VAR_0, u32 *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 struct drm_radeon_private *VAR_4 = VAR_0->dev_private;

 *VAR_1 = VAR_4->r600_npipes;
 *VAR_2 = VAR_4->r600_nbanks;
 *VAR_3 = VAR_4->r600_group_size;
}
