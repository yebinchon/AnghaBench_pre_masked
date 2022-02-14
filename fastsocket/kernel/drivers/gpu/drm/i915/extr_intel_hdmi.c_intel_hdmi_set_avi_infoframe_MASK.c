
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_hdmi {scalar_t__ rgb_quant_range_selectable; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int flags; int private_flags; } ;
struct TYPE_4__ {int VIC; int ITC_EC_Q_SC; int YQ_CN_PR; } ;
struct TYPE_3__ {TYPE_2__ avi; } ;
struct dip_infoframe {TYPE_1__ body; int len; int ver; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct drm_display_mode*) ;
 struct intel_hdmi* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*,struct dip_infoframe*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_8,
      struct drm_display_mode *VAR_9)
{
 struct intel_hdmi *VAR_10 = FUNC_1(VAR_8);
 struct dip_infoframe VAR_11 = {
  .type = VAR_4,
  .ver = VAR_5,
  .len = VAR_3,
 };

 if (VAR_9->flags & VAR_6)
  VAR_11.body.avi.YQ_CN_PR |= VAR_0;

 if (VAR_10->rgb_quant_range_selectable) {
  if (VAR_9->private_flags & VAR_7)
   VAR_11.body.avi.ITC_EC_Q_SC |= VAR_2;
  else
   VAR_11.body.avi.ITC_EC_Q_SC |= VAR_1;
 }

 VAR_11.body.avi.VIC = FUNC_0(VAR_9);

 FUNC_2(VAR_8, &VAR_11);
}
