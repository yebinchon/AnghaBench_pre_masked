
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct drm_device*,int,int ,int,int *,int,int*) ;
 int FUNC_9 (struct drm_device*,int,int ,int,int *,int,int*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_10(struct drm_device *VAR_10, int VAR_11,
      uint32_t VAR_12, int VAR_13)
{
 struct drm_i915_private *VAR_14 = VAR_10->dev_private;
 int VAR_15 = FUNC_4() * 100;
 u32 VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 switch (VAR_11) {
 case 0:
  VAR_18 = VAR_0;
  break;
 case 1:
  VAR_18 = VAR_1;
  break;
 case 2:
  VAR_18 = VAR_2;
  break;
 default:
  return;
 }

 VAR_19 = FUNC_9(VAR_10, VAR_11, VAR_12, VAR_13,
         &VAR_9,
         VAR_15, &VAR_17);
 if (!VAR_19) {
  FUNC_0("failed to compute sprite wm for pipe %d\n",
         VAR_11);
  return;
 }

 VAR_16 = FUNC_1(VAR_18);
 VAR_16 &= ~VAR_3;
 FUNC_2(VAR_18, VAR_16 | (VAR_17 << VAR_4));
 FUNC_0("sprite watermarks For pipe %d - %d\n", VAR_11, VAR_17);


 VAR_19 = FUNC_8(VAR_10, VAR_11, VAR_12,
           VAR_13,
           &VAR_8,
           FUNC_5() * 500,
           &VAR_17);
 if (!VAR_19) {
  FUNC_0("failed to compute sprite lp1 wm on pipe %d\n",
         VAR_11);
  return;
 }
 FUNC_2(VAR_5, VAR_17);


 if (!FUNC_3(VAR_10))
  return;

 VAR_19 = FUNC_8(VAR_10, VAR_11, VAR_12,
           VAR_13,
           &VAR_8,
           FUNC_6() * 500,
           &VAR_17);
 if (!VAR_19) {
  FUNC_0("failed to compute sprite lp2 wm on pipe %d\n",
         VAR_11);
  return;
 }
 FUNC_2(VAR_6, VAR_17);

 VAR_19 = FUNC_8(VAR_10, VAR_11, VAR_12,
           VAR_13,
           &VAR_8,
           FUNC_7() * 500,
           &VAR_17);
 if (!VAR_19) {
  FUNC_0("failed to compute sprite lp3 wm on pipe %d\n",
         VAR_11);
  return;
 }
 FUNC_2(VAR_7, VAR_17);
}
