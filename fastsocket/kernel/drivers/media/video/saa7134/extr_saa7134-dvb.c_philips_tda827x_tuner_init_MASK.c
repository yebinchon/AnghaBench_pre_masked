
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tda1004x_state {TYPE_2__* config; } ;
struct saa7134_dev {int dummy; } ;
struct dvb_frontend {struct tda1004x_state* demodulator_priv; TYPE_1__* dvb; } ;
struct TYPE_4__ {int antenna_switch; } ;
struct TYPE_3__ {struct saa7134_dev* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct saa7134_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct saa7134_dev *VAR_1 = VAR_0->dvb->priv;
 struct tda1004x_state *VAR_2 = VAR_0->demodulator_priv;

 switch (VAR_2->config->antenna_switch) {
 case 0: break;
 case 1: FUNC_0("setting GPIO21 to 0 (TV antenna?)\n");
  FUNC_1(VAR_1, 21, 0);
  break;
 case 2: FUNC_0("setting GPIO21 to 1 (Radio antenna?)\n");
  FUNC_1(VAR_1, 21, 1);
  break;
 }
 return 0;
}
