
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {scalar_t__ type; int rev; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;

__attribute__((used)) static void FUNC_3(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_1->phy;

 if (VAR_2->type != VAR_0 || VAR_2->rev < 2)
  return;

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
}
