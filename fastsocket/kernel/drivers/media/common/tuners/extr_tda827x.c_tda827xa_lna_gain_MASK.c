
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tda827x_priv {TYPE_2__* i2c_adap; TYPE_1__* cfg; } ;
struct i2c_msg {unsigned char* buf; int len; int addr; int flags; } ;
struct dvb_frontend {int (* callback ) (int ,int ,int,int) ;struct tda827x_priv* tuner_priv; } ;
struct analog_parameters {int std; } ;
typedef int buf ;
struct TYPE_4__ {int algo_data; } ;
struct TYPE_3__ {int config; int switch_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct dvb_frontend*,struct i2c_msg*,int) ;

__attribute__((used)) static void FUNC_4(struct dvb_frontend *VAR_2, int VAR_3,
         struct analog_parameters *VAR_4)
{
 struct tda827x_priv *VAR_5 = VAR_2->tuner_priv;
 unsigned char VAR_6[] = {0x22, 0x01};
 int VAR_7;
 int VAR_8;
 struct i2c_msg VAR_9 = { .flags = 0, .buf = VAR_6, .len = sizeof(VAR_6) };

 if (((void*)0) == VAR_5->cfg) {
  FUNC_0("tda827x_config not defined, cannot set LNA gain!\n");
  return;
 }
 VAR_9.addr = VAR_5->cfg->switch_addr;
 if (VAR_5->cfg->config) {
  if (VAR_3)
   FUNC_0("setting LNA to high gain\n");
  else
   FUNC_0("setting LNA to low gain\n");
 }
 switch (VAR_5->cfg->config) {
 case 0:
  break;
 case 1:
 case 2:
  if (VAR_4 == ((void*)0)) {
   VAR_8 = 0;
   VAR_7 = 0;
  } else {

   VAR_8 = 1;
   if (VAR_4->std & VAR_1)
    VAR_7 = 1;
   else
    VAR_7 = 0;
  }
  if (VAR_2->callback)
   VAR_2->callback(VAR_5->i2c_adap->algo_data,
         VAR_0,
         VAR_8, VAR_7);
  VAR_6[1] = VAR_3 ? 0 : 1;
  if (VAR_5->cfg->config == 2)
   VAR_6[1] = VAR_3 ? 1 : 0;
  FUNC_3(VAR_2, &VAR_9, 1);
  break;
 case 3:
  if (VAR_2->callback)
   VAR_2->callback(VAR_5->i2c_adap->algo_data,
         VAR_0, 0, VAR_3);
  break;
 }
}
