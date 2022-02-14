
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dev; TYPE_1__* info; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_1,
          enum pipe VAR_2)
{
 int VAR_3;
 u32 VAR_4;


 if (VAR_1->info->gen == 5)
  return;


 if (FUNC_1(VAR_1->dev))
  return;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_3);
 FUNC_3(!(VAR_4 & VAR_0), "FDI TX PLL assertion failure, should be active but is disabled\n");
}
