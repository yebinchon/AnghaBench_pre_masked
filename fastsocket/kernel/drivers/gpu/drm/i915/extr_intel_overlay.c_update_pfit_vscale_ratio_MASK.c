
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_overlay {int pfit_vscale_ratio; struct drm_device* dev; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct intel_overlay *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 drm_i915_private_t *VAR_8 = VAR_7->dev_private;
 u32 VAR_9 = FUNC_0(VAR_1);
 u32 VAR_10;




 if (FUNC_1(VAR_7)->gen >= 4) {

  VAR_10 = FUNC_0(VAR_2) >> VAR_4;
 } else {
  if (VAR_9 & VAR_5)
   VAR_10 = FUNC_0(VAR_0);
  else
   VAR_10 = FUNC_0(VAR_2);
  VAR_10 >>= VAR_3;
 }

 VAR_6->pfit_vscale_ratio = VAR_10;
}
