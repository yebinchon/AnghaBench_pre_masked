
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int num_crtc; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct radeon_device*,int) ;

u32 FUNC_2(struct drm_device *VAR_1, int VAR_2)
{
 struct radeon_device *VAR_3 = VAR_1->dev_private;

 if (VAR_2 < 0 || VAR_2 >= VAR_3->num_crtc) {
  FUNC_0("Invalid crtc %d\n", VAR_2);
  return -VAR_0;
 }

 return FUNC_1(VAR_3, VAR_2);
}
