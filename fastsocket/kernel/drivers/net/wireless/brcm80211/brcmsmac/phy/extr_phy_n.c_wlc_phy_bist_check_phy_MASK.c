
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct brcms_phy*,int) ;

bool FUNC_2(struct brcms_phy_pub *VAR_0)
{
 struct brcms_phy *VAR_1 = (struct brcms_phy *) VAR_0;
 u32 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 if (FUNC_0(VAR_1->pubpi.phy_rev, 16))
  return 1;

 VAR_2 = FUNC_1(VAR_1, 0x0e);
 VAR_3 = FUNC_1(VAR_1, 0x0f);
 VAR_4 = FUNC_1(VAR_1, 0xea);
 VAR_5 = FUNC_1(VAR_1, 0xeb);
 VAR_6 = FUNC_1(VAR_1, 0x156);

 if ((VAR_2 == 0) && (VAR_3 == 0x4000) && (VAR_4 == 0x1fe0) &&
     (VAR_5 == 0) && (VAR_6 == 0))
  return 1;

 return 0;
}
