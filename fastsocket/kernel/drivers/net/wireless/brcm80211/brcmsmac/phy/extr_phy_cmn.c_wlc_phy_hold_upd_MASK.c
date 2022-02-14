
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int measure_hold; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct brcms_phy_pub *VAR_0, u32 VAR_1, bool VAR_2)
{
 struct brcms_phy *VAR_3 = (struct brcms_phy *) VAR_0;

 if (VAR_2)
  FUNC_1(VAR_3->measure_hold, VAR_1);
 else
  FUNC_0(VAR_3->measure_hold, VAR_1);

 return;
}
