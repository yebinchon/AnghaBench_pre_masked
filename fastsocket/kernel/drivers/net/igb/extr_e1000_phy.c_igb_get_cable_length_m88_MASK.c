
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int min_cable_length; int max_cable_length; int cable_length; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void** VAR_5 ;
 int FUNC_0 (struct e1000_hw*,int ,int*) ;

s32 FUNC_1(struct e1000_hw *VAR_6)
{
 struct e1000_phy_info *VAR_7 = &VAR_6->phy;
 s32 VAR_8;
 u16 VAR_9, VAR_10;

 VAR_8 = VAR_7->ops.read_reg(VAR_6, VAR_2, &VAR_9);
 if (VAR_8)
  goto out;

 VAR_10 = (VAR_9 & VAR_3) >>
  VAR_4;
 if (VAR_10 >= VAR_1 - 1) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7->min_cable_length = VAR_5[VAR_10];
 VAR_7->max_cable_length = VAR_5[VAR_10 + 1];

 VAR_7->cable_length = (VAR_7->min_cable_length + VAR_7->max_cable_length) / 2;

out:
 return VAR_8;
}
