
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* i2c1_sda3; void* i2c1; void* i2c1_sda2; void* i2c1_sda1; void* i2c1_sen; void* i2c0; void* pwm2; void* pwm1; void* pwm0; void* pio; void* sser; void* sser_ser_dma6_7; void* ser4; void* ser3; void* ser2; void* ser1; void* vout_sync; void* vout; void* strdma0_2_video; void* tg_clk; void* tg; void* ccd_tg_200; void* ccd_tg_100; void* geth; void* eth_mdio; void* eth; void* dma0_1_eth; } ;
typedef TYPE_1__ reg_pinmux_rw_hwprot ;
typedef TYPE_1__ reg_clkgen_rw_clk_ctrl ;
typedef enum fixed_function { ____Placeholder_fixed_function } fixed_function ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__) ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_5 ;

 int VAR_6 ;







 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int
FUNC_7(enum fixed_function VAR_15)
{
 int VAR_16 = -VAR_0;
 char VAR_17[sizeof VAR_8];
 unsigned long VAR_18;

 FUNC_5(&VAR_7, VAR_18);


 FUNC_4(VAR_17, VAR_8, sizeof VAR_8);

 FUNC_3();

 reg_pinmux_rw_hwprot VAR_19 = FUNC_0(VAR_5, VAR_10, VAR_14);
 reg_clkgen_rw_clk_ctrl VAR_20 = FUNC_0(VAR_4, VAR_9,
  VAR_13);

 switch (VAR_15) {
 case 147:
  VAR_20.eth = VAR_11;
  VAR_20.dma0_1_eth = VAR_11;
  VAR_16 = FUNC_2(VAR_2, 8, 23, VAR_6);
  VAR_16 |= FUNC_2(VAR_2, 24, 25, VAR_6);
  VAR_19.eth = VAR_19.eth_mdio = VAR_12;
  break;
 case 146:
  VAR_16 = FUNC_2(VAR_2, 0, 7, VAR_6);
  VAR_19.geth = VAR_12;
  break;
 case 129:
  VAR_20.ccd_tg_100 = VAR_20.ccd_tg_200 = VAR_11;
  VAR_16 = FUNC_2(VAR_2, 27, 29, VAR_6);
  VAR_19.tg_clk = VAR_12;
  break;
 case 130:
  VAR_20.ccd_tg_100 = VAR_20.ccd_tg_200 = VAR_11;
  VAR_16 = FUNC_2(VAR_2, 27, 31, VAR_6);
  VAR_16 |= FUNC_2(VAR_3, 0, 15, VAR_6);
  VAR_19.tg = VAR_19.tg_clk = VAR_12;
  break;
 case 128:
  VAR_20.strdma0_2_video = VAR_11;
  VAR_16 = FUNC_2(VAR_1, 8, 18, VAR_6);
  VAR_19.vout = VAR_19.vout_sync = VAR_12;
  break;
 case 135:
  VAR_20.sser_ser_dma6_7 = VAR_11;
  VAR_16 = FUNC_2(VAR_1, 24, 25, VAR_6);
  VAR_19.ser1 = VAR_12;
  break;
 case 134:
  VAR_20.sser_ser_dma6_7 = VAR_11;
  VAR_16 = FUNC_2(VAR_1, 26, 27, VAR_6);
  VAR_19.ser2 = VAR_12;
  break;
 case 133:
  VAR_20.sser_ser_dma6_7 = VAR_11;
  VAR_16 = FUNC_2(VAR_1, 28, 29, VAR_6);
  VAR_19.ser3 = VAR_12;
  break;
 case 132:
  VAR_20.sser_ser_dma6_7 = VAR_11;
  VAR_16 = FUNC_2(VAR_1, 30, 31, VAR_6);
  VAR_19.ser4 = VAR_12;
  break;
 case 131:
  VAR_20.sser_ser_dma6_7 = VAR_11;
  VAR_16 = FUNC_2(VAR_1, 19, 23, VAR_6);
  VAR_19.sser = VAR_12;
  break;
 case 139:
  VAR_19.pio = VAR_12;
  VAR_16 = 0;
  break;
 case 138:
  VAR_16 = FUNC_2(VAR_1, 30, 30, VAR_6);
  VAR_19.pwm0 = VAR_12;
  break;
 case 137:
  VAR_16 = FUNC_2(VAR_1, 31, 31, VAR_6);
  VAR_19.pwm1 = VAR_12;
  break;
 case 136:
  VAR_16 = FUNC_2(VAR_2, 26, 26, VAR_6);
  VAR_19.pwm2 = VAR_12;
  break;
 case 145:
  VAR_16 = FUNC_2(VAR_1, 0, 1, VAR_6);
  VAR_19.i2c0 = VAR_12;
  break;
 case 144:
  VAR_16 = FUNC_2(VAR_1, 2, 3, VAR_6);
  VAR_19.i2c1 = VAR_12;
  break;
 case 143:
  VAR_16 = FUNC_2(VAR_1, 2, 3, VAR_6);
  VAR_16 |= FUNC_2(VAR_1, 7, 7, VAR_6);
  VAR_19.i2c1 = VAR_19.i2c1_sen = VAR_12;
  break;
 case 142:
  VAR_16 = FUNC_2(VAR_1, 2, 4, VAR_6);
  VAR_19.i2c1 = VAR_19.i2c1_sda1 = VAR_12;
  break;
 case 141:
  VAR_16 = FUNC_2(VAR_1, 2, 3, VAR_6);
  VAR_16 |= FUNC_2(VAR_1, 5, 5, VAR_6);
  VAR_19.i2c1 = VAR_19.i2c1_sda2 = VAR_12;
  break;
 case 140:
  VAR_16 = FUNC_2(VAR_1, 2, 3, VAR_6);
  VAR_16 |= FUNC_2(VAR_1, 6, 6, VAR_6);
  VAR_19.i2c1 = VAR_19.i2c1_sda3 = VAR_12;
  break;
 default:
  VAR_16 = -VAR_0;
  break;
 }

 if (!VAR_16) {
  FUNC_1(VAR_5, VAR_10, VAR_14, VAR_19);
  FUNC_1(VAR_4, VAR_9, VAR_13, VAR_20);
 } else
  FUNC_4(VAR_8, VAR_17, sizeof VAR_8);

  FUNC_6(&VAR_7, VAR_18);

  return VAR_16;
}
