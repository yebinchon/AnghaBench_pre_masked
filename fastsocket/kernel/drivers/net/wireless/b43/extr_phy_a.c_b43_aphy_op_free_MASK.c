
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_a* a; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_a {struct b43_phy_a* tssi2dbm; } ;


 int FUNC_0 (struct b43_phy_a*) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 struct b43_phy_a *VAR_2 = VAR_1->a;

 FUNC_0(VAR_2->tssi2dbm);
 VAR_2->tssi2dbm = ((void*)0);

 FUNC_0(VAR_2);
 VAR_0->phy.a = ((void*)0);
}
