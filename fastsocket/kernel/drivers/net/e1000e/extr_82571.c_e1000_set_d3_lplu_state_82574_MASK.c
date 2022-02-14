
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ autoneg_advertised; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_5, bool VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_4);

 if (!VAR_6) {
  VAR_7 &= ~VAR_3;
 } else if ((VAR_5->phy.autoneg_advertised == VAR_2) ||
     (VAR_5->phy.autoneg_advertised == VAR_1) ||
     (VAR_5->phy.autoneg_advertised == VAR_0)) {
  VAR_7 |= VAR_3;
 }

 FUNC_1(VAR_4, VAR_7);
 return 0;
}
