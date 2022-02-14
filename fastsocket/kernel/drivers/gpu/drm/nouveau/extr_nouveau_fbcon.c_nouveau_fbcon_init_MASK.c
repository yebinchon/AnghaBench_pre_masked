
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * funcs; } ;
struct nouveau_fbdev {TYPE_3__ helper; struct drm_device* dev; } ;
struct TYPE_7__ {int size; } ;
struct nouveau_fb {TYPE_2__ ram; } ;
struct nouveau_drm {struct nouveau_fbdev* fbcon; int device; } ;
struct TYPE_6__ {int num_crtc; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct nouveau_fbdev*) ;
 struct nouveau_fbdev* FUNC_5 (int,int ) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 struct nouveau_fb* FUNC_7 (int ) ;
 int VAR_2 ;

int
FUNC_8(struct drm_device *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_6(VAR_3);
 struct nouveau_fb *VAR_5 = FUNC_7(VAR_4->device);
 struct nouveau_fbdev *VAR_6;
 int VAR_7;
 int VAR_8;

 if (!VAR_3->mode_config.num_crtc)
  return 0;

 VAR_6 = FUNC_5(sizeof(struct nouveau_fbdev), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = VAR_3;
 VAR_4->fbcon = VAR_6;
 VAR_6->helper.funcs = &VAR_2;

 VAR_8 = FUNC_0(VAR_3, &VAR_6->helper,
     VAR_3->mode_config.num_crtc, 4);
 if (VAR_8) {
  FUNC_4(VAR_6);
  return VAR_8;
 }

 FUNC_2(&VAR_6->helper);

 if (VAR_5->ram.size <= 32 * 1024 * 1024)
  VAR_7 = 8;
 else
 if (VAR_5->ram.size <= 64 * 1024 * 1024)
  VAR_7 = 16;
 else
  VAR_7 = 32;


 FUNC_3(VAR_3);

 FUNC_1(&VAR_6->helper, VAR_7);
 return 0;
}
