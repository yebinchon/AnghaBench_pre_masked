
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; int dpcd; int dp_lane_count; int dp_clock; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_connector*,int ,int ) ;
 int FUNC_1 (struct drm_connector*,int ,int ) ;
 struct radeon_connector* FUNC_2 (struct drm_connector*) ;

void FUNC_3(struct drm_connector *VAR_2,
          const struct drm_display_mode *VAR_3)
{
 struct radeon_connector *VAR_4 = FUNC_2(VAR_2);
 struct radeon_connector_atom_dig *VAR_5;

 if (!VAR_4->con_priv)
  return;
 VAR_5 = VAR_4->con_priv;

 if ((VAR_5->dp_sink_type == VAR_0) ||
     (VAR_5->dp_sink_type == VAR_1)) {
  VAR_5->dp_clock =
   FUNC_1(VAR_2, VAR_5->dpcd, VAR_3->clock);
  VAR_5->dp_lane_count =
   FUNC_0(VAR_2, VAR_5->dpcd, VAR_3->clock);
 }
}
