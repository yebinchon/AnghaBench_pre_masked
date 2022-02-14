
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int hpd_irq_setup; } ;
struct TYPE_9__ {int hangcheck_timer; int work; } ;
struct TYPE_8__ {int error_work; } ;
struct TYPE_7__ {int work; } ;
struct drm_i915_private {TYPE_4__ display; int pm_qos; TYPE_3__ gpu_error; TYPE_2__ l3_parity; TYPE_1__ rps; int hotplug_work; } ;
struct drm_device {int max_vblank_count; TYPE_5__* driver; struct drm_i915_private* dev_private; } ;
struct TYPE_12__ {int gen; } ;
struct TYPE_11__ {int disable_vblank; int enable_vblank; int irq_handler; void* irq_uninstall; int irq_postinstall; void* irq_preinstall; int get_scanout_position; int * get_vblank_timestamp; int get_vblank_counter; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_6__* FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct drm_device*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,unsigned long) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;

void FUNC_10(struct drm_device *VAR_45)
{
 struct drm_i915_private *VAR_46 = VAR_45->dev_private;

 FUNC_1(&VAR_46->hotplug_work, VAR_16);
 FUNC_1(&VAR_46->gpu_error.work, VAR_11);
 FUNC_1(&VAR_46->rps.work, VAR_3);
 FUNC_1(&VAR_46->l3_parity.error_work, VAR_37);

 FUNC_9(&VAR_46->gpu_error.hangcheck_timer,
      VAR_15,
      (unsigned long) VAR_45);

 FUNC_8(&VAR_46->pm_qos, VAR_1, VAR_2);

 VAR_45->driver->get_vblank_counter = VAR_13;
 VAR_45->max_vblank_count = 0xffffff;
 if (FUNC_3(VAR_45) || FUNC_2(VAR_45)->gen >= 5) {
  VAR_45->max_vblank_count = 0xffffffff;
  VAR_45->driver->get_vblank_counter = VAR_4;
 }

 if (FUNC_7(VAR_45, VAR_0))
  VAR_45->driver->get_vblank_timestamp = VAR_14;
 else
  VAR_45->driver->get_vblank_timestamp = ((void*)0);
 VAR_45->driver->get_scanout_position = VAR_12;

 if (FUNC_6(VAR_45)) {
  VAR_45->driver->irq_handler = VAR_41;
  VAR_45->driver->irq_preinstall = VAR_43;
  VAR_45->driver->irq_postinstall = VAR_42;
  VAR_45->driver->irq_uninstall = VAR_44;
  VAR_45->driver->enable_vblank = VAR_39;
  VAR_45->driver->disable_vblank = VAR_38;
  VAR_46->display.hpd_irq_setup = VAR_40;
 } else if (FUNC_5(VAR_45) || FUNC_4(VAR_45)) {

  VAR_45->driver->irq_handler = VAR_35;
  VAR_45->driver->irq_preinstall = VAR_31;
  VAR_45->driver->irq_postinstall = VAR_36;
  VAR_45->driver->irq_uninstall = VAR_32;
  VAR_45->driver->enable_vblank = VAR_34;
  VAR_45->driver->disable_vblank = VAR_33;
 } else if (FUNC_0(VAR_45)) {
  VAR_45->driver->irq_handler = VAR_29;
  VAR_45->driver->irq_preinstall = VAR_31;
  VAR_45->driver->irq_postinstall = VAR_30;
  VAR_45->driver->irq_uninstall = VAR_32;
  VAR_45->driver->enable_vblank = VAR_28;
  VAR_45->driver->disable_vblank = VAR_27;
 } else {
  if (FUNC_2(VAR_45)->gen == 2) {
   VAR_45->driver->irq_preinstall = VAR_7;
   VAR_45->driver->irq_postinstall = VAR_6;
   VAR_45->driver->irq_handler = VAR_5;
   VAR_45->driver->irq_uninstall = VAR_8;
  } else if (FUNC_2(VAR_45)->gen == 3) {
   VAR_45->driver->irq_preinstall = VAR_20;
   VAR_45->driver->irq_postinstall = VAR_19;
   VAR_45->driver->irq_uninstall = VAR_21;
   VAR_45->driver->irq_handler = VAR_18;
   VAR_46->display.hpd_irq_setup = VAR_17;
  } else {
   VAR_45->driver->irq_preinstall = VAR_25;
   VAR_45->driver->irq_postinstall = VAR_24;
   VAR_45->driver->irq_uninstall = VAR_26;
   VAR_45->driver->irq_handler = VAR_23;
   VAR_46->display.hpd_irq_setup = VAR_22;
  }
  VAR_45->driver->enable_vblank = VAR_10;
  VAR_45->driver->disable_vblank = VAR_9;
 }
}
