
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {struct b43legacy_lopair* _lo_pairs; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;
struct b43legacy_lopair {scalar_t__ used; } ;


 int VAR_0 ;

void FUNC_0(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;
 struct b43legacy_lopair *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = VAR_2->_lo_pairs + VAR_4;
  VAR_3->used = 0;
 }
}
