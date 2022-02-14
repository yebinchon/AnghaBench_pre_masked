
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int type; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_display_mode const*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_encoder*,struct drm_display_mode const*,struct drm_display_mode*) ;
 struct intel_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_4(struct drm_encoder *VAR_2,
     const struct drm_display_mode *VAR_3,
     struct drm_display_mode *VAR_4)
{
 struct intel_encoder *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = VAR_5->type;

 FUNC_0(VAR_6 == VAR_1, "mode_fixup() on unknown output!\n");

 if (VAR_6 == VAR_0)
  return FUNC_2(VAR_2, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_2, VAR_3, VAR_4);
}
