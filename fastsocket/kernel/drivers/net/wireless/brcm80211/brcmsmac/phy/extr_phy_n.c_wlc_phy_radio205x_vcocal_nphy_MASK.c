
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct brcms_phy*,int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct brcms_phy*,int ,int) ;

void FUNC_4(struct brcms_phy *VAR_4)
{
 if (FUNC_0(VAR_4->pubpi.phy_rev, 7)) {
  FUNC_1(VAR_4, VAR_3, 0x01, 0x0);
  FUNC_1(VAR_4, VAR_2, 0x04, 0x0);
  FUNC_1(VAR_4, VAR_2, 0x04,
         (1 << 2));
  FUNC_1(VAR_4, VAR_3, 0x01, 0x01);
 } else if (FUNC_0(VAR_4->pubpi.phy_rev, 3)) {
  FUNC_3(VAR_4, VAR_1, 0x0);
  FUNC_3(VAR_4, VAR_0, 0x38);
  FUNC_3(VAR_4, VAR_0, 0x18);
  FUNC_3(VAR_4, VAR_0, 0x38);
  FUNC_3(VAR_4, VAR_0, 0x39);
 }

 FUNC_2(300);
}
