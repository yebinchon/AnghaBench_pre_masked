
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {int center_freq; scalar_t__ band; } ;
struct ath5k_hw {scalar_t__ ah_version; scalar_t__ ah_phy_revision; scalar_t__ ah_radio; int ah_mac_version; scalar_t__ ah_radio_5ghz_revision; scalar_t__ ah_mac_srev; scalar_t__ ah_bwmode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ath5k_hw*,int ,int ,int) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 int FUNC_4 (struct ath5k_hw*,int ) ;
 int FUNC_5 (struct ath5k_hw*,int,int ) ;

__attribute__((used)) static void
FUNC_6(struct ath5k_hw *VAR_46,
    struct ieee80211_channel *VAR_47)
{
 if (VAR_46->ah_version == VAR_2 &&
     VAR_46->ah_phy_revision >= VAR_39) {


  FUNC_5(VAR_46,
    (FUNC_2(2,
    VAR_7) |
    FUNC_2(2,
    VAR_8) |
    VAR_10 |
    VAR_9),
    VAR_6);




  FUNC_0(VAR_46, VAR_14,
    VAR_15);

  FUNC_3(VAR_46, VAR_14,
   VAR_16, 2);


  FUNC_5(VAR_46, 0x0000000f, VAR_34);
 }


 if (VAR_46->ah_phy_revision >= VAR_40)
  FUNC_5(VAR_46, 0, VAR_11);


 if (VAR_46->ah_phy_revision > VAR_40)
  FUNC_0(VAR_46, VAR_43,
    VAR_44);


 if ((VAR_46->ah_radio == VAR_33) ||
  (VAR_46->ah_radio == VAR_31) ||
  (VAR_46->ah_mac_version == (VAR_35 >> 4))) {
  u32 VAR_48 = 1;

  if (VAR_47->center_freq == 2462 ||
  VAR_47->center_freq == 2467)
   VAR_48 = 0;


  if (FUNC_4(VAR_46, VAR_17) != VAR_48)
    FUNC_5(VAR_46, VAR_48,
      VAR_17);
 }


 if (VAR_46->ah_radio == VAR_32 &&
   VAR_46->ah_radio_5ghz_revision <
   VAR_41) {
  u32 VAR_49;
  FUNC_5(VAR_46, VAR_13,
    VAR_12);
  if (VAR_47->band == VAR_45)
   VAR_49 = 0xffb81020;
  else
   VAR_49 = 0xffb80d20;
  FUNC_5(VAR_46, VAR_49, VAR_18);
 }

 if (VAR_46->ah_mac_srev < VAR_36) {

  FUNC_5(VAR_46, 0, VAR_30);

  FUNC_5(VAR_46, VAR_24,
      VAR_23);

  FUNC_1(VAR_46, VAR_4,
     VAR_5);
 }

 if (VAR_46->ah_bwmode) {



  if (VAR_46->ah_bwmode == VAR_3) {

   FUNC_3(VAR_46, VAR_25,
      VAR_26,
      VAR_0);




   if (VAR_46->ah_version == VAR_2)
    FUNC_3(VAR_46, VAR_25,
      VAR_27,
      VAR_42);

   if (VAR_46->ah_version == VAR_1) {

    FUNC_5(VAR_46,
     (VAR_21 |
     VAR_28 |
     VAR_29 | 0x2020),
     VAR_19);
   }

  } else if ((VAR_46->ah_mac_srev >= VAR_38) &&
  (VAR_46->ah_mac_srev <= VAR_37)) {
   FUNC_3(VAR_46, VAR_20,
      VAR_22,
      3);
  }
 } else if (VAR_46->ah_version == VAR_1) {

  FUNC_5(VAR_46, (VAR_21 | 0x1020),
      VAR_19);
 }
}
