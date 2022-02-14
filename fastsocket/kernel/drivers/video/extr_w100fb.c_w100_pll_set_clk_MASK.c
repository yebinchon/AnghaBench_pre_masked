
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct w100_pll_info {int lock_time; int N_fac; int N_int; int M; } ;
struct TYPE_12__ {int pwm_fast_noml_hw_en; int pwm_noml_fast_hw_en; scalar_t__ pwm_mode_req; } ;
struct TYPE_13__ {scalar_t__ val; TYPE_5__ f; } ;
struct TYPE_10__ {int pll_lock_time; int pll_fb_div_frac; int pll_fb_div_int; int pll_ref_div; } ;
struct TYPE_11__ {scalar_t__ val; TYPE_3__ f; } ;
struct TYPE_8__ {int sclk_src_sel; } ;
struct TYPE_9__ {scalar_t__ val; TYPE_1__ f; } ;
struct TYPE_14__ {int auto_mode; TYPE_6__ pwrmgt_cntl; TYPE_4__ pll_ref_fb_div; TYPE_2__ sclk_cntl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct w100_pll_info*) ;
 TYPE_7__ VAR_5 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct w100_pll_info *VAR_6)
{
 int VAR_7;

 if (VAR_5.auto_mode == 1)
 {
  VAR_5.pwrmgt_cntl.f.pwm_fast_noml_hw_en = 0x0;
  VAR_5.pwrmgt_cntl.f.pwm_noml_fast_hw_en = 0x0;
  FUNC_1((u32) (VAR_5.pwrmgt_cntl.val), VAR_4 + VAR_2);
 }


 VAR_5.sclk_cntl.f.sclk_src_sel = VAR_0;
 FUNC_1((u32) (VAR_5.sclk_cntl.val), VAR_4 + VAR_3);

 VAR_5.pll_ref_fb_div.f.pll_ref_div = VAR_6->M;
 VAR_5.pll_ref_fb_div.f.pll_fb_div_int = VAR_6->N_int;
 VAR_5.pll_ref_fb_div.f.pll_fb_div_frac = VAR_6->N_fac;
 VAR_5.pll_ref_fb_div.f.pll_lock_time = VAR_6->lock_time;
 FUNC_1((u32) (VAR_5.pll_ref_fb_div.val), VAR_4 + VAR_1);

 VAR_5.pwrmgt_cntl.f.pwm_mode_req = 0;
 FUNC_1((u32) (VAR_5.pwrmgt_cntl.val), VAR_4 + VAR_2);

 VAR_7 = FUNC_0(VAR_6);

 if (VAR_5.auto_mode == 1)
 {
  VAR_5.pwrmgt_cntl.f.pwm_fast_noml_hw_en = 0x1;
  VAR_5.pwrmgt_cntl.f.pwm_noml_fast_hw_en = 0x1;
  FUNC_1((u32) (VAR_5.pwrmgt_cntl.val), VAR_4 + VAR_2);
 }
 return VAR_7;
}
