
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct ieee80211_channel {scalar_t__ band; scalar_t__ hw_value; int center_freq; } ;
struct ath5k_rf_reg {int dummy; } ;
struct ath5k_ini_rfbuffer {int rfb_bank; int rfb_ctrl_register; int * rfb_mode_data; } ;
struct TYPE_4__ {size_t g_step_idx; void* g_state; } ;
struct ath5k_eeprom_info {int** ee_ob; int** ee_db; int* ee_xpd; int* ee_x_gain; int* ee_i_gain; size_t** ee_pdc_to_idx; int* ee_pd_gains; } ;
struct TYPE_3__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {int ah_radio; int ah_rf_banks_size; int ah_radio_5ghz_revision; scalar_t__ ah_mac_srev; int* ah_offset; scalar_t__ ah_bwmode; scalar_t__ ah_phy_revision; TYPE_2__ ah_gain; int * ah_rf_banks; void* ah_rf_regs_count; TYPE_1__ ah_capabilities; } ;
struct ath5k_gain_opt_step {int* gos_param; } ;
struct ath5k_gain_opt {struct ath5k_gain_opt_step* go_step; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ,int) ;







 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct ath5k_hw*,char*) ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct ath5k_hw*,int ,int ) ;
 int FUNC_6 (struct ath5k_hw*,struct ath5k_rf_reg const*,int,int ,int) ;
 int * FUNC_7 (int,int ) ;
 void* VAR_60 ;
 void* VAR_61 ;
 void* VAR_62 ;
 void* VAR_63 ;
 void* VAR_64 ;
 void* VAR_65 ;
 void* VAR_66 ;
 void* VAR_67 ;
 void* VAR_68 ;
 void* VAR_69 ;
 void* VAR_70 ;
 void* VAR_71 ;
 void* VAR_72 ;
 void* VAR_73 ;
 void* VAR_74 ;
 void* VAR_75 ;
 struct ath5k_gain_opt VAR_76 ;
 struct ath5k_gain_opt VAR_77 ;

__attribute__((used)) static int
FUNC_8(struct ath5k_hw *VAR_78,
   struct ieee80211_channel *VAR_79,
   unsigned int VAR_80)
{
 const struct ath5k_rf_reg *VAR_81;
 const struct ath5k_ini_rfbuffer *VAR_82;
 const struct ath5k_gain_opt *VAR_83 = ((void*)0);
 const struct ath5k_gain_opt_step *VAR_84;
 struct ath5k_eeprom_info *VAR_85 = &VAR_78->ah_capabilities.cap_eeprom;
 u8 VAR_86 = 0;
 u32 *VAR_87;
 int VAR_88, VAR_89 = -1, VAR_90 = -1;

 switch (VAR_78->ah_radio) {
 case 130:
  VAR_81 = VAR_63;
  VAR_78->ah_rf_regs_count = FUNC_2(VAR_63);
  VAR_82 = VAR_72;
  VAR_78->ah_rf_banks_size = FUNC_2(VAR_72);
  VAR_83 = &VAR_76;
  break;
 case 129:
  if (VAR_78->ah_radio_5ghz_revision >= VAR_53) {
   VAR_81 = VAR_65;
   VAR_78->ah_rf_regs_count = FUNC_2(VAR_65);
   VAR_82 = VAR_74;
   VAR_78->ah_rf_banks_size = FUNC_2(VAR_74);
  } else {
   VAR_81 = VAR_64;
   VAR_78->ah_rf_regs_count = FUNC_2(VAR_64);
   VAR_82 = VAR_73;
   VAR_78->ah_rf_banks_size = FUNC_2(VAR_73);
  }
  VAR_83 = &VAR_77;
  break;
 case 132:
  VAR_81 = VAR_61;
  VAR_78->ah_rf_regs_count = FUNC_2(VAR_61);
  VAR_82 = VAR_69;
  VAR_78->ah_rf_banks_size = FUNC_2(VAR_69);
  break;
 case 134:
  VAR_81 = VAR_60;
  VAR_78->ah_rf_regs_count = FUNC_2(VAR_60);
  VAR_82 = VAR_67;
  VAR_78->ah_rf_banks_size = FUNC_2(VAR_67);
  break;
 case 128:
  VAR_81 = VAR_66;
  VAR_78->ah_rf_regs_count = FUNC_2(VAR_66);
  VAR_82 = VAR_75;
  VAR_78->ah_rf_banks_size = FUNC_2(VAR_75);
  break;
 case 133:
  VAR_81 = VAR_62;
  VAR_78->ah_rf_regs_count = FUNC_2(VAR_62);
  VAR_82 = VAR_68;
  VAR_78->ah_rf_banks_size = FUNC_2(VAR_68);
  break;
 case 131:
  VAR_81 = VAR_62;
  VAR_78->ah_rf_regs_count = FUNC_2(VAR_62);
  if (VAR_78->ah_mac_srev < VAR_49) {
   VAR_82 = VAR_71;
   VAR_78->ah_rf_banks_size = FUNC_2(VAR_71);
  } else {
   VAR_82 = VAR_70;
   VAR_78->ah_rf_banks_size = FUNC_2(VAR_70);
  }
  break;
 default:
  return -VAR_55;
 }




 if (VAR_78->ah_rf_banks == ((void*)0)) {
  VAR_78->ah_rf_banks = FUNC_7(sizeof(u32) * VAR_78->ah_rf_banks_size,
        VAR_57);
  if (VAR_78->ah_rf_banks == ((void*)0)) {
   FUNC_3(VAR_78, "out of memory\n");
   return -VAR_56;
  }
 }


 VAR_87 = VAR_78->ah_rf_banks;

 for (VAR_88 = 0; VAR_88 < VAR_78->ah_rf_banks_size; VAR_88++) {
  if (VAR_82[VAR_88].rfb_bank >= VAR_6) {
   FUNC_3(VAR_78, "invalid bank\n");
   return -VAR_55;
  }


  if (VAR_90 != VAR_82[VAR_88].rfb_bank) {
   VAR_90 = VAR_82[VAR_88].rfb_bank;
   VAR_78->ah_offset[VAR_90] = VAR_88;
  }

  VAR_87[VAR_88] = VAR_82[VAR_88].rfb_mode_data[VAR_80];
 }


 if (VAR_79->band == VAR_58) {

  if (VAR_79->hw_value == VAR_7)
   VAR_86 = VAR_4;
  else
   VAR_86 = VAR_5;
  if ((VAR_78->ah_radio == 130) ||
  (VAR_78->ah_radio == 129))
   VAR_89 = 0;
  else
   VAR_89 = 1;

  FUNC_6(VAR_78, VAR_81, VAR_85->ee_ob[VAR_86][VAR_89],
      VAR_20, 1);

  FUNC_6(VAR_78, VAR_81, VAR_85->ee_db[VAR_86][VAR_89],
      VAR_11, 1);


 } else if ((VAR_79->band == VAR_59) ||
   (VAR_78->ah_radio == 130)) {



  VAR_86 = VAR_3;
  VAR_89 = VAR_79->center_freq >= 5725 ? 3 :
   (VAR_79->center_freq >= 5500 ? 2 :
   (VAR_79->center_freq >= 5260 ? 1 :
    (VAR_79->center_freq > 4000 ? 0 : -1)));

  if (VAR_89 < 0)
   return -VAR_55;

  FUNC_6(VAR_78, VAR_81, VAR_85->ee_ob[VAR_86][VAR_89],
      VAR_21, 1);

  FUNC_6(VAR_78, VAR_81, VAR_85->ee_db[VAR_86][VAR_89],
      VAR_12, 1);
 }

 VAR_84 = &VAR_83->go_step[VAR_78->ah_gain.g_step_idx];


 if ((VAR_78->ah_bwmode == VAR_1) &&
 (VAR_78->ah_radio != 128))
  FUNC_6(VAR_78, VAR_81, 1, VAR_42, 0);


 if (VAR_78->ah_radio == 130) {


  if (VAR_79->hw_value != VAR_7) {

   FUNC_1(VAR_78, VAR_8,
     VAR_9,
     VAR_84->gos_param[0]);

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[1],
       VAR_38, 1);

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[2],
       VAR_37, 1);

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[3],
      VAR_41, 1);



   VAR_78->ah_gain.g_state = VAR_10;

  }



  FUNC_6(VAR_78, VAR_81, !VAR_85->ee_xpd[VAR_86],
      VAR_40, 1);

  FUNC_6(VAR_78, VAR_81, VAR_85->ee_x_gain[VAR_86],
      VAR_47, 1);

  FUNC_6(VAR_78, VAR_81, VAR_85->ee_i_gain[VAR_86],
      VAR_14, 1);

  FUNC_6(VAR_78, VAR_81, VAR_85->ee_xpd[VAR_86],
      VAR_27, 1);


  if (VAR_78->ah_bwmode == VAR_2 ||
  VAR_78->ah_bwmode == VAR_0) {
   u8 VAR_91;

   FUNC_6(VAR_78, VAR_81, 0x1f,
      VAR_44, 1);

   VAR_91 = (VAR_78->ah_bwmode == VAR_2) ?
       0x1f : 0x10;

   FUNC_6(VAR_78, VAR_81, VAR_91,
      VAR_43, 1);
   FUNC_6(VAR_78, VAR_81, 3,
      VAR_17, 1);

  }
 }

 if (VAR_78->ah_radio == 129) {


  if (VAR_79->hw_value != VAR_7) {

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[0],
      VAR_19, 1);

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[1],
      VAR_34, 1);

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[2],
      VAR_33, 1);

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[3],
      VAR_32, 1);

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[4],
      VAR_31, 1);

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[5],
      VAR_30, 1);

   FUNC_6(VAR_78, VAR_81, VAR_84->gos_param[6],
      VAR_29, 1);



   VAR_78->ah_gain.g_state = VAR_10;
  }



  FUNC_6(VAR_78, VAR_81, VAR_85->ee_xpd[VAR_86],
      VAR_48, 1);

  if (VAR_78->ah_radio_5ghz_revision < VAR_53) {

   FUNC_6(VAR_78, VAR_81,
      VAR_85->ee_x_gain[VAR_86],
      VAR_47, 1);

  } else {
   u8 *VAR_92 = VAR_85->ee_pdc_to_idx[VAR_86];
   if (VAR_85->ee_pd_gains[VAR_86] > 1) {
    FUNC_6(VAR_78, VAR_81,
      VAR_92[0],
      VAR_25, 1);
    FUNC_6(VAR_78, VAR_81,
      VAR_92[1],
      VAR_24, 1);
   } else {
    FUNC_6(VAR_78, VAR_81,
      VAR_92[0],
      VAR_25, 1);
    FUNC_6(VAR_78, VAR_81,
      VAR_92[0],
      VAR_24, 1);
   }


   if (VAR_78->ah_radio == 129 &&
       (VAR_78->ah_radio_5ghz_revision & VAR_54) > 0) {
    FUNC_6(VAR_78, VAR_81, 2,
      VAR_15, 1);

    FUNC_6(VAR_78, VAR_81, 2,
      VAR_18, 1);

    FUNC_6(VAR_78, VAR_81, 2,
      VAR_16, 1);

    FUNC_6(VAR_78, VAR_81, 2,
      VAR_28, 1);
   }


   if (VAR_78->ah_phy_revision >= VAR_52) {
    FUNC_6(VAR_78, VAR_81, 1,
      VAR_22, 1);

    FUNC_6(VAR_78, VAR_81, 1,
      VAR_45, 1);

    FUNC_6(VAR_78, VAR_81, 1,
      VAR_46, 1);

    FUNC_6(VAR_78, VAR_81, 1,
      VAR_36, 1);

    FUNC_6(VAR_78, VAR_81, 1,
      VAR_35, 1);
   }
  }

  FUNC_6(VAR_78, VAR_81, VAR_85->ee_i_gain[VAR_86],
      VAR_14, 1);


  if (VAR_78->ah_bwmode == VAR_2 ||
  VAR_78->ah_bwmode == VAR_0) {
   u8 VAR_93;

   VAR_93 = (VAR_78->ah_bwmode == VAR_2) ?
       0xf : 0x8;

   FUNC_6(VAR_78, VAR_81, VAR_93,
      VAR_26, 1);
   FUNC_6(VAR_78, VAR_81, 0xf,
      VAR_23, 1);

  }
 }

 if (VAR_78->ah_radio == 128 &&
 VAR_79->band == VAR_58) {

  FUNC_6(VAR_78, VAR_81, 1, VAR_13,
         1);


  if (VAR_78->ah_mac_srev >= VAR_51 &&
  VAR_78->ah_mac_srev < VAR_50)
   FUNC_6(VAR_78, VAR_81, FUNC_4(6, 3),
      VAR_39, 1);

 }


 for (VAR_88 = 0; VAR_88 < VAR_78->ah_rf_banks_size; VAR_88++) {
  FUNC_0(VAR_88);
  FUNC_5(VAR_78, VAR_87[VAR_88], VAR_82[VAR_88].rfb_ctrl_register);
 }

 return 0;
}
