
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adap; } ;
struct tuner_simple_priv {int frequency; scalar_t__ bandwidth; TYPE_1__ i2c_props; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;
struct analog_parameters {int mode; int frequency; } ;


 int VAR_0 ;



 int FUNC_0 (struct dvb_frontend*,struct analog_parameters*) ;
 int FUNC_1 (struct dvb_frontend*,struct analog_parameters*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
        struct analog_parameters *VAR_2)
{
 struct tuner_simple_priv *VAR_3 = VAR_1->tuner_priv;
 int VAR_4 = -VAR_0;

 if (VAR_3->i2c_props.adap == ((void*)0))
  return -VAR_0;

 switch (VAR_2->mode) {
 case 128:
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  VAR_3->frequency = VAR_2->frequency * 125 / 2;
  break;
 case 130:
 case 129:
  VAR_4 = FUNC_1(VAR_1, VAR_2);
  VAR_3->frequency = VAR_2->frequency * 62500;
  break;
 }
 VAR_3->bandwidth = 0;

 return VAR_4;
}
