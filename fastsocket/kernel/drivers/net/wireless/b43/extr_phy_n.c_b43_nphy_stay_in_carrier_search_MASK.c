
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_n {scalar_t__ deaf_count; int const* clip_state; int classifier_state; } ;


 int FUNC_0 (struct b43_wldev*,int,int ) ;
 int FUNC_1 (struct b43_wldev*,int const*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int const*) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_0, bool VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_0->phy;
 struct b43_phy_n *VAR_3 = VAR_2->n;

 if (VAR_1) {
  static const u16 VAR_4[] = { 0xFFFF, 0xFFFF };
  if (VAR_3->deaf_count++ == 0) {
   VAR_3->classifier_state = FUNC_0(VAR_0, 0, 0);
   FUNC_0(VAR_0, 0x7, 0);
   FUNC_1(VAR_0, VAR_3->clip_state);
   FUNC_3(VAR_0, VAR_4);
  }
  FUNC_2(VAR_0);
 } else {
  if (--VAR_3->deaf_count == 0) {
   FUNC_0(VAR_0, 0x7, VAR_3->classifier_state);
   FUNC_3(VAR_0, VAR_3->clip_state);
  }
 }
}
