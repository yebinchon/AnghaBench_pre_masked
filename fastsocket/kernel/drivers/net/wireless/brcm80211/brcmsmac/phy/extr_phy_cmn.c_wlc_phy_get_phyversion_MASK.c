
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_2__ {scalar_t__ radiorev; scalar_t__ radioid; scalar_t__ phy_rev; scalar_t__ phy_type; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;



bool
FUNC_0(struct brcms_phy_pub *VAR_0, u16 *VAR_1, u16 *VAR_2,
         u16 *VAR_3, u16 *VAR_4)
{
 struct brcms_phy *VAR_5 = (struct brcms_phy *) VAR_0;
 *VAR_1 = (u16) VAR_5->pubpi.phy_type;
 *VAR_2 = (u16) VAR_5->pubpi.phy_rev;
 *VAR_3 = VAR_5->pubpi.radioid;
 *VAR_4 = VAR_5->pubpi.radiorev;

 return 1;
}
