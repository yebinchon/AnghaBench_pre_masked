
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct atbm_state* demodulator_priv; } ;
struct atbm_state {struct atbm8830_config* config; } ;
struct atbm8830_config {int agc_hold_loop; int agc_max; int agc_min; int if_freq; int osc_clk_freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct atbm_state*,int,int) ;
 int FUNC_1 (struct atbm_state*,int ,int ,int ) ;
 int FUNC_2 (struct atbm_state*,int ) ;
 int FUNC_3 (struct atbm_state*,int ) ;
 int FUNC_4 (struct atbm_state*) ;
 int FUNC_5 (struct atbm_state*) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_1)
{
 struct atbm_state *VAR_2 = VAR_1->demodulator_priv;
 const struct atbm8830_config *VAR_3 = VAR_2->config;


 FUNC_3(VAR_2, VAR_3->osc_clk_freq);


 FUNC_2(VAR_2, VAR_3->if_freq);


 FUNC_1(VAR_2, VAR_3->agc_min, VAR_3->agc_max,
  VAR_3->agc_hold_loop);


 FUNC_4(VAR_2);

 FUNC_5(VAR_2);

 FUNC_0(VAR_2, 0x000A, 0);


 FUNC_0(VAR_2, 0x020C, 11);


 FUNC_0(VAR_2, VAR_0, 1);

 return 0;
}
