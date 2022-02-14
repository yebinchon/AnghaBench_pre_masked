
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* write_reg ) (struct e1000_hw*,scalar_t__,int) ;int (* read_reg ) (struct e1000_hw*,scalar_t__,int*) ;} ;
struct e1000_phy_info {int id; int min_cable_length; int max_cable_length; int cable_length; TYPE_1__ ops; scalar_t__ addr; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 scalar_t__ VAR_9 ;

 void** VAR_10 ;
 int FUNC_0 (struct e1000_hw*,scalar_t__,int*) ;
 int FUNC_1 (struct e1000_hw*,scalar_t__,int*) ;
 int FUNC_2 (struct e1000_hw*,scalar_t__,int) ;
 int FUNC_3 (struct e1000_hw*,scalar_t__,int*) ;
 int FUNC_4 (struct e1000_hw*,scalar_t__,int*) ;
 int FUNC_5 (struct e1000_hw*,scalar_t__,int) ;
 int FUNC_6 (struct e1000_hw*,scalar_t__,int*) ;
 int FUNC_7 (struct e1000_hw*,scalar_t__,int*) ;
 int FUNC_8 (struct e1000_hw*,scalar_t__,int) ;
 int FUNC_9 (struct e1000_hw*,scalar_t__,int*) ;
 int FUNC_10 (struct e1000_hw*,scalar_t__,int) ;

s32 FUNC_11(struct e1000_hw *VAR_11)
{
 struct e1000_phy_info *VAR_12 = &VAR_11->phy;
 s32 VAR_13;
 u16 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 switch (VAR_11->phy.id) {
 case 131:

  VAR_13 = VAR_12->ops.read_reg(VAR_11, (0x7 << VAR_1) +
         (VAR_5 + VAR_12->addr),
         &VAR_14);
  if (VAR_13)
   return VAR_13;


  VAR_13 = VAR_12->ops.read_reg(VAR_11, (0x7 << VAR_1) +
         VAR_3, &VAR_15);
  if (VAR_13)
   return VAR_13;

  VAR_18 = !(VAR_15 & VAR_4);


  VAR_12->min_cable_length = VAR_14 / (VAR_18 ? 100 : 1);
  VAR_12->max_cable_length = VAR_14 / (VAR_18 ? 100 : 1);
  VAR_12->cable_length = VAR_14 / (VAR_18 ? 100 : 1);
  break;
 case 128:
 case 130:

  VAR_13 = VAR_12->ops.read_reg(VAR_11, VAR_2,
         &VAR_17);
  if (VAR_13)
   goto out;

  VAR_13 = VAR_12->ops.write_reg(VAR_11, VAR_2, 0x07);
  if (VAR_13)
   goto out;


  VAR_13 = VAR_12->ops.read_reg(VAR_11, (VAR_5 + VAR_12->addr),
         &VAR_14);
  if (VAR_13)
   goto out;


  VAR_13 = VAR_12->ops.read_reg(VAR_11, VAR_3, &VAR_15);
  if (VAR_13)
   goto out;

  VAR_18 = !(VAR_15 & VAR_4);


  VAR_12->min_cable_length = VAR_14 / (VAR_18 ? 100 : 1);
  VAR_12->max_cable_length = VAR_14 / (VAR_18 ? 100 : 1);
  VAR_12->cable_length = VAR_14 / (VAR_18 ? 100 : 1);


  VAR_13 = VAR_12->ops.write_reg(VAR_11, VAR_2,
          VAR_17);
  if (VAR_13)
   goto out;
  break;
 case 129:

  VAR_13 = VAR_12->ops.read_reg(VAR_11, VAR_2,
         &VAR_17);
  if (VAR_13)
   goto out;

  VAR_13 = VAR_12->ops.write_reg(VAR_11, VAR_2, 0x05);
  if (VAR_13)
   goto out;

  VAR_13 = VAR_12->ops.read_reg(VAR_11, VAR_9,
         &VAR_14);
  if (VAR_13)
   goto out;

  VAR_16 = (VAR_14 & VAR_7) >>
   VAR_8;
  if (VAR_16 >= VAR_6 - 1) {
   VAR_13 = -VAR_0;
   goto out;
  }

  VAR_12->min_cable_length = VAR_10[VAR_16];
  VAR_12->max_cable_length = VAR_10[VAR_16 + 1];

  VAR_12->cable_length = (VAR_12->min_cable_length +
         VAR_12->max_cable_length) / 2;


  VAR_13 = VAR_12->ops.write_reg(VAR_11, VAR_2,
          VAR_17);
  if (VAR_13)
   goto out;

  break;
 default:
  VAR_13 = -VAR_0;
  goto out;
 }

out:
 return VAR_13;
}
