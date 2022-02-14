
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int mac_type; int tbi_compatibility_on; int pci_cmd_word; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
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
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

s32 FUNC_11(struct e1000_hw *VAR_19)
{
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 s32 VAR_25;

 FUNC_6("e1000_reset_hw");


 if (VAR_19->mac_type == 138) {
  FUNC_6("Disabling MWI on 82542 rev 2.0\n");
  FUNC_3(VAR_19);
 }


 FUNC_6("Masking off all interrupts\n");
 FUNC_8(VAR_13, 0xffffffff);





 FUNC_8(VAR_17, 0);
 FUNC_8(VAR_18, VAR_8);
 FUNC_0();


 VAR_19->tbi_compatibility_on = 0;




 FUNC_9(10);

 VAR_20 = FUNC_7(VAR_0);


 if ((VAR_19->mac_type == 140) || (VAR_19->mac_type == 130)) {
  FUNC_8(VAR_0, (VAR_20 | VAR_4));
  FUNC_0();
  FUNC_9(5);
 }






 FUNC_6("Issuing a global reset to MAC\n");

 switch (VAR_19->mac_type) {
 case 135:
 case 141:
 case 134:
 case 132:
 case 140:
 case 139:


  FUNC_1(VAR_19, VAR_0, (VAR_20 | VAR_5));
  break;
 case 133:
 case 131:

  FUNC_8(VAR_1, (VAR_20 | VAR_5));
  break;
 case 128:
 default:
  FUNC_8(VAR_0, (VAR_20 | VAR_5));
  break;
 }





 switch (VAR_19->mac_type) {
 case 138:
 case 137:
 case 136:
 case 135:

  FUNC_10(10);
  VAR_21 = FUNC_7(VAR_2);
  VAR_21 |= VAR_3;
  FUNC_8(VAR_2, VAR_21);
  FUNC_0();

  FUNC_9(2);
  break;
 case 140:
 case 139:
 case 130:
 case 129:

  FUNC_9(20);
  break;
 default:

  VAR_25 = FUNC_2(VAR_19);
  if (VAR_25)
   return VAR_25;
  break;
 }


 if (VAR_19->mac_type >= 141) {
  VAR_23 = FUNC_7(VAR_15);
  VAR_23 &= ~(VAR_6);
  FUNC_8(VAR_15, VAR_23);
 }

 if ((VAR_19->mac_type == 140) || (VAR_19->mac_type == 130)) {
  FUNC_5(VAR_19);


  VAR_24 = FUNC_7(VAR_14);
  VAR_24 &= VAR_11;
  VAR_24 |= (VAR_10 | VAR_12);
  FUNC_8(VAR_14, VAR_24);
 }


 FUNC_6("Masking off all interrupts\n");
 FUNC_8(VAR_13, 0xffffffff);


 VAR_22 = FUNC_7(VAR_9);


 if (VAR_19->mac_type == 138) {
  if (VAR_19->pci_cmd_word & VAR_16)
   FUNC_4(VAR_19);
 }

 return VAR_7;
}
