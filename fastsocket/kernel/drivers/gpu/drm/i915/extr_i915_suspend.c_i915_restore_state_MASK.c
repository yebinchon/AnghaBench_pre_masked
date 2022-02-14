
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int saveDEIER; int saveDEIMR; int saveGTIER; int saveGTIMR; int saveFDI_RXA_IMR; int saveFDI_RXB_IMR; int savePCH_PORT_HOTPLUG; int saveIER; int saveIMR; int saveCACHE_MODE_0; int saveMI_ARB_STATE; int* saveSWF0; int* saveSWF1; int* saveSWF2; int saveLBB; } ;
struct drm_i915_private {TYPE_1__ regfile; } ;
struct drm_device {int struct_mutex; int pdev; struct drm_i915_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (scalar_t__,int) ;
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
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;

int FUNC_8(struct drm_device *VAR_16)
{
 struct drm_i915_private *VAR_17 = VAR_16->dev_private;
 int VAR_18;

 FUNC_7(VAR_16->pdev, VAR_8, VAR_17->regfile.saveLBB);

 FUNC_5(&VAR_16->struct_mutex);

 FUNC_3(VAR_16);

 if (!FUNC_2(VAR_16, VAR_3)) {

  if (FUNC_0(VAR_16)) {
   FUNC_1(VAR_1, VAR_17->regfile.saveDEIER);
   FUNC_1(VAR_2, VAR_17->regfile.saveDEIMR);
   FUNC_1(VAR_4, VAR_17->regfile.saveGTIER);
   FUNC_1(VAR_5, VAR_17->regfile.saveGTIMR);
   FUNC_1(VAR_14, VAR_17->regfile.saveFDI_RXA_IMR);
   FUNC_1(VAR_15, VAR_17->regfile.saveFDI_RXB_IMR);
   FUNC_1(VAR_10, VAR_17->regfile.savePCH_PORT_HOTPLUG);
  } else {
   FUNC_1(VAR_6, VAR_17->regfile.saveIER);
   FUNC_1(VAR_7, VAR_17->regfile.saveIMR);
  }
 }


 FUNC_1(VAR_0, VAR_17->regfile.saveCACHE_MODE_0 | 0xffff0000);


 FUNC_1(VAR_9, VAR_17->regfile.saveMI_ARB_STATE | 0xffff0000);

 for (VAR_18 = 0; VAR_18 < 16; VAR_18++) {
  FUNC_1(VAR_11 + (VAR_18 << 2), VAR_17->regfile.saveSWF0[VAR_18]);
  FUNC_1(VAR_12 + (VAR_18 << 2), VAR_17->regfile.saveSWF1[VAR_18]);
 }
 for (VAR_18 = 0; VAR_18 < 3; VAR_18++)
  FUNC_1(VAR_13 + (VAR_18 << 2), VAR_17->regfile.saveSWF2[VAR_18]);

 FUNC_6(&VAR_16->struct_mutex);

 FUNC_4(VAR_16);

 return 0;
}
