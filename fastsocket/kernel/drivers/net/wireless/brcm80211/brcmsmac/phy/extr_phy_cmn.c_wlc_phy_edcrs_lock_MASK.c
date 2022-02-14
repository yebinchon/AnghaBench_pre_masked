
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int edcrs_threshold_lock; } ;


 int FUNC_0 (struct brcms_phy*,int,int) ;

void FUNC_1(struct brcms_phy_pub *VAR_0, bool VAR_1)
{
 struct brcms_phy *VAR_2 = (struct brcms_phy *) VAR_0;

 VAR_2->edcrs_threshold_lock = VAR_1;

 FUNC_0(VAR_2, 0x22c, 0x46b);
 FUNC_0(VAR_2, 0x22d, 0x46b);
 FUNC_0(VAR_2, 0x22e, 0x3c0);
 FUNC_0(VAR_2, 0x22f, 0x3c0);
}
