
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_drm* FUNC_0 (struct backlight_device*) ;
 struct nouveau_device* FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_device*,int ) ;
 int FUNC_3 (struct nouveau_device*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct backlight_device *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_0(VAR_2);
 struct nouveau_device *VAR_4 = FUNC_1(VAR_3->device);
 int VAR_5 = VAR_2->props.brightness;
 int VAR_6 = FUNC_2(VAR_4, VAR_0);

 FUNC_3(VAR_4, VAR_0,
   (VAR_5 << 16) | (VAR_6 & ~VAR_1));

 return 0;
}
