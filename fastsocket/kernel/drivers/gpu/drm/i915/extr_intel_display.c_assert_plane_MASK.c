
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum plane { ____Placeholder_plane } plane ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_1,
    enum plane VAR_2, bool VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 bool VAR_6;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_4);
 VAR_6 = !!(VAR_5 & VAR_0);
 FUNC_2(VAR_6 != VAR_3,
      "plane %c assertion failure (expected %s, current %s)\n",
      FUNC_3(VAR_2), FUNC_4(VAR_3), FUNC_4(VAR_6));
}
