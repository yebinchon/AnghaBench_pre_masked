
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ gfx_hws_cpu_addr; } ;
struct drm_i915_private {TYPE_1__ dri1; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline u32
FUNC_4(struct drm_i915_private *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0->dev))
  return FUNC_3(VAR_0->dri1.gfx_hws_cpu_addr + VAR_1);
 else
  return FUNC_2(FUNC_1(VAR_0), VAR_1);
}
