
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tda827x_priv {int sgIF; int lpsel; unsigned int frequency; int i2c_addr; } ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct dvb_frontend {struct tda827x_priv* tuner_priv; } ;
struct analog_parameters {unsigned int frequency; scalar_t__ mode; } ;
struct TYPE_2__ {int lomax; int spd; int div1p5; int bs; int bp; int gc3; unsigned char cp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,struct analog_parameters*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct dvb_frontend*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2,
          struct analog_parameters *VAR_3)
{
 unsigned char VAR_4[8];
 unsigned char VAR_5[2];
 u32 VAR_6;
 int VAR_7;
 struct tda827x_priv *VAR_8 = VAR_2->tuner_priv;
 struct i2c_msg VAR_9 = { .addr = VAR_8->i2c_addr, .flags = 0 };
 unsigned int VAR_10 = VAR_3->frequency;

 FUNC_1(VAR_2, VAR_3);

 if (VAR_3->mode == VAR_0)
  VAR_10 = VAR_10 / 1000;

 VAR_6 = VAR_10 + VAR_8->sgIF;

 VAR_7 = 0;
 while (VAR_1[VAR_7].lomax < VAR_6 * 62500) {
  if (VAR_1[VAR_7 + 1].lomax == 0)
   break;
  VAR_7++;
 }

 VAR_6 = VAR_6 << VAR_1[VAR_7].spd;

 VAR_4[0] = 0;
 VAR_4[1] = (unsigned char)(VAR_6>>8);
 VAR_4[2] = (unsigned char) VAR_6;
 VAR_4[3] = 0x40;
 VAR_4[4] = 0x52 + (VAR_8->lpsel << 5);
 VAR_4[5] = (VAR_1[VAR_7].spd << 6) +
         (VAR_1[VAR_7].div1p5 << 5) +
         (VAR_1[VAR_7].bs << 3) + VAR_1[VAR_7].bp;
 VAR_4[6] = 0x8f + (VAR_1[VAR_7].gc3 << 4);
 VAR_4[7] = 0x8f;

 VAR_9.buf = VAR_4;
 VAR_9.len = 8;
 FUNC_2(VAR_2, &VAR_9, 1);

 VAR_9.buf = VAR_5;
 VAR_9.len = 2;
 VAR_5[0] = 0x80;
 VAR_5[1] = 0;
 FUNC_2(VAR_2, &VAR_9, 1);

 VAR_5[0] = 0x60;
 VAR_5[1] = 0xbf;
 FUNC_2(VAR_2, &VAR_9, 1);

 VAR_5[0] = 0x30;
 VAR_5[1] = VAR_4[4] + 0x80;
 FUNC_2(VAR_2, &VAR_9, 1);

 FUNC_0(1);
 VAR_5[0] = 0x30;
 VAR_5[1] = VAR_4[4] + 4;
 FUNC_2(VAR_2, &VAR_9, 1);

 FUNC_0(1);
 VAR_5[0] = 0x30;
 VAR_5[1] = VAR_4[4];
 FUNC_2(VAR_2, &VAR_9, 1);

 FUNC_0(550);
 VAR_5[0] = 0x30;
 VAR_5[1] = (VAR_4[4] & 0xfc) + VAR_1[VAR_7].cp;
 FUNC_2(VAR_2, &VAR_9, 1);

 VAR_5[0] = 0x60;
 VAR_5[1] = 0x3f;
 FUNC_2(VAR_2, &VAR_9, 1);

 VAR_5[0] = 0x80;
 VAR_5[1] = 0x08;
 FUNC_2(VAR_2, &VAR_9, 1);

 VAR_8->frequency = VAR_3->frequency;

 return 0;
}
