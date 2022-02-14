
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy_lcnphy {int lcnphy_current_index; } ;
struct TYPE_4__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {int phy_forcecal; TYPE_1__* sh; int phy_lastcal; int d11core; TYPE_2__ u; } ;
typedef int s8 ;
struct TYPE_3__ {int physhim; int now; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*,int ) ;
 int FUNC_7 (struct brcms_phy*,int ) ;
 int FUNC_8 (struct brcms_phy*) ;

__attribute__((used)) static void FUNC_9(struct brcms_phy *VAR_2)
{
 bool VAR_3;
 s8 VAR_4;
 u16 VAR_5 = FUNC_5(VAR_2);
 struct brcms_phy_lcnphy *VAR_6 = VAR_2->u.pi_lcnphy;
 VAR_3 = (0 == (FUNC_1(VAR_2->d11core, FUNC_0(VAR_1)) &
    VAR_0));
 if (!VAR_3)
  FUNC_3(VAR_2->sh->physhim);
 FUNC_4(VAR_2, 1);
 VAR_2->phy_lastcal = VAR_2->sh->now;
 VAR_2->phy_forcecal = 0;
 VAR_4 = VAR_6->lcnphy_current_index;

 FUNC_8(VAR_2);

 FUNC_6(VAR_2, VAR_4);
 FUNC_7(VAR_2, VAR_5);
 FUNC_4(VAR_2, 0);
 if (!VAR_3)
  FUNC_2(VAR_2->sh->physhim);

}
