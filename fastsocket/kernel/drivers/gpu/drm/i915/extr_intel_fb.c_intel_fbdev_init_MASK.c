
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * funcs; } ;
struct intel_fbdev {TYPE_2__ helper; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int num_pipe; struct intel_fbdev* fbdev; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_2 (struct intel_fbdev*) ;
 struct intel_fbdev* FUNC_3 (int,int ) ;

int FUNC_4(struct drm_device *VAR_4)
{
 struct intel_fbdev *VAR_5;
 drm_i915_private_t *VAR_6 = VAR_4->dev_private;
 int VAR_7;

 VAR_5 = FUNC_3(sizeof(struct intel_fbdev), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6->fbdev = VAR_5;
 VAR_5->helper.funcs = &VAR_3;

 VAR_7 = FUNC_0(VAR_4, &VAR_5->helper,
     VAR_6->num_pipe,
     VAR_2);
 if (VAR_7) {
  FUNC_2(VAR_5);
  return VAR_7;
 }

 FUNC_1(&VAR_5->helper);

 return 0;
}
