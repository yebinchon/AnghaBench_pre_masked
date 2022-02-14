
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_4__ {TYPE_1__** crtcs; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct drm_device {int num_crtcs; struct radeon_device* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_3__ {struct drm_crtc base; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,int,int*,struct timeval*,unsigned int,struct drm_crtc*) ;

int FUNC_2(struct drm_device *VAR_1, int VAR_2,
        int *VAR_3,
        struct timeval *VAR_4,
        unsigned VAR_5)
{
 struct drm_crtc *VAR_6;
 struct radeon_device *VAR_7 = VAR_1->dev_private;

 if (VAR_2 < 0 || VAR_2 >= VAR_1->num_crtcs) {
  FUNC_0("Invalid crtc %d\n", VAR_2);
  return -VAR_0;
 }


 VAR_6 = &VAR_7->mode_info.crtcs[VAR_2]->base;


 return FUNC_1(VAR_1, VAR_2, VAR_3,
           VAR_4, VAR_5,
           VAR_6);
}
