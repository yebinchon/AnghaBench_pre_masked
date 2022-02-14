
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int ,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_3,
       enum pipe VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;
 int VAR_8;


 if (FUNC_1(VAR_3->dev)) {
  VAR_5 = FUNC_0(VAR_4);
  VAR_7 = FUNC_2(VAR_5);
  FUNC_3((VAR_7 & VAR_0),
       "plane %c assertion failure, should be disabled but not\n",
       FUNC_5(VAR_4));
  return;
 }


 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_5 = FUNC_0(VAR_6);
  VAR_7 = FUNC_2(VAR_5);
  VAR_8 = (VAR_7 & VAR_1) >>
   VAR_2;
  FUNC_3((VAR_7 & VAR_0) && VAR_4 == VAR_8,
       "plane %c assertion failure, should be off on pipe %c but is still active\n",
       FUNC_5(VAR_6), FUNC_4(VAR_4));
 }
}
