
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_0,
           u16 VAR_1,
           u16 VAR_2,
           u16 VAR_3,
           u16 VAR_4,
           u16 VAR_5, u16 VAR_6, u16 VAR_7)
{
 u16 VAR_8, VAR_9;

 VAR_9 = VAR_3 & 0xf;
 VAR_8 = ((VAR_4 & 0xf) << 12) |
     ((VAR_5 & 0xf) << 8) |
     ((VAR_6 & 0x3) << 6) |
     ((VAR_6 &
       0x3) << 4) | ((VAR_7 & 0x3) << 2) | ((VAR_7 & 0x3) << 0);

 FUNC_1(VAR_0, 0x4b6, (0xffff << 0), VAR_8 << 0);
 FUNC_1(VAR_0, 0x4b7, (0xf << 0), VAR_9 << 0);
 FUNC_1(VAR_0, 0x4b1, (0x3 << 11), VAR_7 << 11);

 if (FUNC_0(VAR_0->pubpi.phy_rev, 2)) {
  FUNC_1(VAR_0, 0x4b1, (0x1 << 9), VAR_2 << 9);
  FUNC_1(VAR_0, 0x4b1, (0x1 << 10), VAR_2 << 10);
 } else {
  FUNC_1(VAR_0, 0x4b1, (0x1 << 10), 0 << 10);

  FUNC_1(VAR_0, 0x4b1, (0x1 << 15), 0 << 15);

  FUNC_1(VAR_0, 0x4b1, (0x1 << 9), VAR_2 << 9);
 }

 FUNC_1(VAR_0, 0x44d, (0x1 << 0), (!VAR_1) << 0);

}
