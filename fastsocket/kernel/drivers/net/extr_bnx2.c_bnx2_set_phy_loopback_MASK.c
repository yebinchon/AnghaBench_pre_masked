
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int link_up; int phy_lock; int mii_bmcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 scalar_t__ FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct bnx2 *VAR_10)
{
 u32 VAR_11;
 int VAR_12, VAR_13;

 FUNC_5(&VAR_10->phy_lock);
 VAR_12 = FUNC_3(VAR_10, VAR_10->mii_bmcr, VAR_1 | VAR_0 |
       VAR_2);
 FUNC_6(&VAR_10->phy_lock);
 if (VAR_12)
  return VAR_12;

 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
  if (FUNC_2(VAR_10) == 0)
   break;
  FUNC_4(100);
 }

 VAR_11 = FUNC_0(VAR_10, VAR_3);
 VAR_11 &= ~(VAR_8 | VAR_6 |
        VAR_7 | VAR_5 |
        VAR_4);

 VAR_11 |= VAR_9;
 FUNC_1(VAR_10, VAR_3, VAR_11);
 VAR_10->link_up = 1;
 return 0;
}
