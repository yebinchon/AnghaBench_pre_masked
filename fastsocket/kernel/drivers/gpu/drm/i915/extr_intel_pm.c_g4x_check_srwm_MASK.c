
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_watermark_params {int max_wm; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static bool FUNC_1(struct drm_device *VAR_0,
      int VAR_1, int VAR_2,
      const struct intel_watermark_params *VAR_3,
      const struct intel_watermark_params *VAR_4)
{
 FUNC_0("SR watermark: display plane %d, cursor %d\n",
        VAR_1, VAR_2);

 if (VAR_1 > VAR_3->max_wm) {
  FUNC_0("display watermark is too large(%d/%ld), disabling\n",
         VAR_1, VAR_3->max_wm);
  return 0;
 }

 if (VAR_2 > VAR_4->max_wm) {
  FUNC_0("cursor watermark is too large(%d/%ld), disabling\n",
         VAR_2, VAR_4->max_wm);
  return 0;
 }

 if (!(VAR_1 || VAR_2)) {
  FUNC_0("SR latency is 0, disabling\n");
  return 0;
 }

 return 1;
}
