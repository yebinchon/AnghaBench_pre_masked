
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dpio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int) ;

u32 FUNC_6(struct drm_i915_private *VAR_8, int VAR_9)
{
 FUNC_3(!FUNC_4(&VAR_8->dpio_lock));

 if (FUNC_5((FUNC_1(VAR_4) & VAR_0) == 0, 100)) {
  FUNC_0("DPIO idle wait timed out\n");
  return 0;
 }

 FUNC_2(VAR_6, VAR_9);
 FUNC_2(VAR_4, VAR_7 | VAR_3 | VAR_5 |
     VAR_1);
 if (FUNC_5((FUNC_1(VAR_4) & VAR_0) == 0, 100)) {
  FUNC_0("DPIO read wait timed out\n");
  return 0;
 }

 return FUNC_1(VAR_2);
}
