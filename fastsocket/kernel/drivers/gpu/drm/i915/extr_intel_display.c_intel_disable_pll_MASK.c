
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int quirks; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct drm_i915_private*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_3, enum pipe VAR_4)
{
 int VAR_5;
 u32 VAR_6;


 if (VAR_4 == VAR_1 && (VAR_3->quirks & VAR_2))
  return;


 FUNC_4(VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_5);
 VAR_6 &= ~VAR_0;
 FUNC_2(VAR_5, VAR_6);
 FUNC_3(VAR_5);
}
