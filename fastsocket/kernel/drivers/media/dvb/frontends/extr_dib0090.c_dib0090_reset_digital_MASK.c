
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {int dummy; } ;
struct TYPE_2__ {int adc_clock_ratio; int pll_bypass; int pll_range; int pll_loopdiv; int pll_prediv; } ;
struct dib0090_config {int clkoutdrive; int clkouttobamse; TYPE_1__ io; int analog_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dib0090_state*) ;
 int FUNC_1 (struct dib0090_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_3, const struct dib0090_config *VAR_4)
{
 struct dib0090_state *VAR_5 = VAR_3->tuner_priv;

 FUNC_0(VAR_5);

 FUNC_1(VAR_5, 0x24, VAR_2);
 FUNC_1(VAR_5, 0x1b, VAR_1 | VAR_2 | VAR_0);


 FUNC_1(VAR_5, 0x20, ((VAR_4->io.adc_clock_ratio - 1) << 11) | (0 << 10) | (1 << 9) | (1 << 8) | (0 << 4) | 0);
 if (VAR_4->clkoutdrive != 0)
  FUNC_1(VAR_5, 0x23,
      (0 << 15) | ((!VAR_4->analog_output) << 14) | (1 << 10) | (1 << 9) | (0 << 8) | (VAR_4->clkoutdrive << 5) | (VAR_4->
                    clkouttobamse
                    << 4) | (0
                      <<
                      2)
      | (0));
 else
  FUNC_1(VAR_5, 0x23,
      (0 << 15) | ((!VAR_4->analog_output) << 14) | (1 << 10) | (1 << 9) | (0 << 8) | (7 << 5) | (VAR_4->
                   clkouttobamse << 4) | (0
                     <<
                     2)
      | (0));


 FUNC_1(VAR_5, 0x21,
     (VAR_4->io.pll_bypass << 15) | (1 << 13) | (VAR_4->io.pll_range << 12) | (VAR_4->io.pll_loopdiv << 6) | (VAR_4->io.pll_prediv));

}
