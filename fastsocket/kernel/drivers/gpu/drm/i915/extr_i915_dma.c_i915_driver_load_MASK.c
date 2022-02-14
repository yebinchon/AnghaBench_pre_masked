
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_device_info {int gen; } ;
struct TYPE_14__ {int (* gtt_remove ) (struct drm_device*) ;int * mappable; int mappable_base; int mappable_end; } ;
struct TYPE_15__ {scalar_t__ shrink; } ;
struct TYPE_13__ {int suspended; int gtt_mtrr; TYPE_5__ inactive_shrinker; } ;
struct TYPE_12__ {int hw_lock; int lock; } ;
struct TYPE_11__ {int lock; } ;
struct drm_i915_private {int num_pipe; int bridge_dev; TYPE_4__ gtt; int regs; TYPE_3__ mm; int * wq; int modeset_restore_lock; TYPE_2__ rps; int dpio_lock; TYPE_1__ gpu_error; int irq_lock; struct intel_device_info* info; struct drm_device* dev; } ;
struct drm_device {int counters; TYPE_6__* pdev; void* dev_private; int * types; } ;
typedef int drm_i915_private_t ;
struct TYPE_16__ {scalar_t__ msi_enabled; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 scalar_t__ FUNC_9 (struct drm_device*) ;
 scalar_t__ FUNC_10 (struct drm_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 () ;
 int * FUNC_12 (char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (struct drm_device*,int ) ;
 int FUNC_16 (struct drm_device*,int) ;
 int FUNC_17 (struct drm_i915_private*) ;
 int FUNC_18 (struct drm_device*) ;
 int FUNC_19 (struct drm_device*) ;
 scalar_t__ FUNC_20 (struct drm_device*) ;
 int FUNC_21 (struct drm_i915_private*) ;
 int FUNC_22 (struct drm_device*) ;
 int FUNC_23 (struct drm_i915_private*,int ,int ) ;
 int FUNC_24 (struct drm_device*) ;
 int FUNC_25 (struct drm_device*) ;
 int FUNC_26 (struct drm_i915_private*) ;
 int FUNC_27 (struct drm_device*) ;
 int FUNC_28 (struct drm_device*) ;
 int FUNC_29 (struct drm_device*) ;
 int FUNC_30 (struct drm_device*) ;
 int FUNC_31 (struct drm_device*) ;
 int FUNC_32 (struct drm_device*) ;
 int FUNC_33 (struct drm_device*) ;
 int FUNC_34 (struct drm_device*) ;
 int FUNC_35 (struct drm_device*) ;
 int * FUNC_36 (int ,int ) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_39 (int,int ) ;
 int FUNC_40 (int,int ,int ) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (TYPE_6__*) ;
 int FUNC_44 (TYPE_6__*) ;
 int FUNC_45 (TYPE_6__*,int,int) ;
 int FUNC_46 (TYPE_6__*,int ) ;
 int FUNC_47 (TYPE_6__*) ;
 int FUNC_48 (int *) ;
 int FUNC_49 (struct drm_device*) ;
 int FUNC_50 (TYPE_5__*) ;

int FUNC_51(struct drm_device *VAR_9, unsigned long VAR_10)
{
 struct drm_i915_private *VAR_11;
 struct intel_device_info *VAR_12;
 int VAR_13 = 0, VAR_14, VAR_15;
 uint32_t VAR_16;

 VAR_12 = (struct intel_device_info *) VAR_10;


 if (VAR_12->gen >= 6 && !FUNC_15(VAR_9, VAR_0))
  return -VAR_2;


 VAR_9->counters += 4;
 VAR_9->types[6] = VAR_6;
 VAR_9->types[7] = VAR_7;
 VAR_9->types[8] = VAR_8;
 VAR_9->types[9] = VAR_5;

 VAR_11 = FUNC_39(sizeof(drm_i915_private_t), VAR_4);
 if (VAR_11 == ((void*)0))
  return -VAR_3;

 VAR_9->dev_private = (void *)VAR_11;
 VAR_11->dev = VAR_9;
 VAR_11->info = VAR_12;

 FUNC_17(VAR_11);

 if (FUNC_20(VAR_9)) {
  VAR_13 = -VAR_1;
  goto free_priv;
 }

 VAR_13 = FUNC_18(VAR_9);
 if (VAR_13)
  goto put_bridge;

 if (FUNC_15(VAR_9, VAR_0))
  FUNC_21(VAR_11);

 FUNC_47(VAR_9->pdev);


 if (FUNC_4(VAR_9))
  FUNC_14(&VAR_9->pdev->dev, FUNC_0(30));
 if (FUNC_2(VAR_9) || FUNC_3(VAR_9))
  FUNC_14(&VAR_9->pdev->dev, FUNC_0(32));

 VAR_14 = FUNC_4(VAR_9) ? 1 : 0;







 if (VAR_12->gen < 5)
  VAR_15 = 512*1024;
 else
  VAR_15 = 2*1024*1024;

 VAR_11->regs = FUNC_45(VAR_9->pdev, VAR_14, VAR_15);
 if (!VAR_11->regs) {
  FUNC_1("failed to map registers\n");
  VAR_13 = -VAR_1;
  goto put_gmch;
 }

 VAR_16 = VAR_11->gtt.mappable_end;

 VAR_11->gtt.mappable =
  FUNC_36(VAR_11->gtt.mappable_base,
         VAR_16);
 if (VAR_11->gtt.mappable == ((void*)0)) {
  VAR_13 = -VAR_1;
  goto out_rmmap;
 }

 FUNC_23(VAR_11, VAR_11->gtt.mappable_base,
   VAR_16);
 VAR_11->wq = FUNC_12("i915", 0);
 if (VAR_11->wq == ((void*)0)) {
  FUNC_1("Failed to create our workqueue.\n");
  VAR_13 = -VAR_3;
  goto out_mtrrfree;
 }


 FUNC_25(VAR_9);

 FUNC_28(VAR_9);
 FUNC_27(VAR_9);


 FUNC_33(VAR_9);
 FUNC_32(VAR_9);
 FUNC_30(VAR_9);

 FUNC_31(VAR_9);

 FUNC_19(VAR_9);
 if (!FUNC_7(VAR_9) && !FUNC_8(VAR_9))
  FUNC_44(VAR_9->pdev);

 FUNC_48(&VAR_11->irq_lock);
 FUNC_48(&VAR_11->gpu_error.lock);
 FUNC_48(&VAR_11->rps.lock);
 FUNC_41(&VAR_11->dpio_lock);

 FUNC_41(&VAR_11->rps.hw_lock);
 FUNC_41(&VAR_11->modeset_restore_lock);

 if (FUNC_9(VAR_9) || FUNC_6(VAR_9))
  VAR_11->num_pipe = 3;
 else if (FUNC_10(VAR_9) || !FUNC_4(VAR_9))
  VAR_11->num_pipe = 2;
 else
  VAR_11->num_pipe = 1;

 VAR_13 = FUNC_16(VAR_9, VAR_11->num_pipe);
 if (VAR_13)
  goto out_gem_unload;


 VAR_11->mm.suspended = 1;

 if (FUNC_15(VAR_9, VAR_0)) {
  VAR_13 = FUNC_22(VAR_9);
  if (VAR_13 < 0) {
   FUNC_1("failed to init modeset\n");
   goto out_gem_unload;
  }
 }

 FUNC_24(VAR_9);


 FUNC_29(VAR_9);
 FUNC_11();

 if (FUNC_5(VAR_9))
  FUNC_26(VAR_11);

 return 0;

out_gem_unload:
 if (VAR_11->mm.inactive_shrinker.shrink)
  FUNC_50(&VAR_11->mm.inactive_shrinker);

 if (VAR_9->pdev->msi_enabled)
  FUNC_43(VAR_9->pdev);

 FUNC_34(VAR_9);
 FUNC_35(VAR_9);
 FUNC_13(VAR_11->wq);
out_mtrrfree:
 if (VAR_11->mm.gtt_mtrr >= 0) {
  FUNC_40(VAR_11->mm.gtt_mtrr,
    VAR_11->gtt.mappable_base,
    VAR_16);
  VAR_11->mm.gtt_mtrr = -1;
 }
 FUNC_37(VAR_11->gtt.mappable);
out_rmmap:
 FUNC_46(VAR_9->pdev, VAR_11->regs);
put_gmch:
 VAR_11->gtt.gtt_remove(VAR_9);
put_bridge:
 FUNC_42(VAR_11->bridge_dev);
free_priv:
 FUNC_38(VAR_11);
 return VAR_13;
}
