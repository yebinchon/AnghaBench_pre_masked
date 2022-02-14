
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dibx000_bandwidth_config {int pll_ratio; int modulo; int ADClkSrc; int IO_CLK_en_core; int bypclk_div; int enable_refdiv; int pll_prediv; int pll_range; int pll_reset; int pll_bypass; int internal; int ifreq; int sad_cfg; } ;
struct TYPE_2__ {struct dibx000_bandwidth_config* bw; } ;
struct dib7000p_state {TYPE_1__ cfg; } ;


 int FUNC_0 (struct dib7000p_state*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dib7000p_state *VAR_0)
{
 struct dibx000_bandwidth_config *VAR_1 = &VAR_0->cfg.bw[0];
 u16 VAR_2;


 VAR_2 = (1 << 15) | ((VAR_1->pll_ratio & 0x3f) << 9) |
  (VAR_1->modulo << 7) | (VAR_1->ADClkSrc << 6) | (VAR_1->IO_CLK_en_core << 5) |
  (VAR_1->bypclk_div << 2) | (VAR_1->enable_refdiv << 1) | (0 << 0);

 FUNC_0(VAR_0, 900, VAR_2);


 FUNC_0(VAR_0, 903, (VAR_1->pll_prediv << 5) | (((VAR_1->pll_ratio >> 6) & 0x3) << 3) | (VAR_1->pll_range << 1) | VAR_1->pll_reset);
 VAR_2 = (VAR_1->pll_bypass << 15) | (VAR_2 & 0x7fff);
 FUNC_0(VAR_0, 900, VAR_2);

 FUNC_0(VAR_0, 18, (u16) (((VAR_1->internal*1000) >> 16) & 0xffff));
 FUNC_0(VAR_0, 19, (u16) ( (VAR_1->internal*1000 ) & 0xffff));
 FUNC_0(VAR_0, 21, (u16) ( (VAR_1->ifreq >> 16) & 0xffff));
 FUNC_0(VAR_0, 22, (u16) ( (VAR_1->ifreq ) & 0xffff));

 FUNC_0(VAR_0, 72, VAR_1->sad_cfg);
}
