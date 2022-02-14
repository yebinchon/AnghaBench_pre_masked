
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int txpwroverride; int * tx_user_target; } ;



int FUNC_0(struct brcms_phy_pub *VAR_0, uint *VAR_1, bool *VAR_2)
{
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_0;

 *VAR_1 = VAR_3->tx_user_target[0];
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3->txpwroverride;
 return 0;
}
