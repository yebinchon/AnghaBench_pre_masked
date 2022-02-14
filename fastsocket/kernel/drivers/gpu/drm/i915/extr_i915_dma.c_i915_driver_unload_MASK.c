
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int work; int hangcheck_timer; } ;
struct TYPE_13__ {scalar_t__ shrink; } ;
struct TYPE_10__ {int gtt_mtrr; int retire_work; TYPE_6__ inactive_shrinker; } ;
struct TYPE_9__ {int mappable_end; int mappable_base; int mappable; } ;
struct drm_i915_private {int bridge_dev; scalar_t__ slab; int pm_qos; int wq; int * regs; TYPE_3__ gpu_error; scalar_t__ child_dev_num; struct drm_i915_private* child_dev; int console_resume_work; TYPE_2__ mm; TYPE_1__ gtt; } ;
struct drm_device {struct drm_i915_private* dev_private; TYPE_4__* pdev; int struct_mutex; } ;
struct TYPE_12__ {scalar_t__ msi_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (struct drm_device*) ;
 int FUNC_17 (struct drm_device*) ;
 int FUNC_18 (struct drm_device*) ;
 int FUNC_19 (struct drm_device*) ;
 int FUNC_20 () ;
 int FUNC_21 (struct drm_device*) ;
 int FUNC_22 (struct drm_device*) ;
 int FUNC_23 (struct drm_device*) ;
 int FUNC_24 (struct drm_device*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct drm_i915_private*) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (int,int ,int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (TYPE_4__*) ;
 int FUNC_33 (TYPE_4__*,int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (TYPE_6__*) ;
 int FUNC_36 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_37 (TYPE_4__*) ;

int FUNC_38(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;
 int VAR_3;

 FUNC_20();

 FUNC_18(VAR_1);

 if (VAR_2->mm.inactive_shrinker.shrink)
  FUNC_35(&VAR_2->mm.inactive_shrinker);

 FUNC_29(&VAR_1->struct_mutex);
 VAR_3 = FUNC_17(VAR_1);
 if (VAR_3)
  FUNC_0("failed to idle hardware: %d\n", VAR_3);
 FUNC_16(VAR_1);
 FUNC_30(&VAR_1->struct_mutex);


 FUNC_3(&VAR_2->mm.retire_work);

 FUNC_25(VAR_2->gtt.mappable);
 if (VAR_2->mm.gtt_mtrr >= 0) {
  FUNC_28(VAR_2->mm.gtt_mtrr,
    VAR_2->gtt.mappable_base,
    VAR_2->gtt.mappable_end);
  VAR_2->mm.gtt_mtrr = -1;
 }

 FUNC_2();

 if (FUNC_7(VAR_1, VAR_0)) {
  FUNC_19(VAR_1);
  FUNC_21(VAR_1);
  FUNC_4(&VAR_2->console_resume_work);





  if (VAR_2->child_dev && VAR_2->child_dev_num) {
   FUNC_26(VAR_2->child_dev);
   VAR_2->child_dev = ((void*)0);
   VAR_2->child_dev_num = 0;
  }

  FUNC_37(VAR_1->pdev);
  FUNC_36(VAR_1->pdev, ((void*)0), ((void*)0), ((void*)0));
 }


 FUNC_5(&VAR_2->gpu_error.hangcheck_timer);
 FUNC_4(&VAR_2->gpu_error.work);
 FUNC_9(VAR_1);

 if (VAR_1->pdev->msi_enabled)
  FUNC_32(VAR_1->pdev);

 FUNC_22(VAR_1);

 if (FUNC_7(VAR_1, VAR_0)) {

  FUNC_8(VAR_2->wq);

  FUNC_29(&VAR_1->struct_mutex);
  FUNC_15(VAR_1);
  FUNC_12(VAR_1);
  FUNC_14(VAR_1);
  FUNC_30(&VAR_1->struct_mutex);
  FUNC_11(VAR_1);
  FUNC_13(VAR_1);

  if (!FUNC_1(VAR_1))
   FUNC_10(VAR_1);
 }

 if (VAR_2->regs != ((void*)0))
  FUNC_33(VAR_1->pdev, VAR_2->regs);

 FUNC_23(VAR_1);
 FUNC_24(VAR_1);

 FUNC_6(VAR_2->wq);
 FUNC_34(&VAR_2->pm_qos);

 if (VAR_2->slab)
  FUNC_27(VAR_2->slab);

 FUNC_31(VAR_2->bridge_dev);
 FUNC_26(VAR_1->dev_private);

 return 0;
}
