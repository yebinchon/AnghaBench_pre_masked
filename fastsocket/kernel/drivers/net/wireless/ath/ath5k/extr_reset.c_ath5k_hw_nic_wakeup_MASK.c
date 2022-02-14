
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ieee80211_channel {scalar_t__ band; scalar_t__ hw_value; } ;
struct ath5k_hw {scalar_t__ ah_version; scalar_t__ ah_radio; scalar_t__ ah_bwmode; struct pci_dev* pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_0 (struct ath5k_hw*,char*) ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*,int) ;
 int FUNC_3 (struct ath5k_hw*,int ) ;
 int FUNC_4 (struct ath5k_hw*,int,int ) ;
 int FUNC_5 (struct ath5k_hw*,int ,int,int ) ;
 int FUNC_6 (struct ath5k_hw*,int) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int,int) ;

int
FUNC_9(struct ath5k_hw *VAR_43, struct ieee80211_channel *VAR_44)
{
 struct pci_dev *VAR_45 = VAR_43->pdev;
 u32 VAR_46, VAR_47, VAR_48, VAR_49;
 int VAR_50;

 VAR_46 = 0;
 VAR_47 = 0;
 VAR_48 = 0;

 if ((FUNC_1(VAR_43) != VAR_38) || VAR_44) {

  VAR_50 = FUNC_5(VAR_43, VAR_28, 1, 0);
  if (VAR_50) {
   FUNC_0(VAR_43, "failed to wakeup the MAC Chip\n");
   return VAR_50;
  }
 }
 VAR_49 = (VAR_45 && FUNC_7(VAR_45)) ? 0 : VAR_32;

 if (VAR_43->ah_version == VAR_0) {
  VAR_50 = FUNC_2(VAR_43, VAR_33 |
   VAR_31 | VAR_30 |
   VAR_34 | VAR_32);
   FUNC_8(2000, 2500);
 } else {
  if (FUNC_1(VAR_43) == VAR_38)
   VAR_50 = FUNC_6(VAR_43, VAR_33 |
    VAR_29);
  else
   VAR_50 = FUNC_2(VAR_43, VAR_33 |
    VAR_29 | VAR_49);
 }

 if (VAR_50) {
  FUNC_0(VAR_43, "failed to reset the MAC Chip\n");
  return -VAR_40;
 }


 VAR_50 = FUNC_5(VAR_43, VAR_28, 1, 0);
 if (VAR_50) {
  FUNC_0(VAR_43, "failed to resume the MAC Chip\n");
  return VAR_50;
 }




 if (FUNC_1(VAR_43) == VAR_38)
  VAR_50 = FUNC_6(VAR_43, 0);
 else
  VAR_50 = FUNC_2(VAR_43, 0);

 if (VAR_50) {
  FUNC_0(VAR_43, "failed to warm reset the MAC Chip\n");
  return -VAR_40;
 }



 if (!VAR_44)
  return 0;

 if (VAR_43->ah_version != VAR_0) {




  if (VAR_43->ah_radio >= VAR_36) {
   VAR_47 = VAR_16;
   VAR_48 = VAR_24;
  } else {
   VAR_47 = VAR_15;
   VAR_48 = VAR_23;
  }

  if (VAR_44->band == VAR_41) {
   VAR_47 |= VAR_8;
   VAR_48 |= VAR_20;

   if (VAR_44->hw_value == VAR_6) {
    VAR_47 |= VAR_11;
   } else {







    if (VAR_43->ah_version == VAR_1)
     VAR_47 |= VAR_13;
    else
     VAR_47 |= VAR_12;
   }
  } else if (VAR_44->band == VAR_42) {
   VAR_47 |= (VAR_9 |
     VAR_13);


   if (VAR_43->ah_radio == VAR_37)
    VAR_48 = VAR_19;
   else
    VAR_48 |= VAR_18;
  } else {
   FUNC_0(VAR_43, "invalid radio frequency mode\n");
   return -VAR_39;
  }




  if (VAR_43->ah_bwmode == VAR_4) {
   VAR_46 = VAR_26;
   if (VAR_43->ah_radio != VAR_35)
    VAR_46 |= VAR_27;
  } else if (VAR_43->ah_bwmode != VAR_5) {
   if (VAR_43->ah_radio == VAR_37) {
    VAR_47 |= (VAR_43->ah_bwmode == VAR_3) ?
     VAR_10 :
     VAR_14;
   } else if (VAR_43->ah_version == VAR_2) {
    VAR_48 |= (VAR_43->ah_bwmode == VAR_3) ?
     VAR_21 :
     VAR_22;
   }
  }

 } else {


  if (VAR_43->ah_bwmode == VAR_4)
   FUNC_4(VAR_43, VAR_26,
     VAR_25);
 }

 if (VAR_43->ah_version != VAR_0) {


  if (FUNC_3(VAR_43, VAR_17) != VAR_48) {
   FUNC_4(VAR_43, VAR_48, VAR_17);
   FUNC_8(300, 350);
  }


  FUNC_4(VAR_43, VAR_47, VAR_7);
  FUNC_4(VAR_43, VAR_46, VAR_25);
 }

 return 0;
}
