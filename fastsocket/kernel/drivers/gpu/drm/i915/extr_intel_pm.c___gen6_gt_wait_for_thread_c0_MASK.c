
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_3)
{
 u32 VAR_4;

 if (FUNC_2(VAR_3->dev))
  VAR_4 = VAR_1;
 else
  VAR_4 = VAR_0;




 if (FUNC_3((FUNC_1(VAR_2) & VAR_4) == 0, 500))
  FUNC_0("GT thread status wait timed out\n");
}
