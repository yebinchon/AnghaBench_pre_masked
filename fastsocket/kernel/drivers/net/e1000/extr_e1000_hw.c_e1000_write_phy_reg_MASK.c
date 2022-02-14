
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct e1000_hw*,int,int ) ;
 int FUNC_1 (char*) ;

s32 FUNC_2(struct e1000_hw *VAR_4, u32 VAR_5, u16 VAR_6)
{
 u32 VAR_7;

 FUNC_1("e1000_write_phy_reg");

 if ((VAR_4->phy_type == VAR_3) &&
     (VAR_5 > VAR_1)) {
  VAR_7 = FUNC_0(VAR_4, VAR_0,
       (u16) VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_0(VAR_4, VAR_2 & VAR_5,
      VAR_6);

 return VAR_7;
}
