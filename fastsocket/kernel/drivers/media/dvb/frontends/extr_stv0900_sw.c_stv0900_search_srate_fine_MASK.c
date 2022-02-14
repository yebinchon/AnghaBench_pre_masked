
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {int mclk; int* symbol_rate; int chip_id; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


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
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct stv0900_internal*,int,int) ;
 int FUNC_1 (struct stv0900_internal*,int ) ;
 int FUNC_2 (struct stv0900_internal*,int ,int ) ;
 int FUNC_3 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static u32 FUNC_4(struct dvb_frontend *VAR_19)
{
 struct stv0900_state *VAR_20 = VAR_19->demodulator_priv;
 struct stv0900_internal *VAR_21 = VAR_20->internal;
 enum fe_stv0900_demod_num VAR_22 = VAR_20->demod;
 u32 VAR_23,
  VAR_24,
  VAR_25,
  VAR_26,
  VAR_27,
  VAR_28;

 VAR_23 = FUNC_0(VAR_21, VAR_21->mclk, VAR_22);

 if (VAR_23 > 3000000) {
  VAR_26 = 13 * (VAR_23 / 10);
  VAR_26 = (VAR_26 / 1000) * 65536;
  VAR_26 /= (VAR_21->mclk / 1000);

  VAR_27 = 10 * (VAR_23 / 13);
  VAR_27 = (VAR_27 / 1000)*65536;
  VAR_27 /= (VAR_21->mclk / 1000);

  VAR_25 = (VAR_23 / 1000) * 65536;
  VAR_25 /= (VAR_21->mclk / 1000);
 } else {
  VAR_26 = 13 * (VAR_23 / 10);
  VAR_26 = (VAR_26 / 100) * 65536;
  VAR_26 /= (VAR_21->mclk / 100);

  VAR_27 = 10 * (VAR_23 / 14);
  VAR_27 = (VAR_27 / 100) * 65536;
  VAR_27 /= (VAR_21->mclk / 100);

  VAR_25 = (VAR_23 / 100) * 65536;
  VAR_25 /= (VAR_21->mclk / 100);
 }

 VAR_28 = 13 * (VAR_23 / 10);
  VAR_24 = (FUNC_1(VAR_21, VAR_3) << 8)
     | FUNC_1(VAR_21, VAR_2);

 if (VAR_28 < VAR_21->symbol_rate[VAR_22])
  VAR_23 = 0;
 else {
  FUNC_3(VAR_21, VAR_7, 0x1f);
  FUNC_3(VAR_21, VAR_16, 0xc1);
  FUNC_3(VAR_21, VAR_18, 0x20);
  FUNC_3(VAR_21, VAR_17, 0x00);
  FUNC_3(VAR_21, VAR_15, 0xd2);
  FUNC_2(VAR_21, VAR_6, 0);
  FUNC_3(VAR_21, VAR_0, 0x38);

  if (VAR_21->chip_id >= 0x30)
   FUNC_3(VAR_21, VAR_1, 0x79);
  else if (VAR_21->chip_id >= 0x20)
   FUNC_3(VAR_21, VAR_1, 0x49);
  else
   FUNC_3(VAR_21, VAR_1, 0xed);

  FUNC_3(VAR_21, VAR_14, (VAR_26 >> 8) & 0x7f);
  FUNC_3(VAR_21, VAR_13, (VAR_26 & 0xff));

  FUNC_3(VAR_21, VAR_12, (VAR_27 >> 8) & 0x7f);
  FUNC_3(VAR_21, VAR_11, (VAR_27 & 0xff));

  FUNC_3(VAR_21, VAR_10, (VAR_25 >> 8) & 0xff);
  FUNC_3(VAR_21, VAR_9, (VAR_25 & 0xff));

  FUNC_3(VAR_21, VAR_8, 0x20);
  FUNC_3(VAR_21, VAR_5, (VAR_24 >> 8) & 0xff);
  FUNC_3(VAR_21, VAR_4, VAR_24 & 0xff);
  FUNC_3(VAR_21, VAR_7, 0x15);
 }

 return VAR_23;
}
