
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper {struct drm_device* dev; } ;
struct TYPE_2__ {int max_height; int max_width; } ;
struct drm_device {int dev; TYPE_1__ mode_config; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct drm_fb_helper*,int ,int ) ;
 int FUNC_3 (struct drm_fb_helper*,int) ;
 int FUNC_4 (struct drm_fb_helper*) ;

bool FUNC_5(struct drm_fb_helper *VAR_0, int VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 int VAR_3 = 0;

 FUNC_1(VAR_0);

 VAR_3 = FUNC_2(VAR_0,
          VAR_2->mode_config.max_width,
          VAR_2->mode_config.max_height);



 if (VAR_3 == 0)
  FUNC_0(VAR_0->dev->dev, "No connectors reported connected with modes\n");

 FUNC_4(VAR_0);

 return FUNC_3(VAR_0, VAR_1);
}
