
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ixgb_hw {scalar_t__ phy_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ixgb_hw*,int ,int ,int ) ;
 int FUNC_1 (struct ixgb_hw*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ixgb_hw *VAR_5)
{
 if (VAR_5->phy_type == VAR_4) {
  u16 VAR_6;

  FUNC_1(VAR_5,
       VAR_1,
       VAR_0,
       VAR_3,
       VAR_2);

  VAR_6 = FUNC_0(VAR_5,
          VAR_1,
          VAR_0,
          VAR_3);
 }

 return;
}
