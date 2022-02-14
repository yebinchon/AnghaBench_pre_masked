
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct radeon_tv_mode_constants {unsigned int hor_total; unsigned int ver_total; int def_restart; int hor_resolution; scalar_t__ pix_to_tv; } ;
struct radeon_pll {int dummy; } ;
struct TYPE_6__ {scalar_t__* h_code_timing; int hrestart; int vrestart; int frestart; int timing_cntl; } ;
struct radeon_encoder_tv_dac {scalar_t__ tv_std; int h_pos; int v_pos; int h_size; TYPE_3__ tv; } ;
struct TYPE_4__ {int crtc; } ;
struct radeon_encoder {TYPE_1__ base; struct radeon_encoder_tv_dac* enc_priv; } ;
struct TYPE_5__ {struct radeon_pll p1pll; struct radeon_pll p2pll; } ;
struct radeon_device {TYPE_2__ clock; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef scalar_t__ PAL_TV_H_SIZE_UNIT ;
typedef scalar_t__ NTSC_TV_H_SIZE_UNIT ;


 int FUNC_0 (char*,int,scalar_t__,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__* VAR_17 ;
 scalar_t__* VAR_18 ;
 struct radeon_tv_mode_constants* FUNC_1 (struct radeon_encoder*,int *) ;
 struct radeon_crtc* FUNC_2 (int ) ;
 struct radeon_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_4(struct drm_encoder *VAR_19)
{
 struct drm_device *VAR_20 = VAR_19->dev;
 struct radeon_device *VAR_21 = VAR_20->dev_private;
 struct radeon_encoder *VAR_22 = FUNC_3(VAR_19);
 struct radeon_encoder_tv_dac *VAR_23 = VAR_22->enc_priv;
 struct radeon_crtc *VAR_24;
 int VAR_25;
 unsigned int VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30;
 u16 VAR_31, VAR_32, VAR_33;
 bool VAR_34;
 const struct radeon_tv_mode_constants *VAR_35;
 struct radeon_pll *VAR_36;

 VAR_24 = FUNC_2(VAR_22->base.crtc);
 if (VAR_24->crtc_id == 1)
  VAR_36 = &VAR_21->clock.p2pll;
 else
  VAR_36 = &VAR_21->clock.p1pll;

 VAR_35 = FUNC_1(VAR_22, ((void*)0));
 if (!VAR_35)
  return 0;

 VAR_26 = VAR_35->hor_total;
 VAR_27 = VAR_35->ver_total;

 if (VAR_23->tv_std == VAR_13 ||
     VAR_23->tv_std == VAR_14 ||
     VAR_23->tv_std == VAR_16 ||
     VAR_23->tv_std == VAR_15)
  VAR_28 = VAR_5 + 1;
 else
  VAR_28 = VAR_9 + 1;


 VAR_30 = VAR_23->h_pos * VAR_0;

 if (VAR_23->tv_std == VAR_13 ||
     VAR_23->tv_std == VAR_14 ||
     VAR_23->tv_std == VAR_16) {
  VAR_30 -= 50;
  VAR_31 = VAR_17[VAR_1];
  VAR_32 = VAR_17[VAR_2];
 } else {
  VAR_31 = VAR_18[VAR_1];
  VAR_32 = VAR_18[VAR_2];
 }

 VAR_31 = (u16)((int)VAR_31 + VAR_30);
 VAR_32 = (u16)((int)VAR_32 - VAR_30);

 VAR_34 = (VAR_31 != VAR_23->tv.h_code_timing[VAR_1] ||
       VAR_32 != VAR_23->tv.h_code_timing[VAR_2]);

 VAR_23->tv.h_code_timing[VAR_1] = VAR_31;
 VAR_23->tv.h_code_timing[VAR_2] = VAR_32;


 VAR_30 = (VAR_30 * (int)(VAR_35->pix_to_tv)) / 1000;


 VAR_25 = VAR_35->def_restart;




 if (VAR_23->tv_std == VAR_13 ||
     VAR_23->tv_std == VAR_14 ||
     VAR_23->tv_std == VAR_16 ||
     VAR_23->tv_std == VAR_15)
  VAR_29 = ((int)(VAR_27 * VAR_26) * 2 * VAR_23->v_pos) / (int)(VAR_4);
 else
  VAR_29 = ((int)(VAR_27 * VAR_26) * 2 * VAR_23->v_pos) / (int)(VAR_8);

 VAR_25 -= VAR_29 + VAR_30;

 FUNC_0("compute_restarts: def = %u h = %d v = %d, p1 = %04x, p2 = %04x, restart = %d\n",
    VAR_35->def_restart, VAR_23->h_pos, VAR_23->v_pos, VAR_31, VAR_32, VAR_25);

 VAR_23->tv.hrestart = VAR_25 % VAR_26;
 VAR_25 /= VAR_26;
 VAR_23->tv.vrestart = VAR_25 % VAR_27;
 VAR_25 /= VAR_27;
 VAR_23->tv.frestart = VAR_25 % VAR_28;

 FUNC_0("compute_restart: F/H/V=%u,%u,%u\n",
    (unsigned)VAR_23->tv.frestart,
    (unsigned)VAR_23->tv.vrestart,
    (unsigned)VAR_23->tv.hrestart);


 if (VAR_23->tv_std == VAR_13 ||
     VAR_23->tv_std == VAR_14 ||
     VAR_23->tv_std == VAR_16)
  VAR_33 = (u16)((int)(VAR_35->hor_resolution * 4096 * VAR_3) /
         (VAR_23->h_size * (int)(NTSC_TV_H_SIZE_UNIT) + (int)(VAR_6)));
 else
  VAR_33 = (u16)((int)(VAR_35->hor_resolution * 4096 * VAR_7) /
         (VAR_23->h_size * (int)(PAL_TV_H_SIZE_UNIT) + (int)(VAR_10)));

 VAR_23->tv.timing_cntl = (VAR_23->tv.timing_cntl & ~VAR_11) |
  ((u32)VAR_33 << VAR_12);

 FUNC_0("compute_restart: h_size = %d h_inc = %d\n", VAR_23->h_size, VAR_33);

 return VAR_34;
}
