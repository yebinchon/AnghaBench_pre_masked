
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int d11core; scalar_t__ phy_wreg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

u16 FUNC_3(struct brcms_phy *VAR_2, u16 VAR_3)
{
 FUNC_2(VAR_2->d11core, FUNC_0(VAR_0), VAR_3);

 VAR_2->phy_wreg = 0;
 return FUNC_1(VAR_2->d11core, FUNC_0(VAR_1));
}
