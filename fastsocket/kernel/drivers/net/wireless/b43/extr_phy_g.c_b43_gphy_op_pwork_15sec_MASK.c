
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_phy {int rev; TYPE_1__* ops; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {scalar_t__ interfmode; scalar_t__ aci_enable; scalar_t__ aci_wlan_automatic; } ;
struct TYPE_2__ {int (* interf_mitigation ) (struct b43_wldev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_3->phy;
 struct b43_phy_g *VAR_5 = VAR_4->g;

 FUNC_3(VAR_3);

 if (VAR_5->aci_enable && VAR_5->aci_wlan_automatic) {
  if (!VAR_5->aci_enable && 1 ) {
   if (0 ) {
    VAR_4->ops->interf_mitigation(VAR_3,
     VAR_0);
   }
  } else if (0 ) {
      if ( !FUNC_0(VAR_3))
    VAR_4->ops->interf_mitigation(VAR_3, VAR_1);
  }
 } else if (VAR_5->interfmode == VAR_2 &&
     VAR_4->rev == 1) {

 }
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
}
