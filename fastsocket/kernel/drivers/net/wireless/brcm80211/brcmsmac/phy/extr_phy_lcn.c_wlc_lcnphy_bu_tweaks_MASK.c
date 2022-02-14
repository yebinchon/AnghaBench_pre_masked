
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phy_rev; } ;
struct brcms_phy {TYPE_2__ pubpi; TYPE_1__* sh; } ;
struct TYPE_3__ {int boardrev; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int ,int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;
 int FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_6(struct brcms_phy *VAR_6)
{
 FUNC_3(VAR_6, 0x805, 0x1);

 FUNC_1(VAR_6, 0x42f, (0x7 << 0), (0x3) << 0);

 FUNC_1(VAR_6, 0x030, (0x7 << 0), (0x3) << 0);

 FUNC_5(VAR_6, 0x414, 0x1e10);
 FUNC_5(VAR_6, 0x415, 0x0640);

 FUNC_1(VAR_6, 0x4df, (0xff << 8), -9 << 8);

 FUNC_3(VAR_6, 0x44a, 0x44);
 FUNC_5(VAR_6, 0x44a, 0x80);
 FUNC_1(VAR_6, 0x434, (0xff << 0), (0xFD) << 0);

 FUNC_1(VAR_6, 0x420, (0xff << 0), (16) << 0);

 if (!(VAR_6->sh->boardrev < 0x1204))
  FUNC_2(VAR_6, VAR_0, 0xF0, 0xF0);

 FUNC_5(VAR_6, 0x7d6, 0x0902);
 FUNC_1(VAR_6, 0x429, (0xf << 0), (0x9) << 0);

 FUNC_1(VAR_6, 0x429, (0x3f << 4), (0xe) << 4);

 if (FUNC_0(VAR_6->pubpi.phy_rev, 1)) {
  FUNC_1(VAR_6, 0x423, (0xff << 0), (0x46) << 0);

  FUNC_1(VAR_6, 0x411, (0xff << 0), (1) << 0);

  FUNC_1(VAR_6, 0x434, (0xff << 0), (0xFF) << 0);

  FUNC_1(VAR_6, 0x656, (0xf << 0), (2) << 0);

  FUNC_1(VAR_6, 0x44d, (0x1 << 2), (1) << 2);

  FUNC_2(VAR_6, VAR_4, 0x4, 0x4);
  FUNC_2(VAR_6, VAR_1, 0x3, 0);
  FUNC_2(VAR_6, VAR_2, 0xF8, 0x90);
  FUNC_2(VAR_6, VAR_3, 0x3, 0x2);
  FUNC_2(VAR_6, VAR_3, 0xf0, 0xa0);

  FUNC_2(VAR_6, VAR_5, 0x2, 0x2);

  FUNC_4(VAR_6);
  FUNC_1(VAR_6, 0x4d0, (0x1ff << 6), (10) << 6);

 }
}
