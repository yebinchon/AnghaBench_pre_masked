
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int tuner_reg ;
struct tda827x_priv {int sgIF; int lpsel; unsigned int frequency; int i2c_addr; } ;
struct i2c_msg {unsigned char* buf; int len; scalar_t__ flags; int addr; } ;
struct dvb_frontend {struct tda827x_priv* tuner_priv; } ;
struct analog_parameters {unsigned int frequency; scalar_t__ mode; } ;
struct TYPE_2__ {int lomax; int spd; int svco; int sbs; int gc3; int scr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,struct analog_parameters*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct dvb_frontend*,int,struct analog_parameters*) ;
 int FUNC_4 (struct dvb_frontend*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3,
          struct analog_parameters *VAR_4)
{
 unsigned char VAR_5[11];
 u32 VAR_6;
 int VAR_7;
 struct tda827x_priv *VAR_8 = VAR_3->tuner_priv;
 struct i2c_msg VAR_9 = { .addr = VAR_8->i2c_addr, .flags = 0,
          .buf = VAR_5, .len = sizeof(VAR_5) };
 unsigned int VAR_10 = VAR_4->frequency;

 FUNC_2(VAR_3, VAR_4);

 FUNC_3(VAR_3, 1, VAR_4);
 FUNC_1(10);

 if (VAR_4->mode == VAR_1)
  VAR_10 = VAR_10 / 1000;

 VAR_6 = VAR_10 + VAR_8->sgIF;

 VAR_7 = 0;
 while (VAR_2[VAR_7].lomax < VAR_6 * 62500) {
  if (VAR_2[VAR_7 + 1].lomax == 0)
   break;
  VAR_7++;
 }

 VAR_6 = VAR_6 << VAR_2[VAR_7].spd;

 VAR_5[0] = 0;
 VAR_5[1] = (unsigned char)(VAR_6>>8);
 VAR_5[2] = (unsigned char) VAR_6;
 VAR_5[3] = 0;
 VAR_5[4] = 0x16;
 VAR_5[5] = (VAR_2[VAR_7].spd << 5) +
         (VAR_2[VAR_7].svco << 3) +
   VAR_2[VAR_7].sbs;
 VAR_5[6] = 0x8b + (VAR_2[VAR_7].gc3 << 4);
 VAR_5[7] = 0x1c;
 VAR_5[8] = 4;
 VAR_5[9] = 0x20;
 VAR_5[10] = 0x00;
 VAR_9.len = 11;
 FUNC_4(VAR_3, &VAR_9, 1);

 VAR_5[0] = 0x90;
 VAR_5[1] = 0xff;
 VAR_5[2] = 0xe0;
 VAR_5[3] = 0;
 VAR_5[4] = 0x99 + (VAR_8->lpsel << 1);
 VAR_9.len = 5;
 FUNC_4(VAR_3, &VAR_9, 1);

 VAR_5[0] = 0xa0;
 VAR_5[1] = 0xc0;
 VAR_9.len = 2;
 FUNC_4(VAR_3, &VAR_9, 1);

 VAR_5[0] = 0x30;
 VAR_5[1] = 0x10 + VAR_2[VAR_7].scr;
 FUNC_4(VAR_3, &VAR_9, 1);

 VAR_9.flags = VAR_0;
 FUNC_4(VAR_3, &VAR_9, 1);
 VAR_9.flags = 0;
 VAR_5[1] >>= 4;
 FUNC_0("AGC2 gain is: %d\n", VAR_5[1]);
 if (VAR_5[1] < 1)
  FUNC_3(VAR_3, 0, VAR_4);

 FUNC_1(100);
 VAR_5[0] = 0x60;
 VAR_5[1] = 0x3c;
 FUNC_4(VAR_3, &VAR_9, 1);

 FUNC_1(163);
 VAR_5[0] = 0x50;
 VAR_5[1] = 0x8f + (VAR_2[VAR_7].gc3 << 4);
 FUNC_4(VAR_3, &VAR_9, 1);

 VAR_5[0] = 0x80;
 VAR_5[1] = 0x28;
 FUNC_4(VAR_3, &VAR_9, 1);

 VAR_5[0] = 0xb0;
 VAR_5[1] = 0x01;
 FUNC_4(VAR_3, &VAR_9, 1);

 VAR_5[0] = 0xc0;
 VAR_5[1] = 0x19 + (VAR_8->lpsel << 1);
 FUNC_4(VAR_3, &VAR_9, 1);

 VAR_8->frequency = VAR_4->frequency;

 return 0;
}
