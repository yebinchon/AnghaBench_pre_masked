
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;

void FUNC_6(struct brcms_phy_pub *VAR_0, bool VAR_1)
{
 struct brcms_phy *VAR_2 = (struct brcms_phy *) VAR_0;

 if (FUNC_1(VAR_2)) {
  if (VAR_1) {
   if (FUNC_2(VAR_2->pubpi.phy_rev, 3)) {
    FUNC_5(VAR_2, 0xa6, 0x0d);
    FUNC_5(VAR_2, 0x8f, 0x0);
    FUNC_5(VAR_2, 0xa7, 0x0d);
    FUNC_5(VAR_2, 0xa5, 0x0);
   } else {
    FUNC_5(VAR_2, 0xa5, 0x0);
   }
  } else {
   if (FUNC_2(VAR_2->pubpi.phy_rev, 3)) {
    FUNC_5(VAR_2, 0x8f, 0x07ff);
    FUNC_5(VAR_2, 0xa6, 0x0fd);
    FUNC_5(VAR_2, 0xa5, 0x07ff);
    FUNC_5(VAR_2, 0xa7, 0x0fd);
   } else {
    FUNC_5(VAR_2, 0xa5, 0x7fff);
   }
  }
 } else if (FUNC_0(VAR_2)) {
  if (VAR_1) {
   FUNC_3(VAR_2, 0x43b,
        ~((0x1 << 0) | (0x1 << 1) | (0x1 << 2)));
  } else {
   FUNC_4(VAR_2, 0x43c,
       (0x1 << 0) | (0x1 << 1) | (0x1 << 2));
   FUNC_4(VAR_2, 0x43b,
       (0x1 << 0) | (0x1 << 1) | (0x1 << 2));
  }
 }
}
