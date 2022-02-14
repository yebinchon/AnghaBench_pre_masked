
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_lcnphy {int lcnphy_tssi_npt; int lcnphy_tssi_idx; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct brcms_phy*) ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_2)
{
 struct brcms_phy_lcnphy *VAR_3 = VAR_2->u.pi_lcnphy;
 if (FUNC_0(VAR_2))
  return;

 VAR_3->lcnphy_tssi_idx = VAR_0;
 VAR_3->lcnphy_tssi_npt = VAR_1;
}
