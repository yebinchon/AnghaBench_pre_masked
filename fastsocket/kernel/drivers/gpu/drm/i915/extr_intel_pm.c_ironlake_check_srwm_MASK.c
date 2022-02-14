
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_watermark_params {int max_wm; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_3(struct drm_device *VAR_5, int VAR_6,
    int VAR_7, int VAR_8, int VAR_9,
    const struct intel_watermark_params *VAR_10,
    const struct intel_watermark_params *VAR_11)
{
 struct drm_i915_private *VAR_12 = VAR_5->dev_private;

 FUNC_0("watermark %d: display plane %d, fbc lines %d,"
        " cursor %d\n", VAR_6, VAR_8, VAR_7, VAR_9);

 if (VAR_7 > VAR_4) {
  FUNC_0("fbc watermark(%d) is too large(%d), disabling wm%d+\n",
         VAR_7, VAR_4, VAR_6);


  FUNC_2(VAR_0,
      FUNC_1(VAR_0) | VAR_1);
  return 0;
 }

 if (VAR_8 > VAR_10->max_wm) {
  FUNC_0("display watermark(%d) is too large(%d), disabling wm%d+\n",
         VAR_8, VAR_3, VAR_6);
  return 0;
 }

 if (VAR_9 > VAR_11->max_wm) {
  FUNC_0("cursor watermark(%d) is too large(%d), disabling wm%d+\n",
         VAR_9, VAR_2, VAR_6);
  return 0;
 }

 if (!(VAR_7 || VAR_8 || VAR_9)) {
  FUNC_0("latency %d is 0, disabling wm%d+\n", VAR_6, VAR_6);
  return 0;
 }

 return 1;
}
