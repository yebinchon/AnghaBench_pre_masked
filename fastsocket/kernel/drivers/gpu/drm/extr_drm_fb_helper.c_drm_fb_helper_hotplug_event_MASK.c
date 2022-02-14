
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_fb_helper {int delayed_hotplug; int fbdev; struct drm_device* dev; TYPE_1__* fb; } ;
struct TYPE_4__ {int mutex; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct TYPE_3__ {int bits_per_pixel; int height; int width; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct drm_fb_helper*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_fb_helper*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct drm_fb_helper *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 int VAR_2 = 0;
 u32 VAR_3, VAR_4, VAR_5;

 if (!VAR_0->fb)
  return 0;

 FUNC_7(&VAR_0->dev->mode_config.mutex);
 if (!FUNC_1(VAR_0)) {
  VAR_0->delayed_hotplug = 1;
  FUNC_8(&VAR_0->dev->mode_config.mutex);
  return 0;
 }
 FUNC_0("\n");

 VAR_3 = VAR_0->fb->width;
 VAR_4 = VAR_0->fb->height;
 VAR_5 = VAR_0->fb->bits_per_pixel;

 VAR_2 = FUNC_2(VAR_0, VAR_3,
          VAR_4);
 FUNC_8(&VAR_0->dev->mode_config.mutex);

 FUNC_4(VAR_1);
 FUNC_6(VAR_0);
 FUNC_5(VAR_1);
 FUNC_3(VAR_0->fbdev);

 return 0;
}
