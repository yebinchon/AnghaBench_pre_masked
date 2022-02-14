
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_6)
{
 u32 VAR_7;

 if (FUNC_3(VAR_6->dev))
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_5;

 if (FUNC_7((FUNC_1(VAR_7) & 1) == 0,
       VAR_2))
  FUNC_0("Timed out waiting for forcewake old ack to clear.\n");

 FUNC_2(VAR_4, FUNC_5(VAR_3));

 FUNC_4(VAR_0);

 if (FUNC_7((FUNC_1(VAR_7) & 1),
       VAR_2))
  FUNC_0("Timed out waiting for forcewake to ack request.\n");

 FUNC_6(VAR_6);
}
