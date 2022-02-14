
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_mac_info {int autoneg_failed; int txcw; int serdes_has_link; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


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
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

s32 FUNC_4(struct e1000_hw *VAR_10)
{
 struct e1000_mac_info *VAR_11 = &VAR_10->mac;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 s32 VAR_15;

 VAR_13 = FUNC_2(VAR_0);
 VAR_14 = FUNC_2(VAR_8);
 VAR_12 = FUNC_2(VAR_7);
 if ((VAR_13 & VAR_3) && !(VAR_14 & VAR_5) &&
     !(VAR_12 & VAR_4)) {
  if (!VAR_11->autoneg_failed) {
   VAR_11->autoneg_failed = 1;
   return 0;
  }
  FUNC_1("NOT Rx'ing /C/, disable AutoNeg and force link.\n");


  FUNC_3(VAR_9, (VAR_11->txcw & ~VAR_6));


  VAR_13 = FUNC_2(VAR_0);
  VAR_13 |= (VAR_2 | VAR_1);
  FUNC_3(VAR_0, VAR_13);


  VAR_15 = FUNC_0(VAR_10);
  if (VAR_15) {
   FUNC_1("Error configuring flow control\n");
   return VAR_15;
  }
 } else if ((VAR_13 & VAR_2) && (VAR_12 & VAR_4)) {





  FUNC_1("Rx'ing /C/, enable AutoNeg and stop forcing link.\n");
  FUNC_3(VAR_9, VAR_11->txcw);
  FUNC_3(VAR_0, (VAR_13 & ~VAR_2));

  VAR_11->serdes_has_link = 1;
 }

 return 0;
}
