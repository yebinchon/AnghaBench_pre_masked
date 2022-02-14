
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* i2c1_sda3; void* i2c1_sda2; void* i2c1_sda1; void* i2c1_sen; void* i2c1; void* i2c0; void* pwm2; void* pwm1; void* pwm0; void* sser; void* ser4; void* ser3; void* ser2; void* ser1; void* vout_sync; void* vout; void* tg_clk; void* tg; void* geth; void* eth_mdio; void* eth; } ;
typedef TYPE_1__ reg_pinmux_rw_hwprot ;
typedef enum fixed_function { ____Placeholder_fixed_function } fixed_function ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_4 ;







 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(enum fixed_function VAR_10)
{
 int VAR_11 = -VAR_0;
 char VAR_12[sizeof VAR_6];
 unsigned long VAR_13;

 FUNC_5(&VAR_5, VAR_13);


 FUNC_4(VAR_12, VAR_6, sizeof VAR_6);

 FUNC_3();

 reg_pinmux_rw_hwprot VAR_14 = FUNC_0(VAR_4, VAR_7, VAR_9);

 switch (VAR_10) {
 case 145:
  VAR_11 = FUNC_2(VAR_2, 8, 23);
  VAR_11 |= FUNC_2(VAR_2, 24, 25);
  VAR_11 |= FUNC_2(VAR_2, 0, 7);
  VAR_14.eth = VAR_14.eth_mdio = VAR_14.geth = VAR_8;
  break;
 case 129:
  VAR_11 = FUNC_2(VAR_2, 27, 29);
  VAR_14.tg_clk = VAR_8;
  break;
 case 130:
  VAR_11 = FUNC_2(VAR_2, 27, 31);
  VAR_11 |= FUNC_2(VAR_3, 0, 15);
  VAR_14.tg = VAR_14.tg_clk = VAR_8;
  break;
 case 128:
  VAR_11 = FUNC_2(VAR_1, 8, 18);
  VAR_14.vout = VAR_14.vout_sync = VAR_8;
  break;
 case 135:
  VAR_11 = FUNC_2(VAR_1, 24, 25);
  VAR_14.ser1 = VAR_8;
  break;
 case 134:
  VAR_11 = FUNC_2(VAR_1, 26, 27);
  VAR_14.ser2 = VAR_8;
  break;
 case 133:
  VAR_11 = FUNC_2(VAR_1, 28, 29);
  VAR_14.ser3 = VAR_8;
  break;
 case 132:
  VAR_11 = FUNC_2(VAR_1, 30, 31);
  VAR_14.ser4 = VAR_8;
  break;
 case 131:
  VAR_11 = FUNC_2(VAR_1, 19, 23);
  VAR_14.sser = VAR_8;
  break;
 case 138:
  VAR_11 = FUNC_2(VAR_1, 30, 30);
  VAR_14.pwm0 = VAR_8;
  break;
 case 137:
  VAR_11 = FUNC_2(VAR_1, 31, 31);
  VAR_14.pwm1 = VAR_8;
  break;
 case 136:
  VAR_11 = FUNC_2(VAR_2, 26, 26);
  VAR_14.pwm2 = VAR_8;
  break;
 case 144:
  VAR_11 = FUNC_2(VAR_1, 0, 1);
  VAR_14.i2c0 = VAR_8;
  break;
 case 143:
  VAR_11 = FUNC_2(VAR_1, 2, 3);
  VAR_14.i2c1 = VAR_8;
  break;
 case 142:
  VAR_11 = FUNC_2(VAR_1, 2, 3);
  VAR_11 |= FUNC_2(VAR_1, 7, 7);
  VAR_14.i2c1 = VAR_14.i2c1_sen = VAR_8;
  break;
 case 141:
  VAR_11 = FUNC_2(VAR_1, 2, 4);
  VAR_14.i2c1_sda1 = VAR_8;
  break;
 case 140:
  VAR_11 = FUNC_2(VAR_1, 2, 3);
  VAR_11 |= FUNC_2(VAR_1, 5, 5);
  VAR_14.i2c1_sda2 = VAR_8;
  break;
 case 139:
  VAR_11 = FUNC_2(VAR_1, 2, 3);
  VAR_11 |= FUNC_2(VAR_1, 6, 6);
  VAR_14.i2c1_sda3 = VAR_8;
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }

 if (!VAR_11)
  FUNC_1(VAR_4, VAR_7, VAR_9, VAR_14);
 else
  FUNC_4(VAR_6, VAR_12, sizeof VAR_6);

  FUNC_6(&VAR_5, VAR_13);

  return VAR_11;
}
