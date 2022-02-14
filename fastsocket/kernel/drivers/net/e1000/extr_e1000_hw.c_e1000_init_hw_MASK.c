
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int mac_type; int pci_cmd_word; scalar_t__ device_id; int bus_type; scalar_t__ dma_fairness; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*,int ,scalar_t__,int ) ;
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
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*,int) ;
 int FUNC_10 (struct e1000_hw*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int) ;

s32 FUNC_16(struct e1000_hw *VAR_19)
{
 u32 VAR_20;
 u32 VAR_21;
 s32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;

 FUNC_12("e1000_init_hw");


 VAR_22 = FUNC_4(VAR_19);
 if (VAR_22) {
  FUNC_12("Error Initializing Identification LED\n");
  return VAR_22;
 }


 FUNC_10(VAR_19);


 FUNC_12("Initializing the IEEE VLAN\n");
 if (VAR_19->mac_type < 129)
  FUNC_14(VAR_14, 0);
 FUNC_3(VAR_19);


 if (VAR_19->mac_type == VAR_15) {
  FUNC_12("Disabling MWI on 82542 rev 2.0\n");
  FUNC_6(VAR_19);
  FUNC_14(VAR_12, VAR_7);
  FUNC_0();
  FUNC_15(5);
 }




 FUNC_5(VAR_19);


 if (VAR_19->mac_type == VAR_15) {
  FUNC_14(VAR_12, 0);
  FUNC_0();
  FUNC_15(1);
  if (VAR_19->pci_cmd_word & VAR_11)
   FUNC_7(VAR_19);
 }


 FUNC_12("Zeroing the MTA\n");
 VAR_23 = VAR_6;
 for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
  FUNC_1(VAR_19, VAR_10, VAR_21, 0);


  FUNC_0();
 }






 if (VAR_19->dma_fairness && VAR_19->mac_type <= VAR_16) {
  VAR_20 = FUNC_13(VAR_0);
  FUNC_14(VAR_0, VAR_20 | VAR_3);
 }

 switch (VAR_19->mac_type) {
 case 129:
 case 128:
  break;
 default:

  if (VAR_19->bus_type == VAR_18
      && FUNC_8(VAR_19) > 2048)
   FUNC_9(VAR_19, 2048);
  break;
 }


 VAR_22 = FUNC_11(VAR_19);


 if (VAR_19->mac_type > VAR_17) {
  VAR_20 = FUNC_13(VAR_13);
  VAR_20 =
      (VAR_20 & ~VAR_9) |
      VAR_8;
  FUNC_14(VAR_13, VAR_20);
 }






 FUNC_2(VAR_19);

 if (VAR_19->device_id == VAR_4 ||
     VAR_19->device_id == VAR_5) {
  VAR_24 = FUNC_13(VAR_1);


  VAR_24 |= VAR_2;
  FUNC_14(VAR_1, VAR_24);
 }

 return VAR_22;
}
