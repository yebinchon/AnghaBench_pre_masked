
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u32 ;
struct w100fb_par {TYPE_3__* mach; } ;
struct TYPE_27__ {int pclk_post_div; int pclk_force_disp; void* pclk_src_sel; } ;
struct TYPE_28__ {scalar_t__ val; TYPE_8__ f; } ;
struct TYPE_25__ {int sclk_post_div_fast; int sclk_clkon_hys; int sclk_post_div_slow; int disp_cg_ok2switch_en; int sclk_force_reg; int sclk_force_disp; int sclk_force_mc; int sclk_force_extmc; int sclk_force_cp; int sclk_force_e2; int sclk_force_e3; int sclk_force_idct; int sclk_force_bist; int busy_extend_cp; int busy_extend_e2; int busy_extend_e3; int busy_extend_idct; void* sclk_src_sel; } ;
struct TYPE_26__ {scalar_t__ val; TYPE_6__ f; } ;
struct TYPE_23__ {int osc_en; int osc_gain; int dont_use_xtalin; int xtalin_pm_en; int xtalin_dbl_en; int cg_debug; } ;
struct TYPE_24__ {scalar_t__ val; TYPE_4__ f; } ;
struct TYPE_22__ {scalar_t__ xtal_dbl; } ;
struct TYPE_20__ {int pwm_enable; int pwm_mode_req; int pwm_wakeup_cond; int pwm_fast_noml_hw_en; int pwm_noml_fast_hw_en; int pwm_fast_noml_cond; int pwm_noml_fast_cond; int pwm_idle_timer; int pwm_busy_timer; } ;
struct TYPE_21__ {scalar_t__ val; TYPE_1__ f; } ;
struct TYPE_18__ {int pll_pwdn; int pll_reset; int pll_pm_en; int pll_mode; int pll_refclk_sel; int pll_fbclk_sel; int pll_tcpoff; int pll_pcp; int pll_pvg; int pll_vcofr; int pll_ioffset; int pll_pecc_mode; int pll_pecc_scon; int pll_dactal; int pll_cp_clip; int pll_conf; int pll_mbctrl; int pll_ring_off; } ;
struct TYPE_17__ {scalar_t__ val; TYPE_13__ f; } ;
struct TYPE_15__ {int pll_ref_div; int pll_fb_div_int; int pll_fb_div_frac; int pll_reset_time; int pll_lock_time; } ;
struct TYPE_16__ {scalar_t__ val; TYPE_10__ f; } ;
struct TYPE_19__ {scalar_t__ auto_mode; TYPE_2__ pwrmgt_cntl; TYPE_12__ pll_cntl; TYPE_11__ pll_ref_fb_div; TYPE_9__ pclk_cntl; TYPE_7__ sclk_cntl; TYPE_5__ clk_pin_cntl; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_14__ VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct w100fb_par *VAR_9)
{
 VAR_8.clk_pin_cntl.f.osc_en = 0x1;
 VAR_8.clk_pin_cntl.f.osc_gain = 0x1f;
 VAR_8.clk_pin_cntl.f.dont_use_xtalin = 0x0;
 VAR_8.clk_pin_cntl.f.xtalin_pm_en = 0x0;
 VAR_8.clk_pin_cntl.f.xtalin_dbl_en = VAR_9->mach->xtal_dbl ? 1 : 0;
 VAR_8.clk_pin_cntl.f.cg_debug = 0x0;
 FUNC_0((u32) (VAR_8.clk_pin_cntl.val), VAR_7 + VAR_1);

 VAR_8.sclk_cntl.f.sclk_src_sel = VAR_0;
 VAR_8.sclk_cntl.f.sclk_post_div_fast = 0x0;
 VAR_8.sclk_cntl.f.sclk_clkon_hys = 0x3;
 VAR_8.sclk_cntl.f.sclk_post_div_slow = 0x0;
 VAR_8.sclk_cntl.f.disp_cg_ok2switch_en = 0x0;
 VAR_8.sclk_cntl.f.sclk_force_reg = 0x0;
 VAR_8.sclk_cntl.f.sclk_force_disp = 0x0;
 VAR_8.sclk_cntl.f.sclk_force_mc = 0x0;
 VAR_8.sclk_cntl.f.sclk_force_extmc = 0x0;
 VAR_8.sclk_cntl.f.sclk_force_cp = 0x0;
 VAR_8.sclk_cntl.f.sclk_force_e2 = 0x0;
 VAR_8.sclk_cntl.f.sclk_force_e3 = 0x0;
 VAR_8.sclk_cntl.f.sclk_force_idct = 0x0;
 VAR_8.sclk_cntl.f.sclk_force_bist = 0x0;
 VAR_8.sclk_cntl.f.busy_extend_cp = 0x0;
 VAR_8.sclk_cntl.f.busy_extend_e2 = 0x0;
 VAR_8.sclk_cntl.f.busy_extend_e3 = 0x0;
 VAR_8.sclk_cntl.f.busy_extend_idct = 0x0;
 FUNC_0((u32) (VAR_8.sclk_cntl.val), VAR_7 + VAR_6);

 VAR_8.pclk_cntl.f.pclk_src_sel = VAR_0;
 VAR_8.pclk_cntl.f.pclk_post_div = 0x1;
 VAR_8.pclk_cntl.f.pclk_force_disp = 0x0;
 FUNC_0((u32) (VAR_8.pclk_cntl.val), VAR_7 + VAR_2);

 VAR_8.pll_ref_fb_div.f.pll_ref_div = 0x0;
 VAR_8.pll_ref_fb_div.f.pll_fb_div_int = 0x0;
 VAR_8.pll_ref_fb_div.f.pll_fb_div_frac = 0x0;
 VAR_8.pll_ref_fb_div.f.pll_reset_time = 0x5;
 VAR_8.pll_ref_fb_div.f.pll_lock_time = 0xff;
 FUNC_0((u32) (VAR_8.pll_ref_fb_div.val), VAR_7 + VAR_4);

 VAR_8.pll_cntl.f.pll_pwdn = 0x1;
 VAR_8.pll_cntl.f.pll_reset = 0x1;
 VAR_8.pll_cntl.f.pll_pm_en = 0x0;
 VAR_8.pll_cntl.f.pll_mode = 0x0;
 VAR_8.pll_cntl.f.pll_refclk_sel = 0x0;
 VAR_8.pll_cntl.f.pll_fbclk_sel = 0x0;
 VAR_8.pll_cntl.f.pll_tcpoff = 0x0;
 VAR_8.pll_cntl.f.pll_pcp = 0x4;
 VAR_8.pll_cntl.f.pll_pvg = 0x0;
 VAR_8.pll_cntl.f.pll_vcofr = 0x0;
 VAR_8.pll_cntl.f.pll_ioffset = 0x0;
 VAR_8.pll_cntl.f.pll_pecc_mode = 0x0;
 VAR_8.pll_cntl.f.pll_pecc_scon = 0x0;
 VAR_8.pll_cntl.f.pll_dactal = 0x0;
 VAR_8.pll_cntl.f.pll_cp_clip = 0x3;
 VAR_8.pll_cntl.f.pll_conf = 0x2;
 VAR_8.pll_cntl.f.pll_mbctrl = 0x2;
 VAR_8.pll_cntl.f.pll_ring_off = 0x0;
 FUNC_0((u32) (VAR_8.pll_cntl.val), VAR_7 + VAR_3);

 VAR_8.pwrmgt_cntl.f.pwm_enable = 0x0;
 VAR_8.pwrmgt_cntl.f.pwm_mode_req = 0x1;
 VAR_8.pwrmgt_cntl.f.pwm_wakeup_cond = 0x0;
 VAR_8.pwrmgt_cntl.f.pwm_fast_noml_hw_en = 0x0;
 VAR_8.pwrmgt_cntl.f.pwm_noml_fast_hw_en = 0x0;
 VAR_8.pwrmgt_cntl.f.pwm_fast_noml_cond = 0x1;
 VAR_8.pwrmgt_cntl.f.pwm_noml_fast_cond = 0x1;
 VAR_8.pwrmgt_cntl.f.pwm_idle_timer = 0xFF;
 VAR_8.pwrmgt_cntl.f.pwm_busy_timer = 0xFF;
 FUNC_0((u32) (VAR_8.pwrmgt_cntl.val), VAR_7 + VAR_5);

 VAR_8.auto_mode = 0;
}
