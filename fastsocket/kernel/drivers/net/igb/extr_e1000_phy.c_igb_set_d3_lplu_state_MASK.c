
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {scalar_t__ smart_speed; scalar_t__ autoneg_advertised; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int ) ;

s32 FUNC_9(struct e1000_hw *VAR_9, bool VAR_10)
{
 struct e1000_phy_info *VAR_11 = &VAR_9->phy;
 s32 VAR_12 = 0;
 u16 VAR_13;

 if (!(VAR_9->phy.ops.read_reg))
  goto out;

 VAR_12 = VAR_11->ops.read_reg(VAR_9, VAR_5, &VAR_13);
 if (VAR_12)
  goto out;

 if (!VAR_10) {
  VAR_13 &= ~VAR_6;
  VAR_12 = VAR_11->ops.write_reg(VAR_9, VAR_5,
          VAR_13);
  if (VAR_12)
   goto out;





  if (VAR_11->smart_speed == VAR_8) {
   VAR_12 = VAR_11->ops.read_reg(VAR_9,
          VAR_3,
          &VAR_13);
   if (VAR_12)
    goto out;

   VAR_13 |= VAR_4;
   VAR_12 = VAR_11->ops.write_reg(VAR_9,
           VAR_3,
           VAR_13);
   if (VAR_12)
    goto out;
  } else if (VAR_11->smart_speed == VAR_7) {
   VAR_12 = VAR_11->ops.read_reg(VAR_9,
           VAR_3,
           &VAR_13);
   if (VAR_12)
    goto out;

   VAR_13 &= ~VAR_4;
   VAR_12 = VAR_11->ops.write_reg(VAR_9,
           VAR_3,
           VAR_13);
   if (VAR_12)
    goto out;
  }
 } else if ((VAR_11->autoneg_advertised == VAR_2) ||
     (VAR_11->autoneg_advertised == VAR_1) ||
     (VAR_11->autoneg_advertised == VAR_0)) {
  VAR_13 |= VAR_6;
  VAR_12 = VAR_11->ops.write_reg(VAR_9, VAR_5,
           VAR_13);
  if (VAR_12)
   goto out;


  VAR_12 = VAR_11->ops.read_reg(VAR_9, VAR_3,
         &VAR_13);
  if (VAR_12)
   goto out;

  VAR_13 &= ~VAR_4;
  VAR_12 = VAR_11->ops.write_reg(VAR_9, VAR_3,
          VAR_13);
 }

out:
 return VAR_12;
}
