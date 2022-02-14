
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int quirks; scalar_t__ lvds_use_ssc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct drm_i915_private *VAR_2)
{
 if (VAR_1 >= 0)
  return VAR_1 != 0;
 return VAR_2->lvds_use_ssc
  && !(VAR_2->quirks & VAR_0);
}
