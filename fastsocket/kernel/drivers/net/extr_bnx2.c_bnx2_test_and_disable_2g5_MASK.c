
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; int mii_up1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2*,int ,int*) ;
 int FUNC_2 (struct bnx2*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;

 if (!(VAR_6->phy_flags & VAR_2))
  return 0;

 if (FUNC_0(VAR_6) == VAR_1)
  FUNC_2(VAR_6, VAR_3, VAR_5);

 FUNC_1(VAR_6, VAR_6->mii_up1, &VAR_7);
 if (VAR_7 & VAR_0) {
  VAR_7 &= ~VAR_0;
  FUNC_2(VAR_6, VAR_6->mii_up1, VAR_7);
  VAR_8 = 1;
 }

 if (FUNC_0(VAR_6) == VAR_1)
  FUNC_2(VAR_6, VAR_3,
          VAR_4);

 return VAR_8;
}
