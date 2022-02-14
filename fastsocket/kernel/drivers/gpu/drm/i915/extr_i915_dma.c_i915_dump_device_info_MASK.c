
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_device_info {int gen; } ;
struct drm_i915_private {TYPE_2__* dev; struct intel_device_info* info; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_1)
{
 const struct intel_device_info *VAR_2 = VAR_1->info;



 FUNC_0("i915 device info: gen=%i, pciid=0x%04x flags="
    "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
    VAR_2->gen,
    VAR_1->dev->pdev->device,
    VAR_0);


}
