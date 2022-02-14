
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_a* a; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_a {void* tssi2dbm; int tgt_idle_tssi; } ;


 int FUNC_0 (struct b43_phy_a*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 struct b43_phy_a *VAR_2 = VAR_1->a;
 const void *VAR_3;
 int VAR_4;



 VAR_3 = VAR_2->tssi2dbm;
 VAR_4 = VAR_2->tgt_idle_tssi;


 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->tssi2dbm = VAR_3;
 VAR_2->tgt_idle_tssi = VAR_4;



}
