
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_lp* lp; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_lp {int antenna; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_phy_lp*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_1->phy;
 struct b43_phy_lp *VAR_3 = VAR_2->lp;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->antenna = VAR_0;


}
