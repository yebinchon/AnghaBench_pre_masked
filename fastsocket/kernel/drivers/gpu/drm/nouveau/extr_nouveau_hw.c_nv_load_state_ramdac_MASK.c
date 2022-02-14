
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct nv04_mode_state {int sel_clk; int pllsel; struct nv04_crtc_reg* crtc_reg; } ;
struct nv04_crtc_reg {int * ctv_regs; int ramdac_a34; int ramdac_a24; int ramdac_a20; int ramdac_8c0; int fp_margin_color; int fp_debug_2; int fp_debug_1; int fp_debug_0; int fp_control; int * dither_regs; int dither; int * fp_horiz_regs; int * fp_vert_regs; int tv_hsync_delay2; int tv_hsync_delay; int tv_hskew; int tv_htotal; int tv_vsync_delay; int tv_vskew; int tv_vtotal; int tv_setup; int ramdac_634; int ramdac_630; int ramdac_gen_ctrl; int pllvals; int nv10_cursync; } ;
struct nouveau_drm {int device; } ;
struct nouveau_clock {int (* pll_prog ) (struct nouveau_clock*,scalar_t__,int *) ;} ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ card_type; int chipset; } ;


 int FUNC_0 (struct drm_device*,int,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 struct nouveau_clock* FUNC_1 (int ) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct nouveau_clock*,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_7(struct drm_device *VAR_33, int VAR_34,
       struct nv04_mode_state *VAR_35)
{
 struct nouveau_drm *VAR_36 = FUNC_2(VAR_33);
 struct nouveau_clock *VAR_37 = FUNC_1(VAR_36->device);
 struct nv04_crtc_reg *VAR_38 = &VAR_35->crtc_reg[VAR_34];
 uint32_t VAR_39 = VAR_34 ? VAR_32 : VAR_28;
 int VAR_40;

 if (FUNC_3(VAR_36->device)->card_type >= VAR_0)
  FUNC_0(VAR_33, VAR_34, VAR_31, VAR_38->nv10_cursync);

 VAR_37->pll_prog(VAR_37, VAR_39, &VAR_38->pllvals);
 FUNC_0(VAR_33, 0, VAR_18, VAR_35->pllsel);
 if (FUNC_5(VAR_33))
  FUNC_0(VAR_33, 0, VAR_19, VAR_35->sel_clk);
 if (FUNC_3(VAR_36->device)->chipset == 0x11)
  FUNC_0(VAR_33, VAR_34, VAR_29, VAR_38->dither);

 FUNC_0(VAR_33, VAR_34, VAR_17, VAR_38->ramdac_gen_ctrl);

 if (FUNC_4(VAR_33))
  FUNC_0(VAR_33, VAR_34, VAR_2, VAR_38->ramdac_630);
 if (FUNC_3(VAR_36->device)->chipset >= 0x30)
  FUNC_0(VAR_33, VAR_34, VAR_3, VAR_38->ramdac_634);

 FUNC_0(VAR_33, VAR_34, VAR_24, VAR_38->tv_setup);
 FUNC_0(VAR_33, VAR_34, VAR_27, VAR_38->tv_vtotal);
 FUNC_0(VAR_33, VAR_34, VAR_25, VAR_38->tv_vskew);
 FUNC_0(VAR_33, VAR_34, VAR_26, VAR_38->tv_vsync_delay);
 FUNC_0(VAR_33, VAR_34, VAR_23, VAR_38->tv_htotal);
 FUNC_0(VAR_33, VAR_34, VAR_20, VAR_38->tv_hskew);
 FUNC_0(VAR_33, VAR_34, VAR_21, VAR_38->tv_hsync_delay);
 FUNC_0(VAR_33, VAR_34, VAR_22, VAR_38->tv_hsync_delay2);

 for (VAR_40 = 0; VAR_40 < 7; VAR_40++) {
  uint32_t VAR_41 = VAR_16 + (VAR_40 * 4);

  FUNC_0(VAR_33, VAR_34, VAR_41, VAR_38->fp_vert_regs[VAR_40]);
  FUNC_0(VAR_33, VAR_34, VAR_41 + 0x20, VAR_38->fp_horiz_regs[VAR_40]);
 }

 if (FUNC_4(VAR_33)) {
  FUNC_0(VAR_33, VAR_34, VAR_30, VAR_38->dither);
  for (VAR_40 = 0; VAR_40 < 3; VAR_40++) {
   FUNC_0(VAR_33, VAR_34, VAR_4 + VAR_40 * 4, VAR_38->dither_regs[VAR_40]);
   FUNC_0(VAR_33, VAR_34, VAR_5 + VAR_40 * 4, VAR_38->dither_regs[VAR_40 + 3]);
  }
 }

 FUNC_0(VAR_33, VAR_34, VAR_15, VAR_38->fp_control);
 FUNC_0(VAR_33, VAR_34, VAR_11, VAR_38->fp_debug_0);
 FUNC_0(VAR_33, VAR_34, VAR_12, VAR_38->fp_debug_1);
 FUNC_0(VAR_33, VAR_34, VAR_13, VAR_38->fp_debug_2);

 FUNC_0(VAR_33, VAR_34, VAR_14, VAR_38->fp_margin_color);

 if (FUNC_4(VAR_33))
  FUNC_0(VAR_33, VAR_34, VAR_6, VAR_38->ramdac_8c0);

 if (FUNC_3(VAR_36->device)->card_type == VAR_1) {
  FUNC_0(VAR_33, VAR_34, VAR_7, VAR_38->ramdac_a20);
  FUNC_0(VAR_33, VAR_34, VAR_8, VAR_38->ramdac_a24);
  FUNC_0(VAR_33, VAR_34, VAR_9, VAR_38->ramdac_a34);

  for (VAR_40 = 0; VAR_40 < 38; VAR_40++)
   FUNC_0(VAR_33, VAR_34,
          VAR_10 + 4*VAR_40, VAR_38->ctv_regs[VAR_40]);
 }
}
