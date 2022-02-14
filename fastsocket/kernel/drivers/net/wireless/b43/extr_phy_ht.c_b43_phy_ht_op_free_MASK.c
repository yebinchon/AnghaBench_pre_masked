
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_ht* ht; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_ht {int dummy; } ;


 int FUNC_0 (struct b43_phy_ht*) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;
 struct b43_phy_ht *VAR_2 = VAR_1->ht;

 FUNC_0(VAR_2);
 VAR_1->ht = ((void*)0);
}
