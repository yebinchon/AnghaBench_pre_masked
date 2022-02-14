
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {int cable_polarity; scalar_t__ polarity_correction; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct e1000_hw*,int,int*) ;

s32 FUNC_1(struct e1000_hw *VAR_6)
{
 struct e1000_phy_info *VAR_7 = &VAR_6->phy;
 s32 VAR_8;
 u16 VAR_9, VAR_10, VAR_11;



 if (VAR_7->polarity_correction) {
  VAR_10 = VAR_1;
  VAR_11 = VAR_0;
 } else {
  VAR_10 = VAR_2;
  VAR_11 = VAR_3;
 }

 VAR_8 = FUNC_0(VAR_6, VAR_10, &VAR_9);

 if (!VAR_8)
  VAR_7->cable_polarity = ((VAR_9 & VAR_11)
           ? VAR_5
           : VAR_4);

 return VAR_8;
}
