
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; int speed_downgraded; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10;

 FUNC_1("e1000_check_downshift");

 if (VAR_8->phy_type == VAR_6) {
  VAR_9 = FUNC_0(VAR_8, VAR_1,
          &VAR_10);
  if (VAR_9)
   return VAR_9;

  VAR_8->speed_downgraded =
      (VAR_10 & VAR_2) ? 1 : 0;
 } else if (VAR_8->phy_type == VAR_7) {
  VAR_9 = FUNC_0(VAR_8, VAR_3,
          &VAR_10);
  if (VAR_9)
   return VAR_9;

  VAR_8->speed_downgraded = (VAR_10 & VAR_4) >>
      VAR_5;
 }

 return VAR_0;
}
