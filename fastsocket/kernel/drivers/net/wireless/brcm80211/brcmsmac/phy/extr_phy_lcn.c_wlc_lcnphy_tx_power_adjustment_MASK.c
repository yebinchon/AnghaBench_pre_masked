
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy_lcnphy {int lcnphy_current_index; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;
typedef int s8 ;


 int FUNC_0 (struct brcms_phy*,int,int,int) ;
 int FUNC_1 (struct brcms_phy*,int) ;
 int FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*) ;
 scalar_t__ FUNC_4 (struct brcms_phy*) ;

void FUNC_5(struct brcms_phy_pub *VAR_0)
{
 s8 VAR_1;
 u16 VAR_2;
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_0;
 struct brcms_phy_lcnphy *VAR_4 = VAR_3->u.pi_lcnphy;
 u16 VAR_5 = FUNC_2(VAR_3);
 if (FUNC_4(VAR_3) &&
     VAR_5) {
  VAR_1 = FUNC_3(VAR_3);
  VAR_2 = (u16) (VAR_1 * 2);
  FUNC_0(VAR_3, 0x4a9, (0x1ff << 0), (VAR_2) << 0);

  VAR_4->lcnphy_current_index =
   (s8)((FUNC_1(VAR_3, 0x4a9) & 0xFF) / 2);
 }
}
