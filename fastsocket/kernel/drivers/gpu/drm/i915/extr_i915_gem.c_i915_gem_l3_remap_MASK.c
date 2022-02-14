
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_3__ {scalar_t__* remap_info; } ;
struct TYPE_4__ {TYPE_1__ l3_parity; } ;
typedef TYPE_2__ drm_i915_private_t ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct drm_device *VAR_4)
{
 drm_i915_private_t *VAR_5 = VAR_4->dev_private;
 u32 VAR_6;
 int VAR_7;

 if (!FUNC_2(VAR_4))
  return;

 if (!VAR_5->l3_parity.remap_info)
  return;

 VAR_6 = FUNC_3(VAR_3);
 FUNC_4(VAR_3, VAR_6 & ~VAR_0);
 FUNC_5(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 += 4) {
  u32 VAR_8 = FUNC_3(VAR_1 + VAR_7);
  if (VAR_8 && VAR_8 != VAR_5->l3_parity.remap_info[VAR_7/4])
   FUNC_0("0x%x was already programmed to %x\n",
      VAR_1 + VAR_7, VAR_8);
  if (VAR_8 && !VAR_5->l3_parity.remap_info[VAR_7/4])
   FUNC_1("Clearing remapped register\n");
  FUNC_4(VAR_1 + VAR_7, VAR_5->l3_parity.remap_info[VAR_7/4]);
 }


 FUNC_5(VAR_1);

 FUNC_4(VAR_3, VAR_6);
}
