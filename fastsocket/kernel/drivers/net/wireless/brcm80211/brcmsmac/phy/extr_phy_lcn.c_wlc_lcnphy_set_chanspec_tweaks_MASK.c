
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct brcms_phy_lcnphy {int lcnphy_bandedge_corr; int lcnphy_spurmod; } ;
struct TYPE_3__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_2__* sh; TYPE_1__ u; } ;
struct TYPE_4__ {int sih; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct brcms_phy*,int) ;
 int FUNC_6 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct brcms_phy *VAR_0, u16 VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1);
 struct brcms_phy_lcnphy *VAR_3 = VAR_0->u.pi_lcnphy;

 if (VAR_2 == 14)
  FUNC_1(VAR_0, 0x448, (0x3 << 8), (2) << 8);
 else
  FUNC_1(VAR_0, 0x448, (0x3 << 8), (1) << 8);

 VAR_3->lcnphy_bandedge_corr = 2;
 if (VAR_2 == 1)
  VAR_3->lcnphy_bandedge_corr = 4;

 if (VAR_2 == 1 || VAR_2 == 2 || VAR_2 == 3 ||
     VAR_2 == 4 || VAR_2 == 9 ||
     VAR_2 == 10 || VAR_2 == 11 || VAR_2 == 12) {
  FUNC_3(VAR_0->sh->sih, 0x2, 0xffffffff, 0x03000c04);
  FUNC_3(VAR_0->sh->sih, 0x3, 0xffffff, 0x0);
  FUNC_3(VAR_0->sh->sih, 0x4, 0xffffffff, 0x200005c0);

  FUNC_4(VAR_0->sh->sih);
  FUNC_6(VAR_0, 0x942, 0);
  FUNC_5(VAR_0, 0);
  VAR_3->lcnphy_spurmod = 0;
  FUNC_1(VAR_0, 0x424, (0xff << 8), (0x1b) << 8);

  FUNC_6(VAR_0, 0x425, 0x5907);
 } else {
  FUNC_3(VAR_0->sh->sih, 0x2, 0xffffffff, 0x03140c04);
  FUNC_3(VAR_0->sh->sih, 0x3, 0xffffff, 0x333333);
  FUNC_3(VAR_0->sh->sih, 0x4, 0xffffffff, 0x202c2820);

  FUNC_4(VAR_0->sh->sih);
  FUNC_6(VAR_0, 0x942, 0);
  FUNC_5(VAR_0, 1);

  VAR_3->lcnphy_spurmod = 0;
  FUNC_1(VAR_0, 0x424, (0xff << 8), (0x1f) << 8);

  FUNC_6(VAR_0, 0x425, 0x590a);
 }

 FUNC_2(VAR_0, 0x44a, 0x44);
 FUNC_6(VAR_0, 0x44a, 0x80);
}
