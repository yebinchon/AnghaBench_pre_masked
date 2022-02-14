
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;scalar_t__ (* set_d0_lplu_state ) (struct e1000_hw*,int) ;scalar_t__ (* set_d3_lplu_state ) (struct e1000_hw*,int) ;scalar_t__ (* reset ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {scalar_t__ type; int mdix; scalar_t__ autoneg_advertised; int original_ms_type; int ms_type; TYPE_2__ ops; scalar_t__ reset_disable; } ;
struct TYPE_3__ {scalar_t__ autoneg; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*,int ,int) ;

s32 FUNC_13(struct e1000_hw *VAR_10)
{
 struct e1000_phy_info *VAR_11 = &VAR_10->phy;
 s32 VAR_12;
 u16 VAR_13;

 if (VAR_11->reset_disable) {
  VAR_12 = 0;
  goto out;
 }

 VAR_12 = VAR_11->ops.reset(VAR_10);
 if (VAR_12) {
  FUNC_0("Error resetting the PHY.\n");
  goto out;
 }




 FUNC_1(100);




 if (VAR_11->type == VAR_9) {

  if (VAR_11->ops.set_d3_lplu_state)
   VAR_12 = VAR_11->ops.set_d3_lplu_state(VAR_10, 0);
  if (VAR_12) {
   FUNC_0("Error Disabling LPLU D3\n");
   goto out;
  }
 }


 VAR_12 = VAR_11->ops.set_d0_lplu_state(VAR_10, 0);
 if (VAR_12) {
  FUNC_0("Error Disabling LPLU D0\n");
  goto out;
 }

 VAR_12 = VAR_11->ops.read_reg(VAR_10, VAR_4, &VAR_13);
 if (VAR_12)
  goto out;

 VAR_13 &= ~VAR_6;

 switch (VAR_11->mdix) {
 case 1:
  VAR_13 &= ~VAR_7;
  break;
 case 2:
  VAR_13 |= VAR_7;
  break;
 case 0:
 default:
  VAR_13 |= VAR_6;
  break;
 }
 VAR_12 = VAR_11->ops.write_reg(VAR_10, VAR_4, VAR_13);
 if (VAR_12)
  goto out;


 if (VAR_10->mac.autoneg) {




  if (VAR_11->autoneg_advertised == VAR_0) {

   VAR_12 = VAR_11->ops.read_reg(VAR_10,
          VAR_3,
          &VAR_13);
   if (VAR_12)
    goto out;

   VAR_13 &= ~VAR_5;
   VAR_12 = VAR_11->ops.write_reg(VAR_10,
           VAR_3,
           VAR_13);
   if (VAR_12)
    goto out;


   VAR_12 = VAR_11->ops.read_reg(VAR_10, VAR_8, &VAR_13);
   if (VAR_12)
    goto out;

   VAR_13 &= ~VAR_1;
   VAR_12 = VAR_11->ops.write_reg(VAR_10, VAR_8, VAR_13);
   if (VAR_12)
    goto out;
  }

  VAR_12 = VAR_11->ops.read_reg(VAR_10, VAR_8, &VAR_13);
  if (VAR_12)
   goto out;


  VAR_11->original_ms_type = (VAR_13 & VAR_1) ?
   ((VAR_13 & VAR_2) ?
   129 :
   128) :
   130;

  switch (VAR_11->ms_type) {
  case 129:
   VAR_13 |= (VAR_1 | VAR_2);
   break;
  case 128:
   VAR_13 |= VAR_1;
   VAR_13 &= ~(VAR_2);
   break;
  case 130:
   VAR_13 &= ~VAR_1;
  default:
   break;
  }
  VAR_12 = VAR_11->ops.write_reg(VAR_10, VAR_8, VAR_13);
  if (VAR_12)
   goto out;
 }

out:
 return VAR_12;
}
