
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tuner_i2c_props {int addr; } ;
struct tuner_simple_priv {int type; size_t nr; struct tuner_i2c_props i2c_props; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;
struct analog_parameters {int std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__* VAR_17 ;
 int FUNC_0 (struct dvb_frontend*,int*,int*,scalar_t__) ;
 int FUNC_1 (struct tuner_i2c_props*,int*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_18,
       struct analog_parameters *VAR_19,
       u8 *VAR_20, u8 *VAR_21)
{
 struct tuner_simple_priv *VAR_22 = VAR_18->tuner_priv;
 int VAR_23;


 switch (VAR_22->type) {
 case 130:



  *VAR_21 &= ~0x03;
  if (VAR_19->std & VAR_15)

   *VAR_21 |= VAR_1;
  else if (VAR_19->std & VAR_16)
   *VAR_21 |= VAR_2;
  else
   *VAR_21 |= VAR_0;
  break;

 case 128:
  *VAR_21 &= ~0x0f;

  if (VAR_19->std & VAR_12) {
   *VAR_21 |= VAR_6;

  } else if (VAR_19->std & VAR_14) {
   *VAR_21 |= VAR_8;

  } else if (VAR_19->std & VAR_13) {
   *VAR_21 |= VAR_7;

  } else if (VAR_19->std & VAR_15) {
   *VAR_21 |= VAR_9;

  }
  break;

 case 131:
  *VAR_21 &= ~0x0f;

  if (VAR_19->std & (VAR_12|VAR_13)) {
   *VAR_21 |= VAR_3;

  } else if (VAR_19->std & VAR_14) {
   *VAR_21 |= VAR_4;

  } else if (VAR_19->std & VAR_15) {
   *VAR_21 |= VAR_5;

  }
  break;

 case 132:




  *VAR_21 &= ~0x03;
  if (!(VAR_19->std & VAR_11))
   *VAR_21 |= 2;
  break;

 case 133:

  *VAR_20 |= VAR_10;
  break;

 case 129:
 {
  struct tuner_i2c_props VAR_24 = VAR_22->i2c_props;




  u8 VAR_25[4] = { 0x14, 0x00, 0x17, 0x00};
  *VAR_21 &= ~0x40;
  if (VAR_19->std & VAR_11) {
   *VAR_21 |= 0x40;
   VAR_25[1] = 0x04;
  }

  VAR_24.addr = 0x0a;
  VAR_23 = FUNC_1(&VAR_24, &VAR_25[0], 2);
  if (2 != VAR_23)
   FUNC_2("i2c i/o error: rc == %d "
       "(should be 2)\n", VAR_23);
  VAR_23 = FUNC_1(&VAR_24, &VAR_25[2], 2);
  if (2 != VAR_23)
   FUNC_2("i2c i/o error: rc == %d "
       "(should be 2)\n", VAR_23);
  break;
 }
 }
 if (VAR_17[VAR_22->nr])
  FUNC_0(VAR_18, VAR_20, VAR_21, VAR_17[VAR_22->nr]);

 return 0;
}
