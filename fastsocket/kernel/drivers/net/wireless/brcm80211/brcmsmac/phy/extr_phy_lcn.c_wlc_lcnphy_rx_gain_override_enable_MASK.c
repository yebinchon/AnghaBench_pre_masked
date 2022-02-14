
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int radio_chanspec; TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct brcms_phy*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct brcms_phy *VAR_0, bool VAR_1)
{
 u16 VAR_2 = VAR_1 ? 1 : 0;

 FUNC_2(VAR_0, 0x4b0, (0x1 << 8), VAR_2 << 8);

 FUNC_2(VAR_0, 0x44c, (0x1 << 0), VAR_2 << 0);

 if (FUNC_1(VAR_0->pubpi.phy_rev, 2)) {
  FUNC_2(VAR_0, 0x44c, (0x1 << 4), VAR_2 << 4);
  FUNC_2(VAR_0, 0x44c, (0x1 << 6), VAR_2 << 6);
  FUNC_2(VAR_0, 0x4b0, (0x1 << 5), VAR_2 << 5);
  FUNC_2(VAR_0, 0x4b0, (0x1 << 6), VAR_2 << 6);
 } else {
  FUNC_2(VAR_0, 0x4b0, (0x1 << 12), VAR_2 << 12);
  FUNC_2(VAR_0, 0x4b0, (0x1 << 13), VAR_2 << 13);
  FUNC_2(VAR_0, 0x4b0, (0x1 << 5), VAR_2 << 5);
 }

 if (FUNC_0(VAR_0->radio_chanspec)) {
  FUNC_2(VAR_0, 0x4b0, (0x1 << 10), VAR_2 << 10);
  FUNC_2(VAR_0, 0x4e5, (0x1 << 3), VAR_2 << 3);
 }
}
