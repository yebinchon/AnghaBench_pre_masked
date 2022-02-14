
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {int cable_length; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;

s32 FUNC_1(struct e1000_hw *VAR_5)
{
 struct e1000_phy_info *VAR_6 = &VAR_5->phy;
 s32 VAR_7;
 u16 VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_5, VAR_4, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_9 = ((VAR_8 & VAR_2) >>
    VAR_3);

 if (VAR_9 == VAR_0)
  return -VAR_1;

 VAR_6->cable_length = VAR_9;

 return 0;
}
