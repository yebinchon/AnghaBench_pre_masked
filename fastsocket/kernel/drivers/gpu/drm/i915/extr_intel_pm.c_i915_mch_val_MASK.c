
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct drm_i915_private {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

unsigned long FUNC_2(struct drm_i915_private *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_1);

 VAR_6 = ((VAR_9 & VAR_3) >> VAR_4);
 VAR_7 = FUNC_1(VAR_0);

 VAR_8 = VAR_9 & VAR_2;

 return ((VAR_6 * VAR_7) / 127) - VAR_8;
}
