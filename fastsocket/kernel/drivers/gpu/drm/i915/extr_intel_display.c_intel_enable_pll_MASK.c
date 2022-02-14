
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
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_private *VAR_1, enum pipe VAR_2)
{
 int VAR_3;
 u32 VAR_4;


 FUNC_0(!FUNC_6(VAR_1->dev) && VAR_1->info->gen >= 5);


 if (FUNC_5(VAR_1->dev) && !FUNC_4(VAR_1->dev))
  FUNC_8(VAR_1, VAR_2);

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_3);
 VAR_4 |= VAR_0;


 FUNC_3(VAR_3, VAR_4);
 FUNC_7(VAR_3);
 FUNC_9(150);
 FUNC_3(VAR_3, VAR_4);
 FUNC_7(VAR_3);
 FUNC_9(150);
 FUNC_3(VAR_3, VAR_4);
 FUNC_7(VAR_3);
 FUNC_9(150);
}
