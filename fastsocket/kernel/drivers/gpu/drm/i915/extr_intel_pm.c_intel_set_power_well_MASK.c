
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int,int) ;

void FUNC_6(struct drm_device *VAR_4, bool VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_4->dev_private;
 bool VAR_7, VAR_8;
 uint32_t VAR_9;

 if (!FUNC_4(VAR_4))
  return;

 if (!VAR_3 && !VAR_5)
  return;

 VAR_9 = FUNC_2(VAR_0);
 VAR_7 = VAR_9 & VAR_2;
 VAR_8 = VAR_9 & VAR_1;

 if (VAR_5) {
  if (!VAR_8)
   FUNC_3(VAR_0, VAR_1);

  if (!VAR_7) {
   FUNC_0("Enabling power well\n");
   if (FUNC_5((FUNC_2(VAR_0) &
          VAR_2), 20))
    FUNC_1("Timeout enabling power well\n");
  }
 } else {
  if (VAR_8) {
   FUNC_3(VAR_0, 0);
   FUNC_0("Requesting to disable the power well\n");
  }
 }
}
