
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {scalar_t__ mac_type; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

s32 FUNC_7(struct e1000_hw *VAR_12)
{
 u32 VAR_13, VAR_14;
 u32 VAR_15;

 FUNC_2("e1000_phy_hw_reset");

 FUNC_2("Resetting Phy...\n");

 if (VAR_12->mac_type > VAR_10) {





  VAR_13 = FUNC_3(VAR_0);
  FUNC_4(VAR_0, VAR_13 | VAR_4);
  FUNC_0();

  FUNC_5(10);

  FUNC_4(VAR_0, VAR_13);
  FUNC_0();

 } else {



  VAR_14 = FUNC_3(VAR_1);
  VAR_14 |= VAR_3;
  VAR_14 &= ~VAR_2;
  FUNC_4(VAR_1, VAR_14);
  FUNC_0();
  FUNC_5(10);
  VAR_14 |= VAR_2;
  FUNC_4(VAR_1, VAR_14);
  FUNC_0();
 }
 FUNC_6(150);

 if ((VAR_12->mac_type == VAR_9) || (VAR_12->mac_type == VAR_11)) {

  VAR_15 = FUNC_3(VAR_8);
  VAR_15 &= VAR_6;
  VAR_15 |= (VAR_5 | VAR_7);
  FUNC_4(VAR_8, VAR_15);
 }


 return FUNC_1(VAR_12);
}
