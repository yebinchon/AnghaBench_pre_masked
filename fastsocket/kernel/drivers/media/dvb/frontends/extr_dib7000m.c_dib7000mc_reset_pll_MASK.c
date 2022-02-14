
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dibx000_bandwidth_config {int pll_prediv; int pll_ratio; int IO_CLK_en_core; int bypclk_div; int enable_refdiv; int pll_range; int pll_reset; int pll_bypass; int modulo; int ADClkSrc; } ;
struct TYPE_2__ {struct dibx000_bandwidth_config* bw; } ;
struct dib7000m_state {TYPE_1__ cfg; } ;


 int FUNC_0 (struct dib7000m_state*,struct dibx000_bandwidth_config const*) ;
 int FUNC_1 (struct dib7000m_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib7000m_state *VAR_0)
{
 const struct dibx000_bandwidth_config *VAR_1 = VAR_0->cfg.bw;
 u16 VAR_2;


 FUNC_1(VAR_0, 907, (VAR_1->pll_prediv << 8) | (VAR_1->pll_ratio << 0));



 VAR_2 = (0 << 14) | (3 << 12) |(0 << 11) |
   (VAR_1->IO_CLK_en_core << 10) | (VAR_1->bypclk_div << 5) | (VAR_1->enable_refdiv << 4) |
   (1 << 3) | (VAR_1->pll_range << 1) | (VAR_1->pll_reset << 0);
 FUNC_1(VAR_0, 908, VAR_2);
 VAR_2 = (VAR_2 & 0xfff7) | (VAR_1->pll_bypass << 3);
 FUNC_1(VAR_0, 908, VAR_2);


 FUNC_1(VAR_0, 910, (1 << 12) | (2 << 10) | (VAR_1->modulo << 8) | (VAR_1->ADClkSrc << 7));

 FUNC_0(VAR_0, VAR_1);
}
