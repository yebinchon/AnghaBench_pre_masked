
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radio_20xx_regs {int dummy; } ;
struct TYPE_2__ {int radiorev; int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 struct radio_20xx_regs* VAR_0 ;
 struct radio_20xx_regs* VAR_1 ;
 struct radio_20xx_regs* VAR_2 ;
 struct radio_20xx_regs* VAR_3 ;
 struct radio_20xx_regs* VAR_4 ;
 int FUNC_1 (struct brcms_phy*,struct radio_20xx_regs*) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_5)
{
 struct radio_20xx_regs *VAR_6 = ((void*)0);

 if (FUNC_0(VAR_5->pubpi.phy_rev, 7)) {
  VAR_6 = VAR_0;
 } else if (FUNC_0(VAR_5->pubpi.phy_rev, 8)
     || FUNC_0(VAR_5->pubpi.phy_rev, 9)) {
  switch (VAR_5->pubpi.radiorev) {
  case 5:

   if (FUNC_0(VAR_5->pubpi.phy_rev, 8))
    VAR_6 = VAR_1;
   else if (FUNC_0(VAR_5->pubpi.phy_rev, 9))
    VAR_6 = VAR_2;
   break;

  case 7:

   VAR_6 = VAR_3;
   break;

  case 8:

   VAR_6 = VAR_4;
   break;

  default:
   break;
  }
 }

 FUNC_1(VAR_5, VAR_6);
}
