
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_4)
{
 if (FUNC_5((FUNC_1(VAR_1) & 1) == 0,
       VAR_0))
  FUNC_0("Timed out waiting for forcewake old ack to clear.\n");

 FUNC_2(VAR_3, FUNC_3(VAR_2));

 if (FUNC_5((FUNC_1(VAR_1) & 1),
       VAR_0))
  FUNC_0("Timed out waiting for forcewake to ack request.\n");

 FUNC_4(VAR_4);
}
