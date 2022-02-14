
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int* radio_tx_gain; int* dsp_predis_atten; } ;
union il4965_tx_power_dual_stream {int dw; TYPE_4__ s; } ;
typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_9__ {int ** tx_atten; int voltage; } ;
struct il_priv {int tx_power_user_lmt; TYPE_3__ card_alive_init; int temperature; TYPE_2__* calib_info; int band; } ;
struct il_eeprom_calib_measure {int temperature; int gain_idx; int actual_pow; } ;
struct il_eeprom_calib_ch_info {struct il_eeprom_calib_measure** measurements; } ;
struct il_channel_info {int ht40_max_power_avg; int max_power_avg; } ;
struct il4965_tx_power_db {TYPE_1__* power_tbl; } ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_12__ {int radio; int dsp; } ;
struct TYPE_11__ {int degrees_per_05db_a; int degrees_per_05db_a_denom; } ;
struct TYPE_8__ {scalar_t__ saturation_power24; scalar_t__ saturation_power52; int voltage; } ;
struct TYPE_7__ {int dw; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__* VAR_16 ;
 int FUNC_4 (int ) ;
 TYPE_6__** VAR_17 ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct il_priv*,int,struct il_eeprom_calib_ch_info*) ;
 int FUNC_9 (int,int,int*) ;
 struct il_channel_info* FUNC_10 (struct il_priv*,int ,int) ;
 int FUNC_11 (struct il_channel_info const*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 TYPE_5__* VAR_18 ;

__attribute__((used)) static int
FUNC_16(struct il_priv *VAR_19, u8 VAR_20, u16 VAR_21, u8 VAR_22,
   u8 VAR_23,
   struct il4965_tx_power_db *VAR_24)
{
 u8 VAR_25;
 s32 VAR_26;
 s32 VAR_27;
 s32 VAR_28;
 s32 VAR_29;
 s32 VAR_30;
 s32 VAR_31;
 s32 VAR_32 = VAR_0;
 int VAR_33;
 int VAR_34;
 const struct il_channel_info *VAR_35 = ((void*)0);
 struct il_eeprom_calib_ch_info VAR_36;
 const struct il_eeprom_calib_measure *VAR_37;
 s16 VAR_38;
 s32 VAR_39;
 s32 VAR_40;
 s32 VAR_41;
 s32 VAR_42;
 s32 VAR_43;
 s32 VAR_44[2];
 s32 VAR_45[2];
 s32 VAR_46[2];
 s32 VAR_47;



 VAR_27 = 2 * VAR_19->tx_power_user_lmt;


 FUNC_0("chan %d band %d is_ht40 %d\n", VAR_21, VAR_20, VAR_22);

 VAR_35 = FUNC_10(VAR_19, VAR_19->band, VAR_21);

 if (!FUNC_11(VAR_35))
  return -VAR_1;



 VAR_32 = FUNC_6(VAR_21);
 if (VAR_32 < 0) {
  FUNC_1("Can't find txatten group for channel %d.\n", VAR_21);
  return VAR_32;
 }

 FUNC_0("channel %d belongs to txatten group %d\n", VAR_21,
    VAR_32);

 if (VAR_22) {
  if (VAR_23)
   VAR_21 -= 2;
  else
   VAR_21 += 2;
 }



 if (VAR_20)
  VAR_25 = VAR_19->calib_info->saturation_power24;
 else
  VAR_25 = VAR_19->calib_info->saturation_power52;

 if (VAR_25 < VAR_11 ||
     VAR_25 > VAR_10) {
  if (VAR_20)
   VAR_25 = VAR_5;
  else
   VAR_25 = VAR_6;
 }



 if (VAR_22)
  VAR_30 = VAR_35->ht40_max_power_avg * 2;
 else
  VAR_30 = VAR_35->max_power_avg * 2;

 if ((VAR_30 < VAR_9) ||
     (VAR_30 > VAR_8)) {
  if (VAR_20)
   VAR_30 = VAR_3;
  else
   VAR_30 = VAR_4;
 }



 FUNC_8(VAR_19, VAR_21, &VAR_36);


 VAR_38 = FUNC_12(VAR_19->calib_info->voltage);
 VAR_39 = (s32) FUNC_13(VAR_19->card_alive_init.voltage);
 VAR_40 =
     FUNC_7(VAR_38, VAR_39);

 FUNC_0("curr volt %d eeprom volt %d volt comp %d\n", VAR_39,
    VAR_38, VAR_40);


 VAR_29 = FUNC_14(VAR_19->temperature, VAR_13);
 VAR_29 = FUNC_15(VAR_19->temperature, VAR_12);
 VAR_29 = FUNC_3(VAR_29);



 VAR_41 =
     VAR_18[VAR_32].degrees_per_05db_a;
 VAR_42 =
     VAR_18[VAR_32].degrees_per_05db_a_denom;


 for (VAR_34 = 0; VAR_34 < 2; VAR_34++) {
  VAR_37 = &VAR_36.measurements[VAR_34][1];



  VAR_43 = VAR_37->temperature;
  FUNC_9((VAR_29 -
           VAR_43) * VAR_42,
          VAR_41,
          &VAR_44[VAR_34]);

  VAR_45[VAR_34] = VAR_37->gain_idx;
  VAR_46[VAR_34] = VAR_37->actual_pow;

  FUNC_0("chain = %d\n", VAR_34);
  FUNC_0("fctry tmp %d, " "curr tmp %d, comp %d steps\n",
     VAR_43, VAR_29, VAR_44[VAR_34]);

  FUNC_0("fctry idx %d, fctry pwr %d\n", VAR_45[VAR_34],
     VAR_46[VAR_34]);
 }


 for (VAR_33 = 0; VAR_33 < VAR_15; VAR_33++) {
  u8 VAR_48;
  union il4965_tx_power_dual_stream VAR_49;




  if (VAR_33 & 0x8) {
   VAR_31 =
       VAR_30 -
       VAR_7;
   VAR_48 = 1;
  } else {
   VAR_31 = VAR_30;
   VAR_48 = 0;
  }


  VAR_28 = VAR_25 - VAR_16[VAR_33];
  if (VAR_28 > VAR_31)
   VAR_28 = VAR_31;



  VAR_26 = VAR_27;
  if (VAR_26 > VAR_28)
   VAR_26 = VAR_28;

  FUNC_0("rate %d sat %d reg %d usr %d tgt %d\n", VAR_33,
     VAR_25 - VAR_16[VAR_33],
     VAR_31, VAR_27, VAR_26);


  for (VAR_34 = 0; VAR_34 < 2; VAR_34++) {
   s32 VAR_50;

   if (VAR_48)
    VAR_50 =
        (s32) FUNC_13(VAR_19->card_alive_init.
            tx_atten[VAR_32][VAR_34]);
   else
    VAR_50 = 0;


   VAR_47 =
       (u8) (VAR_45[VAR_34] -
      (VAR_26 - VAR_46[VAR_34]) -
      VAR_44[VAR_34] - VAR_40 +
      VAR_50);




   if (VAR_47 < FUNC_5(VAR_33, VAR_20))
    VAR_47 = FUNC_5(VAR_33, VAR_20);


   if (!VAR_20)
    VAR_47 += 9;


   if (VAR_33 == VAR_14)
    VAR_47 +=
        VAR_2;


   if (VAR_47 > 107) {
    FUNC_2("txpower idx %d > 107\n", VAR_47);
    VAR_47 = 107;
   }
   if (VAR_47 < 0) {
    FUNC_2("txpower idx %d < 0\n", VAR_47);
    VAR_47 = 0;
   }


   VAR_49.s.radio_tx_gain[VAR_34] =
       VAR_17[VAR_20][VAR_47].radio;
   VAR_49.s.dsp_predis_atten[VAR_34] =
       VAR_17[VAR_20][VAR_47].dsp;

   FUNC_0("chain %d mimo %d idx %d "
      "gain 0x%02x dsp %d\n", VAR_34, VAR_50,
      VAR_47, VAR_49.s.radio_tx_gain[VAR_34],
      VAR_49.s.dsp_predis_atten[VAR_34]);
  }

  VAR_24->power_tbl[VAR_33].dw = FUNC_4(VAR_49.dw);

 }

 return 0;
}
