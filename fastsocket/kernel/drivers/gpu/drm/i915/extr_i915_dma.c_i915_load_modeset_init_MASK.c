
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ suspended; } ;
struct drm_i915_private {int enable_hotplug_processing; TYPE_1__ mm; int console_resume_work; } ;
struct drm_device {int vblank_disable_allowed; int pdev; int struct_mutex; struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,struct drm_device*,int *,int *) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct drm_device *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 int VAR_6;

 VAR_6 = FUNC_15(VAR_4);
 if (VAR_6)
  FUNC_0("failed to find VBIOS tables\n");
 VAR_6 = FUNC_19(VAR_4->pdev, VAR_4, ((void*)0), VAR_2);
 if (VAR_6 && VAR_6 != -VAR_0)
  goto out;

 FUNC_16();

 VAR_6 = FUNC_20(VAR_4->pdev, &VAR_1);
 if (VAR_6)
  goto cleanup_vga_client;




 VAR_6 = FUNC_9(VAR_4);
 if (VAR_6)
  goto cleanup_vga_switcheroo;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  goto cleanup_gem_stolen;



 FUNC_14(VAR_4);

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6)
  goto cleanup_irq;

 FUNC_1(&VAR_5->console_resume_work, VAR_3);

 FUNC_13(VAR_4);



 VAR_4->vblank_disable_allowed = 1;

 VAR_6 = FUNC_10(VAR_4);
 if (VAR_6)
  goto cleanup_gem;


 FUNC_12(VAR_4);
 FUNC_11(VAR_4);


 VAR_5->enable_hotplug_processing = 1;

 FUNC_4(VAR_4);


 VAR_5->mm.suspended = 0;

 return 0;

cleanup_gem:
 FUNC_17(&VAR_4->struct_mutex);
 FUNC_6(VAR_4);
 FUNC_18(&VAR_4->struct_mutex);
 FUNC_5(VAR_4);
cleanup_irq:
 FUNC_3(VAR_4);
cleanup_gem_stolen:
 FUNC_7(VAR_4);
cleanup_vga_switcheroo:
 FUNC_21(VAR_4->pdev);
cleanup_vga_client:
 FUNC_19(VAR_4->pdev, ((void*)0), ((void*)0), ((void*)0));
out:
 return VAR_6;
}
