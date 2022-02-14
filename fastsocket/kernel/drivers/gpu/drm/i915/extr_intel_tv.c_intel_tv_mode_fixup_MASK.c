
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {int clock; } ;
struct intel_tv {int base; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; } ;


 struct intel_tv* FUNC_0 (struct drm_encoder*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct tv_mode* FUNC_2 (struct intel_tv*) ;

__attribute__((used)) static bool
FUNC_3(struct drm_encoder *VAR_0,
      const struct drm_display_mode *VAR_1,
      struct drm_display_mode *VAR_2)
{
 struct intel_tv *VAR_3 = FUNC_0(VAR_0);
 const struct tv_mode *VAR_4 = FUNC_2(VAR_3);

 if (!VAR_4)
  return 0;

 if (FUNC_1(&VAR_3->base))
  return 0;

 VAR_2->clock = VAR_4->clock;
 return 1;
}
