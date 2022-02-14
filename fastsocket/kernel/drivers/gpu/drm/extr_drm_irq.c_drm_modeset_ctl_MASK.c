
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_modeset_ctl {unsigned int crtc; int cmd; } ;
struct drm_file {int dummy; } ;
struct drm_device {unsigned int num_crtcs; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*,unsigned int) ;
 int FUNC_2 (struct drm_device*,unsigned int) ;

int FUNC_3(struct drm_device *VAR_2, void *VAR_3,
      struct drm_file *VAR_4)
{
 struct drm_modeset_ctl *VAR_5 = VAR_3;
 unsigned int VAR_6;


 if (!VAR_2->num_crtcs)
  return 0;


 if (FUNC_0(VAR_2, VAR_0))
  return 0;

 VAR_6 = VAR_5->crtc;
 if (VAR_6 >= VAR_2->num_crtcs)
  return -VAR_1;

 switch (VAR_5->cmd) {
 case 128:
  FUNC_2(VAR_2, VAR_6);
  break;
 case 129:
  FUNC_1(VAR_2, VAR_6);
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
