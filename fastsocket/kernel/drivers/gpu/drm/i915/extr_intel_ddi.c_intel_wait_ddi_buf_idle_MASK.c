
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_1,
        enum port VAR_2)
{
 uint32_t VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_4(1);
  if (FUNC_2(VAR_3) & VAR_0)
   return;
 }
 FUNC_1("Timeout waiting for DDI BUF %c idle bit\n", FUNC_3(VAR_2));
}
