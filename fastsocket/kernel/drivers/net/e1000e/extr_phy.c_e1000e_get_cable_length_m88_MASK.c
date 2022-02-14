
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {int min_cable_length; int max_cable_length; int cable_length; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void** VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;

s32 FUNC_1(struct e1000_hw *VAR_6)
{
 struct e1000_phy_info *VAR_7 = &VAR_6->phy;
 s32 VAR_8;
 u16 VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_6, VAR_2, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_10 = ((VAR_9 & VAR_3) >>
   VAR_4);

 if (VAR_10 >= VAR_1 - 1)
  return -VAR_0;

 VAR_7->min_cable_length = VAR_5[VAR_10];
 VAR_7->max_cable_length = VAR_5[VAR_10 + 1];

 VAR_7->cable_length = (VAR_7->min_cable_length + VAR_7->max_cable_length) / 2;

 return 0;
}
