
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* set_d0_lplu_state ) (struct e1000_hw*,int) ;} ;
struct e1000_phy_info {int mdix; scalar_t__ autoneg_advertised; TYPE_1__ ops; } ;
struct TYPE_4__ {scalar_t__ autoneg; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int) ;

s32 FUNC_7(struct e1000_hw *VAR_8)
{
 struct e1000_phy_info *VAR_9 = &VAR_8->phy;
 s32 VAR_10;
 u16 VAR_11;

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10) {
  FUNC_4("Error resetting the PHY.\n");
  return VAR_10;
 }




 FUNC_5(100);


 if (VAR_8->phy.ops.set_d0_lplu_state) {
  VAR_10 = VAR_8->phy.ops.set_d0_lplu_state(VAR_8, 0);
  if (VAR_10) {
   FUNC_4("Error Disabling LPLU D0\n");
   return VAR_10;
  }
 }

 VAR_10 = FUNC_2(VAR_8, VAR_3, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_11 &= ~VAR_5;

 switch (VAR_9->mdix) {
 case 1:
  VAR_11 &= ~VAR_6;
  break;
 case 2:
  VAR_11 |= VAR_6;
  break;
 case 0:
 default:
  VAR_11 |= VAR_5;
  break;
 }
 VAR_10 = FUNC_3(VAR_8, VAR_3, VAR_11);
 if (VAR_10)
  return VAR_10;


 if (VAR_8->mac.autoneg) {




  if (VAR_9->autoneg_advertised == VAR_0) {

   VAR_10 = FUNC_2(VAR_8, VAR_2,
        &VAR_11);
   if (VAR_10)
    return VAR_10;

   VAR_11 &= ~VAR_4;
   VAR_10 = FUNC_3(VAR_8, VAR_2,
        VAR_11);
   if (VAR_10)
    return VAR_10;


   VAR_10 = FUNC_2(VAR_8, VAR_7, &VAR_11);
   if (VAR_10)
    return VAR_10;

   VAR_11 &= ~VAR_1;
   VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_11);
   if (VAR_10)
    return VAR_10;
  }

  VAR_10 = FUNC_1(VAR_8);
 }

 return VAR_10;
}
