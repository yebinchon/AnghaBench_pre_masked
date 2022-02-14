
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* adap; } ;
struct tda18271_priv {int config; int mode; TYPE_2__ i2c_props; } ;
struct dvb_frontend {int (* callback ) (int ,int ,int ,int ) ;struct tda18271_priv* tuner_priv; } ;
struct TYPE_3__ {int algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_5)
{
 struct tda18271_priv *VAR_6 = VAR_5->tuner_priv;
 int VAR_7 = 0;

 switch (VAR_6->config) {
 case 0:

  if (VAR_4 & VAR_0)
   FUNC_1("no agc configuration provided\n");
  break;
 case 3:

  FUNC_1("invoking callback\n");
  if (VAR_5->callback)
   VAR_7 = VAR_5->callback(VAR_6->i2c_props.adap->algo_data,
        VAR_1,
        VAR_3,
        VAR_6->mode);
  break;
 case 1:
 case 2:
 default:

  FUNC_2("unsupported configuration: %d\n", VAR_6->config);
  VAR_7 = -VAR_2;
  break;
 }
 return VAR_7;
}
