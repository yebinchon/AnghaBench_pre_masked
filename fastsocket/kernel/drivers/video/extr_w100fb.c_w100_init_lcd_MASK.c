
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ graphic_v_end; scalar_t__ graphic_v_start; } ;
union graphic_v_disp_u {int val; TYPE_5__ f; } ;
struct TYPE_10__ {scalar_t__ graphic_h_end; scalar_t__ graphic_h_start; } ;
union graphic_h_disp_u {int val; TYPE_4__ f; } ;
struct TYPE_12__ {scalar_t__ crtc_v_total; scalar_t__ crtc_h_total; } ;
union crtc_total_u {int val; TYPE_6__ f; } ;
struct TYPE_9__ {scalar_t__ active_v_end; scalar_t__ active_v_start; } ;
union active_v_disp_u {int val; TYPE_3__ f; } ;
struct TYPE_8__ {scalar_t__ active_h_end; scalar_t__ active_h_start; } ;
union active_h_disp_u {int val; TYPE_2__ f; } ;
typedef int u32 ;
struct w100fb_par {TYPE_1__* mach; struct w100_mode* mode; } ;
struct w100_mode {int crtc_ss; int crtc_ls; int crtc_gs; int crtc_vpos_gs; int crtc_rev; int crtc_dclk; int crtc_gclk; int crtc_goe; int crtc_ps1_active; scalar_t__ lower_margin; scalar_t__ yres; scalar_t__ upper_margin; scalar_t__ right_margin; scalar_t__ xres; scalar_t__ left_margin; } ;
struct w100_gen_regs {int lcd_format; int lcdd_cntl1; int lcdd_cntl2; int genlcd_cntl1; int genlcd_cntl2; int genlcd_cntl3; } ;
struct TYPE_7__ {struct w100_gen_regs* regs; } ;


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
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_25 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct w100fb_par *VAR_26)
{
 u32 VAR_27;
 struct w100_mode *VAR_28 = VAR_26->mode;
 struct w100_gen_regs *VAR_29 = VAR_26->mach->regs;
 union active_h_disp_u VAR_30;
 union active_v_disp_u VAR_31;
 union graphic_h_disp_u VAR_32;
 union graphic_v_disp_u VAR_33;
 union crtc_total_u VAR_34;



 VAR_30.val = 0;
 VAR_30.f.active_h_start=VAR_28->left_margin;
 VAR_30.f.active_h_end=VAR_28->left_margin + VAR_28->xres;
 FUNC_1(VAR_30.val, VAR_25 + VAR_0);

 VAR_31.val = 0;
 VAR_31.f.active_v_start=VAR_28->upper_margin;
 VAR_31.f.active_v_end=VAR_28->upper_margin + VAR_28->yres;
 FUNC_1(VAR_31.val, VAR_25 + VAR_1);

 VAR_32.val = 0;
 VAR_32.f.graphic_h_start=VAR_28->left_margin;
 VAR_32.f.graphic_h_end=VAR_28->left_margin + VAR_28->xres;
 FUNC_1(VAR_32.val, VAR_25 + VAR_19);

 VAR_33.val = 0;
 VAR_33.f.graphic_v_start=VAR_28->upper_margin;
 VAR_33.f.graphic_v_end=VAR_28->upper_margin + VAR_28->yres;
 FUNC_1(VAR_33.val, VAR_25 + VAR_20);

 VAR_34.val = 0;
 VAR_34.f.crtc_h_total=VAR_28->left_margin + VAR_28->xres + VAR_28->right_margin;
 VAR_34.f.crtc_v_total=VAR_28->upper_margin + VAR_28->yres + VAR_28->lower_margin;
 FUNC_1(VAR_34.val, VAR_25 + VAR_13);

 FUNC_1(VAR_28->crtc_ss, VAR_25 + VAR_12);
 FUNC_1(VAR_28->crtc_ls, VAR_25 + VAR_9);
 FUNC_1(VAR_28->crtc_gs, VAR_25 + VAR_8);
 FUNC_1(VAR_28->crtc_vpos_gs, VAR_25 + VAR_14);
 FUNC_1(VAR_28->crtc_rev, VAR_25 + VAR_11);
 FUNC_1(VAR_28->crtc_dclk, VAR_25 + VAR_2);
 FUNC_1(VAR_28->crtc_gclk, VAR_25 + VAR_6);
 FUNC_1(VAR_28->crtc_goe, VAR_25 + VAR_7);
 FUNC_1(VAR_28->crtc_ps1_active, VAR_25 + VAR_10);

 FUNC_1(VAR_29->lcd_format, VAR_25 + VAR_24);
 FUNC_1(VAR_29->lcdd_cntl1, VAR_25 + VAR_21);
 FUNC_1(VAR_29->lcdd_cntl2, VAR_25 + VAR_22);
 FUNC_1(VAR_29->genlcd_cntl1, VAR_25 + VAR_16);
 FUNC_1(VAR_29->genlcd_cntl2, VAR_25 + VAR_17);
 FUNC_1(VAR_29->genlcd_cntl3, VAR_25 + VAR_18);

 FUNC_1(0x00000000, VAR_25 + VAR_4);
 FUNC_1(0x00000000, VAR_25 + VAR_5);
 FUNC_1(0x00000000, VAR_25 + VAR_3);
 FUNC_1(0x0000FF00, VAR_25 + VAR_23);


 VAR_27 = FUNC_0(VAR_25 + VAR_15);
 VAR_27 |= 0xc0000000;
 FUNC_1(VAR_27, VAR_25 + VAR_15);
}
