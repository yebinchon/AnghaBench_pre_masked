
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; int autoneg; int mii_up1; int advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bnx2*,int ,int*) ;
 int FUNC_2 (struct bnx2*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_8)
{
 u32 VAR_9;
 int VAR_10 = 1;

 if (!(VAR_8->phy_flags & VAR_4))
  return 0;

 if (VAR_8->autoneg & VAR_1)
  VAR_8->advertising |= VAR_0;

 if (FUNC_0(VAR_8) == VAR_3)
  FUNC_2(VAR_8, VAR_5, VAR_7);

 FUNC_1(VAR_8, VAR_8->mii_up1, &VAR_9);
 if (!(VAR_9 & VAR_2)) {
  VAR_9 |= VAR_2;
  FUNC_2(VAR_8, VAR_8->mii_up1, VAR_9);
  VAR_10 = 0;
 }

 if (FUNC_0(VAR_8) == VAR_3)
  FUNC_2(VAR_8, VAR_5,
          VAR_6);

 return VAR_10;
}
