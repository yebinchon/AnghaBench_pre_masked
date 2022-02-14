
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lvds_dvo_timing {int dummy; } ;
struct drm_i915_private {struct drm_display_mode* sdvo_lvds_vbt_mode; } ;
struct drm_display_mode {int dummy; } ;
struct bdb_sdvo_lvds_options {int panel_type; } ;
struct bdb_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*,struct lvds_dvo_timing*) ;
 void* FUNC_3 (struct bdb_header*,int ) ;
 int VAR_3 ;
 struct drm_display_mode* FUNC_4 (int,int ) ;

__attribute__((used)) static void
FUNC_5(struct drm_i915_private *VAR_4,
        struct bdb_header *VAR_5)
{
 struct lvds_dvo_timing *VAR_6;
 struct drm_display_mode *VAR_7;
 int VAR_8;

 VAR_8 = VAR_3;
 if (VAR_8 == -2) {
  FUNC_0("Ignore SDVO panel mode from BIOS VBT tables.\n");
  return;
 }

 if (VAR_8 == -1) {
  struct bdb_sdvo_lvds_options *VAR_9;

  VAR_9 = FUNC_3(VAR_5, VAR_0);
  if (!VAR_9)
   return;

  VAR_8 = VAR_9->panel_type;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_1);
 if (!VAR_6)
  return;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return;

 FUNC_2(VAR_7, VAR_6 + VAR_8);

 VAR_4->sdvo_lvds_vbt_mode = VAR_7;

 FUNC_0("Found SDVO panel mode in BIOS VBT tables:\n");
 FUNC_1(VAR_7);
}
