
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct w100fb_par {scalar_t__ fastpll_mode; struct w100_mode* mode; } ;
struct w100_mode {scalar_t__ pixclk_src; scalar_t__ sysclk_src; int sysclk_divider; scalar_t__ pll_freq; scalar_t__ fast_pll_freq; } ;
struct TYPE_4__ {scalar_t__ sclk_src_sel; int sclk_post_div_slow; int sclk_post_div_fast; } ;
struct TYPE_5__ {scalar_t__ val; TYPE_1__ f; } ;
struct TYPE_6__ {TYPE_2__ sclk_cntl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (struct w100fb_par*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct w100fb_par *VAR_4)
{
 struct w100_mode *VAR_5 = VAR_4->mode;

 if (VAR_5->pixclk_src == VAR_0 || VAR_5->sysclk_src == VAR_0)
  FUNC_0(VAR_4, (VAR_4->fastpll_mode && VAR_5->fast_pll_freq) ? VAR_5->fast_pll_freq : VAR_5->pll_freq);

 VAR_3.sclk_cntl.f.sclk_src_sel = VAR_5->sysclk_src;
 VAR_3.sclk_cntl.f.sclk_post_div_fast = VAR_5->sysclk_divider;
 VAR_3.sclk_cntl.f.sclk_post_div_slow = VAR_5->sysclk_divider;
 FUNC_1((u32) (VAR_3.sclk_cntl.val), VAR_2 + VAR_1);
}
