
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tda18271_rf_tracking_filter_cal {int rfmax; int rfband; int rf_b2; int rf_b1; int rf_a2; int rf_a1; int rf3; int rf2; int rf1; int rf3_def; int rf2_def; int rf1_def; } ;
struct tda18271_priv {struct tda18271_rf_tracking_filter_cal* rf_cal_state; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,...) ;

int FUNC_1(struct dvb_frontend *VAR_3, u32 *VAR_4, u8 *VAR_5)
{
 struct tda18271_priv *VAR_6 = VAR_3->tuner_priv;
 struct tda18271_rf_tracking_filter_cal *VAR_7 = VAR_6->rf_cal_state;
 int VAR_8 = 0;

 while ((VAR_7[VAR_8].rfmax * 1000) < *VAR_4) {
  if (VAR_2 & VAR_0)
   FUNC_0("(%d) rfmax = %d < freq = %d, "
    "rf1_def = %d, rf2_def = %d, rf3_def = %d, "
    "rf1 = %d, rf2 = %d, rf3 = %d, "
    "rf_a1 = %d, rf_a2 = %d, "
    "rf_b1 = %d, rf_b2 = %d\n",
    VAR_8, VAR_7[VAR_8].rfmax * 1000, *VAR_4,
    VAR_7[VAR_8].rf1_def, VAR_7[VAR_8].rf2_def, VAR_7[VAR_8].rf3_def,
    VAR_7[VAR_8].rf1, VAR_7[VAR_8].rf2, VAR_7[VAR_8].rf3,
    VAR_7[VAR_8].rf_a1, VAR_7[VAR_8].rf_a2,
    VAR_7[VAR_8].rf_b1, VAR_7[VAR_8].rf_b2);
  if (VAR_7[VAR_8].rfmax == 0)
   return -VAR_1;
  VAR_8++;
 }
 if (VAR_5)
  *VAR_5 = VAR_7[VAR_8].rfband;

 FUNC_0("(%d) rf_band = %02x\n", VAR_8, VAR_7[VAR_8].rfband);

 return VAR_8;
}
