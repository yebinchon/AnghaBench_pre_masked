
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
 void** VAR_4 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_5)
{
 struct e1000_phy_info *VAR_6 = &VAR_5->phy;
 s32 VAR_7;
 u16 VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_5, VAR_3, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_9 = VAR_8 & VAR_2;

 if (VAR_9 >= VAR_1 - 5)
  return -VAR_0;

 VAR_6->min_cable_length = VAR_4[VAR_9];
 VAR_6->max_cable_length = VAR_4[VAR_9 + 5];

 VAR_6->cable_length = (VAR_6->min_cable_length + VAR_6->max_cable_length) / 2;

 return 0;
}
