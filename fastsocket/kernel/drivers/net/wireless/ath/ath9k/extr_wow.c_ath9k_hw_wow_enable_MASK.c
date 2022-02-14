
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pcie_waen; } ;
struct ath_hw {int wow_event_mask; TYPE_1__ config; scalar_t__ is_pciexpress; } ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
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
 int FUNC_9 (int ) ;
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
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_12 (struct ath_hw*,int ,int) ;
 int FUNC_13 (struct ath_hw*,int ,int,int) ;
 int FUNC_14 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_15 (struct ath_hw*,int ,int) ;
 int FUNC_16 (struct ath_hw*,int ,int) ;
 int FUNC_17 (struct ath_hw*) ;
 int FUNC_18 (struct ath_hw*) ;
 int FUNC_19 (struct ath_hw*) ;

void FUNC_20(struct ath_hw *VAR_51, u32 VAR_52)
{
 u32 VAR_53;
 u32 VAR_54, VAR_55;
 VAR_53 = VAR_51->wow_event_mask;







 if (VAR_51->is_pciexpress) {







  if (FUNC_4(VAR_51)) {
   VAR_54 = VAR_22 | VAR_21;
   VAR_55 = VAR_23 | VAR_20;
   FUNC_13(VAR_51, VAR_19, VAR_54, VAR_55);
  } else {
   if (FUNC_1(VAR_51) || FUNC_3(VAR_51))
    VAR_54 = VAR_4;
   else
    VAR_54 = VAR_3;
   if (VAR_51->config.pcie_waen & VAR_20)
    VAR_54 |= VAR_20;

   VAR_55 = VAR_23;
   VAR_54 |= VAR_22 | VAR_21;
   FUNC_13(VAR_51, VAR_19, VAR_54, VAR_55);
   if (FUNC_2(VAR_51))
    FUNC_17(VAR_51);

  }
 }




 VAR_54 = VAR_10 | VAR_11 |
       VAR_9 | VAR_14;





 FUNC_15(VAR_51, VAR_6, VAR_54);
 VAR_55 = VAR_14;
 FUNC_12(VAR_51, VAR_6, VAR_55);
 VAR_54 = FUNC_8(VAR_48);
 FUNC_15(VAR_51, VAR_45, VAR_54);

 VAR_54 = FUNC_7(VAR_31) |
       FUNC_10(VAR_33) |
       FUNC_9(VAR_32);
 FUNC_15(VAR_51, VAR_34, VAR_54);

 if (VAR_52 & VAR_0)
  VAR_54 = VAR_28;

 else
  VAR_54 = VAR_29;

 FUNC_16(VAR_51, VAR_25, VAR_54);




 if (!VAR_52 || FUNC_0(VAR_51))
  VAR_54 = VAR_40;
 else
  VAR_54 = VAR_50 * 32;

 FUNC_16(VAR_51, VAR_41, VAR_54);





 VAR_54 = VAR_49 * 1000;
 FUNC_16(VAR_51, VAR_37, VAR_54);




 FUNC_19(VAR_51);





 VAR_54 = 0;

 VAR_55 = VAR_36;

 if (VAR_52 & VAR_1)
  VAR_53 |= VAR_38;
 else
  VAR_54 = VAR_39;






 VAR_54 = VAR_39;

 FUNC_13(VAR_51, VAR_35, VAR_54, VAR_55);






 FUNC_14(VAR_51, VAR_15, VAR_16,
        VAR_30);

 VAR_54 = 0;
 VAR_55 = 0;

 if (VAR_52 & VAR_0) {
  VAR_54 = VAR_27;
  VAR_53 |= VAR_26;
 } else {
  VAR_55 = VAR_27;
 }

 FUNC_13(VAR_51, VAR_24, VAR_54, VAR_55);

 VAR_54 = 0;
 VAR_55 = 0;



 if (VAR_52 & VAR_2) {
  VAR_54 = VAR_43;
  VAR_53 |= VAR_44;
 } else {
  VAR_55 = VAR_43;
 }
 VAR_54 |= VAR_42;
 FUNC_13(VAR_51, VAR_45, VAR_54, VAR_55);






 if (FUNC_2(VAR_51))
  FUNC_16(VAR_51, VAR_46,
     VAR_47);




 VAR_55 = 0;
 VAR_54 = VAR_12 | VAR_10 |
       VAR_11;




 if (FUNC_4(VAR_51))
  VAR_55 = VAR_7;

 FUNC_13(VAR_51, VAR_6, VAR_54, VAR_55);

 if (FUNC_5(VAR_51) || FUNC_6(VAR_51)) {
  VAR_55 = VAR_12;
  FUNC_12(VAR_51, VAR_6, VAR_55);

  VAR_54 = VAR_13;
  FUNC_15(VAR_51, VAR_6, VAR_54);
 }



 FUNC_12(VAR_51, VAR_17, VAR_18);

 if (FUNC_4(VAR_51)) {

  VAR_54 = FUNC_11(13);
  FUNC_15(VAR_51, VAR_5, VAR_54);

  VAR_55 = FUNC_11(5);
  FUNC_12(VAR_51, VAR_8, VAR_55);
 }

 FUNC_18(VAR_51);
 VAR_51->wow_event_mask = VAR_53;
}
