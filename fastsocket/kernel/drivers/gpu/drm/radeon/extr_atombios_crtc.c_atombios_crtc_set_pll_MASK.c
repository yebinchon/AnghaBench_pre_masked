
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct radeon_pll {int reference_freq; int post_div; int reference_div; int flags; } ;
struct radeon_encoder {int active_device; int encoder_id; } ;
struct TYPE_4__ {struct radeon_pll dcpll; struct radeon_pll p2pll; struct radeon_pll p1pll; } ;
struct radeon_device {TYPE_1__ clock; } ;
struct TYPE_5__ {int percentage; int amount; int type; int rate; int step; } ;
struct radeon_crtc {int pll_id; TYPE_2__ ss; int crtc_id; scalar_t__ ss_enabled; int bpc; int adjusted_clock; int pll_post_div; int pll_reference_div; int pll_flags; int encoder; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct drm_crtc*,int ,int,int,int ,int,int,int,int,int,int ,scalar_t__,TYPE_2__*) ;
 int FUNC_3 (struct radeon_device*,int ,int,int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct radeon_pll*,int ,int*,int*,int*,int*,int*) ;
 int FUNC_6 (struct radeon_pll*,int ,int*,int*,int*,int*,int*) ;
 struct radeon_crtc* FUNC_7 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_7, struct drm_display_mode *VAR_8)
{
 struct radeon_crtc *VAR_9 = FUNC_7(VAR_7);
 struct drm_device *VAR_10 = VAR_7->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 struct radeon_encoder *VAR_12 =
  FUNC_8(VAR_9->encoder);
 u32 VAR_13 = VAR_8->clock;
 u32 VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 struct radeon_pll *VAR_18;
 int VAR_19 = FUNC_4(VAR_9->encoder);

 switch (VAR_9->pll_id) {
 case 130:
  VAR_18 = &VAR_11->clock.p1pll;
  break;
 case 129:
  VAR_18 = &VAR_11->clock.p2pll;
  break;
 case 131:
 case 128:
 default:
  VAR_18 = &VAR_11->clock.dcpll;
  break;
 }


 VAR_18->flags = VAR_9->pll_flags;
 VAR_18->reference_div = VAR_9->pll_reference_div;
 VAR_18->post_div = VAR_9->pll_post_div;

 if (VAR_12->active_device & (VAR_0))

  FUNC_6(VAR_18, VAR_9->adjusted_clock, &VAR_13,
       &VAR_15, &VAR_16, &VAR_14, &VAR_17);
 else if (FUNC_0(VAR_11))
  FUNC_5(VAR_18, VAR_9->adjusted_clock, &VAR_13,
      &VAR_15, &VAR_16, &VAR_14, &VAR_17);
 else
  FUNC_6(VAR_18, VAR_9->adjusted_clock, &VAR_13,
       &VAR_15, &VAR_16, &VAR_14, &VAR_17);

 FUNC_3(VAR_11, VAR_1, VAR_9->pll_id,
     VAR_9->crtc_id, &VAR_9->ss);

 FUNC_2(VAR_7, VAR_9->crtc_id, VAR_9->pll_id,
      VAR_19, VAR_12->encoder_id, VAR_8->clock,
      VAR_14, VAR_15, VAR_16, VAR_17,
      VAR_9->bpc, VAR_9->ss_enabled, &VAR_9->ss);

 if (VAR_9->ss_enabled) {

  if (FUNC_1(VAR_11)) {
   u32 VAR_20;
   u32 VAR_21 = (((VAR_15 * 10) + VAR_16) * VAR_9->ss.percentage) / 10000;
   VAR_9->ss.amount = (VAR_21 / 10) & VAR_3;
   VAR_9->ss.amount |= ((VAR_21 - (VAR_21 / 10)) << VAR_5) &
    VAR_4;
   if (VAR_9->ss.type & VAR_6)
    VAR_20 = (4 * VAR_21 * VAR_14 * (VAR_9->ss.rate * 2048)) /
     (125 * 25 * VAR_18->reference_freq / 100);
   else
    VAR_20 = (2 * VAR_21 * VAR_14 * (VAR_9->ss.rate * 2048)) /
     (125 * 25 * VAR_18->reference_freq / 100);
   VAR_9->ss.step = VAR_20;
  }

  FUNC_3(VAR_11, VAR_2, VAR_9->pll_id,
      VAR_9->crtc_id, &VAR_9->ss);
 }
}
