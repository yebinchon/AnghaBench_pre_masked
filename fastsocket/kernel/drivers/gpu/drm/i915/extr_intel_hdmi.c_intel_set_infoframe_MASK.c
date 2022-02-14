
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdmi {int (* write_infoframe ) (struct drm_encoder*,struct dip_infoframe*) ;} ;
struct drm_encoder {int dummy; } ;
struct dip_infoframe {int dummy; } ;


 struct intel_hdmi* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct dip_infoframe*) ;
 int FUNC_2 (struct drm_encoder*,struct dip_infoframe*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0,
    struct dip_infoframe *VAR_1)
{
 struct intel_hdmi *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_1);
 VAR_2->write_infoframe(VAR_0, VAR_1);
}
