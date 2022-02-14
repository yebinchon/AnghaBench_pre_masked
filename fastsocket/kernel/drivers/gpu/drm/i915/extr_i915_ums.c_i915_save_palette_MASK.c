
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * save_palette_b; int * save_palette_a; } ;
struct drm_i915_private {TYPE_1__ regfile; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_2 (struct drm_device*,int) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_5, enum pipe VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_5->dev_private;
 unsigned long VAR_8 = (VAR_6 == VAR_0 ? VAR_3 : VAR_4);
 u32 *VAR_9;
 int VAR_10;

 if (!FUNC_2(VAR_5, VAR_6))
  return;

 if (FUNC_0(VAR_5))
  VAR_8 = (VAR_6 == VAR_0) ? VAR_1 : VAR_2;

 if (VAR_6 == VAR_0)
  VAR_9 = VAR_7->regfile.save_palette_a;
 else
  VAR_9 = VAR_7->regfile.save_palette_b;

 for (VAR_10 = 0; VAR_10 < 256; VAR_10++)
  VAR_9[VAR_10] = FUNC_1(VAR_8 + (VAR_10 << 2));
}
