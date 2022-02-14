
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* agcf ) (struct dvb_frontend*) ;scalar_t__ config; } ;
struct tda8290_priv {int tda8290_easy_mode; int i2c_props; TYPE_3__ cfg; } ;
struct TYPE_6__ {int (* set_analog_params ) (struct dvb_frontend*,struct analog_parameters*) ;} ;
struct TYPE_7__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct tda8290_priv* analog_demod_priv; } ;
struct analog_parameters {scalar_t__ mode; } ;
struct TYPE_9__ {unsigned char* seq; } ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,struct analog_parameters*) ;
 int FUNC_3 (struct dvb_frontend*,struct analog_parameters*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 int FUNC_8 (int *,unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static void FUNC_9(struct dvb_frontend *VAR_3,
          struct analog_parameters *VAR_4)
{
 struct tda8290_priv *VAR_5 = VAR_3->analog_demod_priv;

 unsigned char VAR_6[] = { 0x00, 0x00 };
 unsigned char VAR_7[] = { 0x01, VAR_5->tda8290_easy_mode };
 unsigned char VAR_8[] = { 0x01, 0x80 };
 unsigned char VAR_9[] = { 0x02, 0x00 };
 unsigned char VAR_10[] = { 0x28, 0x14 };
 unsigned char VAR_11[] = { 0x0f, 0x88 };
 unsigned char VAR_12[] = { 0x05, 0x04 };
 unsigned char VAR_13[] = { 0x05, 0x02 };
 unsigned char VAR_14[] = { 0x05, 0x01 };
 unsigned char VAR_15[] = { 0x0d, 0x47 };
 unsigned char VAR_16[] = { 0x0d, 0x27 };
 unsigned char VAR_17[] = { 0x28, 0x64 };
 unsigned char VAR_18[] = { 0x0e, 0x0b };
 unsigned char VAR_19[] = { 0x0e, 0x09 };
 unsigned char VAR_20[] = { 0x0f, 0x81 };
 unsigned char VAR_21 = 0x1a;
 unsigned char VAR_22 = 0x1d;
 unsigned char VAR_23 = 0x1b;
 unsigned char VAR_24, VAR_25,
        VAR_26;
 int VAR_27;

 FUNC_2(VAR_3, VAR_4);

 if (VAR_5->cfg.config)
  FUNC_6("tda827xa config is 0x%02x\n", VAR_5->cfg.config);
 FUNC_7(&VAR_5->i2c_props, VAR_7, 2);
 FUNC_7(&VAR_5->i2c_props, VAR_9, 2);
 FUNC_7(&VAR_5->i2c_props, VAR_6, 2);
 FUNC_1(1);

 if (VAR_4->mode == VAR_0) {
  unsigned char VAR_28[] = { 0x13, 1 };



  if (VAR_1)
   VAR_28[1] = 2;

  for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_2); VAR_27++)
   FUNC_7(&VAR_5->i2c_props, VAR_2[VAR_27].seq, 2);

  FUNC_7(&VAR_5->i2c_props, VAR_28, 2);
 } else {
  VAR_8[1] = VAR_5->tda8290_easy_mode + 0x80;
  FUNC_7(&VAR_5->i2c_props, VAR_8, 2);
  FUNC_7(&VAR_5->i2c_props, VAR_10, 2);
  FUNC_7(&VAR_5->i2c_props, VAR_11, 2);
  if (VAR_5->tda8290_easy_mode & 0x60)
   FUNC_7(&VAR_5->i2c_props, VAR_13, 2);
  else
   FUNC_7(&VAR_5->i2c_props, VAR_12, 2);
  FUNC_7(&VAR_5->i2c_props, VAR_15, 2);
 }


 FUNC_5(VAR_3, 1);

 if (VAR_3->ops.tuner_ops.set_analog_params)
  VAR_3->ops.tuner_ops.set_analog_params(VAR_3, VAR_4);

 for (VAR_27 = 0; VAR_27 < 3; VAR_27++) {
  FUNC_8(&VAR_5->i2c_props,
      &VAR_23, 1, &VAR_26, 1);
  if (VAR_26 & 0x80) {
   FUNC_8(&VAR_5->i2c_props,
       &VAR_21, 1,
       &VAR_24, 1);
   FUNC_8(&VAR_5->i2c_props,
       &VAR_22, 1,
       &VAR_25, 1);
   FUNC_6("tda8290 is locked, AGC: %d\n", VAR_25);
   break;
  } else {
   FUNC_6("tda8290 not locked, no signal?\n");
   FUNC_1(100);
  }
 }

 if ((VAR_25 > 115) || (!(VAR_26 & 0x80) && (VAR_24 < 20))) {
  FUNC_6("adjust gain, step 1. Agc: %d, ADC stat: %d, lock: %d\n",
      VAR_25, VAR_24, VAR_26 & 0x80);
  FUNC_7(&VAR_5->i2c_props, VAR_17, 2);
  FUNC_1(100);
  FUNC_8(&VAR_5->i2c_props,
      &VAR_22, 1, &VAR_25, 1);
  FUNC_8(&VAR_5->i2c_props,
      &VAR_23, 1, &VAR_26, 1);
  if ((VAR_25 > 115) || !(VAR_26 & 0x80)) {
   FUNC_6("adjust gain, step 2. Agc: %d, lock: %d\n",
       VAR_25, VAR_26 & 0x80);
   if (VAR_5->cfg.agcf)
    VAR_5->cfg.agcf(VAR_3);
   FUNC_1(100);
   FUNC_8(&VAR_5->i2c_props,
       &VAR_22, 1,
       &VAR_25, 1);
   FUNC_8(&VAR_5->i2c_props,
       &VAR_23, 1,
       &VAR_26, 1);
   if((VAR_25 > 115) || !(VAR_26 & 0x80)) {
    FUNC_6("adjust gain, step 3. Agc: %d\n", VAR_25);
    FUNC_7(&VAR_5->i2c_props, VAR_14, 2);
    FUNC_7(&VAR_5->i2c_props, VAR_16, 2);
    FUNC_1(100);
   }
  }
 }


 if(VAR_5->tda8290_easy_mode & 0x60) {
  FUNC_8(&VAR_5->i2c_props,
      &VAR_21, 1,
      &VAR_24, 1);
  FUNC_8(&VAR_5->i2c_props,
      &VAR_23, 1,
      &VAR_26, 1);
  if ((VAR_24 > 20) || !(VAR_26 & 0x80)) {
   FUNC_6("trying to resolve SECAM L deadlock\n");
   FUNC_7(&VAR_5->i2c_props, VAR_18, 2);
   FUNC_1(40);
   FUNC_7(&VAR_5->i2c_props, VAR_19, 2);
  }
 }

 FUNC_5(VAR_3, 0);
 FUNC_7(&VAR_5->i2c_props, VAR_20, 2);
}
