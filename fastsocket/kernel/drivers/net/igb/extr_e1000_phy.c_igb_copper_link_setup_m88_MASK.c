
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int mdix; int disable_polarity_correction; scalar_t__ revision; scalar_t__ id; scalar_t__ type; TYPE_1__ ops; scalar_t__ reset_disable; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int) ;

s32 FUNC_7(struct e1000_hw *VAR_19)
{
 struct e1000_phy_info *VAR_20 = &VAR_19->phy;
 s32 VAR_21;
 u16 VAR_22;

 if (VAR_20->reset_disable) {
  VAR_21 = 0;
  goto out;
 }


 VAR_21 = VAR_20->ops.read_reg(VAR_19, VAR_8, &VAR_22);
 if (VAR_21)
  goto out;

 VAR_22 |= VAR_9;
 VAR_22 &= ~VAR_11;

 switch (VAR_20->mdix) {
 case 1:
  VAR_22 |= VAR_13;
  break;
 case 2:
  VAR_22 |= VAR_12;
  break;
 case 3:
  VAR_22 |= VAR_10;
  break;
 case 0:
 default:
  VAR_22 |= VAR_11;
  break;
 }







 VAR_22 &= ~VAR_14;
 if (VAR_20->disable_polarity_correction == 1)
  VAR_22 |= VAR_14;

 VAR_21 = VAR_20->ops.write_reg(VAR_19, VAR_8, VAR_22);
 if (VAR_21)
  goto out;

 if (VAR_20->revision < VAR_1) {



  VAR_21 = VAR_20->ops.read_reg(VAR_19, VAR_7,
         &VAR_22);
  if (VAR_21)
   goto out;

  VAR_22 |= VAR_6;

  if ((VAR_20->revision == VAR_0) &&
      (VAR_20->id == VAR_15)) {

   VAR_22 &= ~VAR_17;
   VAR_22 |= VAR_16;
  } else {

   VAR_22 &= ~(VAR_3 |
          VAR_5);
   VAR_22 |= (VAR_2 |
         VAR_4);
  }
  VAR_21 = VAR_20->ops.write_reg(VAR_19, VAR_7,
          VAR_22);
  if (VAR_21)
   goto out;
 }


 VAR_21 = FUNC_1(VAR_19);
 if (VAR_21) {
  FUNC_0("Error committing the PHY changes\n");
  goto out;
 }
 if (VAR_20->type == VAR_18) {
  VAR_21 = FUNC_2(VAR_19);
  if (VAR_21)
   return VAR_21;
 }

out:
 return VAR_21;
}
