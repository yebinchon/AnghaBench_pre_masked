
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_phy {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mii_phy*,int ) ;

__attribute__((used)) static int FUNC_1(struct mii_phy *VAR_4)
{
 int VAR_5;


 FUNC_0(VAR_4, VAR_3);
 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5 < 0 || (VAR_5 & VAR_2) == 0)
  return 0;
 if (VAR_4->autoneg == VAR_0 && !(VAR_5 & VAR_1))
  return 0;
 return 1;
}
