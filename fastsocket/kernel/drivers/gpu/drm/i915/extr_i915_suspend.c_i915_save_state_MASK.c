
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** saveSWF2; void** saveSWF1; void** saveSWF0; void* saveMI_ARB_STATE; void* saveCACHE_MODE_0; void* saveIMR; void* saveIER; void* savePCH_PORT_HOTPLUG; void* saveMCHBAR_RENDER_STANDBY; void* saveFDI_RXB_IMR; void* saveFDI_RXA_IMR; void* saveGTIMR; void* saveGTIER; void* saveDEIMR; void* saveDEIER; int saveLBB; } ;
struct drm_i915_private {TYPE_1__ regfile; } ;
struct drm_device {int struct_mutex; int pdev; struct drm_i915_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int *) ;

int FUNC_8(struct drm_device *VAR_17)
{
 struct drm_i915_private *VAR_18 = VAR_17->dev_private;
 int VAR_19;

 FUNC_7(VAR_17->pdev, VAR_8, &VAR_18->regfile.saveLBB);

 FUNC_5(&VAR_17->struct_mutex);

 FUNC_3(VAR_17);

 if (!FUNC_2(VAR_17, VAR_3)) {

  if (FUNC_0(VAR_17)) {
   VAR_18->regfile.saveDEIER = FUNC_1(VAR_1);
   VAR_18->regfile.saveDEIMR = FUNC_1(VAR_2);
   VAR_18->regfile.saveGTIER = FUNC_1(VAR_4);
   VAR_18->regfile.saveGTIMR = FUNC_1(VAR_5);
   VAR_18->regfile.saveFDI_RXA_IMR = FUNC_1(VAR_15);
   VAR_18->regfile.saveFDI_RXB_IMR = FUNC_1(VAR_16);
   VAR_18->regfile.saveMCHBAR_RENDER_STANDBY =
    FUNC_1(VAR_11);
   VAR_18->regfile.savePCH_PORT_HOTPLUG = FUNC_1(VAR_10);
  } else {
   VAR_18->regfile.saveIER = FUNC_1(VAR_6);
   VAR_18->regfile.saveIMR = FUNC_1(VAR_7);
  }
 }

 FUNC_4(VAR_17);


 VAR_18->regfile.saveCACHE_MODE_0 = FUNC_1(VAR_0);


 VAR_18->regfile.saveMI_ARB_STATE = FUNC_1(VAR_9);


 for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
  VAR_18->regfile.saveSWF0[VAR_19] = FUNC_1(VAR_12 + (VAR_19 << 2));
  VAR_18->regfile.saveSWF1[VAR_19] = FUNC_1(VAR_13 + (VAR_19 << 2));
 }
 for (VAR_19 = 0; VAR_19 < 3; VAR_19++)
  VAR_18->regfile.saveSWF2[VAR_19] = FUNC_1(VAR_14 + (VAR_19 << 2));

 FUNC_6(&VAR_17->struct_mutex);

 return 0;
}
