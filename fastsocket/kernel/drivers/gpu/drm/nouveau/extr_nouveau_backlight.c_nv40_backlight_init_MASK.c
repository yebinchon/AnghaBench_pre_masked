
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {struct backlight_device* backlight; int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_connector {int kdev; int dev; } ;
struct TYPE_2__ {int max_brightness; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (char*,int *,struct nouveau_drm*,int *) ;
 int FUNC_3 (struct backlight_device*) ;
 struct nouveau_drm* FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct backlight_device*) ;
 struct nouveau_device* FUNC_6 (int ) ;
 int FUNC_7 (struct nouveau_device*,int ) ;

__attribute__((used)) static int
FUNC_8(struct drm_connector *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_4(VAR_3->dev);
 struct nouveau_device *VAR_5 = FUNC_6(VAR_4->device);
 struct backlight_device *VAR_6;

 if (!(FUNC_7(VAR_5, VAR_0) & VAR_1))
  return 0;

 VAR_6 = FUNC_2("nv_backlight", &VAR_3->kdev, VAR_4,
           &VAR_2);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_4->backlight = VAR_6;
 VAR_6->props.brightness = FUNC_5(VAR_6);
 VAR_6->props.max_brightness = 31;
 FUNC_3(VAR_6);

 return 0;
}
