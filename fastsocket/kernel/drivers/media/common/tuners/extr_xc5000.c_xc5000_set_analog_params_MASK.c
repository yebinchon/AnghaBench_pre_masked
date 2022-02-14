
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adap; } ;
struct xc5000_priv {TYPE_1__ i2c_props; } ;
struct dvb_frontend {struct xc5000_priv* tuner_priv; } ;
struct analog_parameters {int mode; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,struct analog_parameters*) ;
 int FUNC_3 (struct dvb_frontend*,struct analog_parameters*) ;
 scalar_t__ FUNC_4 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_2,
        struct analog_parameters *VAR_3)
{
 struct xc5000_priv *VAR_4 = VAR_2->tuner_priv;
 int VAR_5 = -VAR_0;

 if (VAR_4->i2c_props.adap == ((void*)0))
  return -VAR_0;

 if (FUNC_1(VAR_2) != VAR_1) {
  if (FUNC_4(VAR_2) != VAR_1) {
   FUNC_0(1, "Unable to load firmware and init tuner\n");
   return -VAR_0;
  }
 }

 switch (VAR_3->mode) {
 case 128:
  VAR_5 = FUNC_2(VAR_2, VAR_3);
  break;
 case 130:
 case 129:
  VAR_5 = FUNC_3(VAR_2, VAR_3);
  break;
 }

 return VAR_5;
}
