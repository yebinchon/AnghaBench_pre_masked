
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy_lcnphy {int lcnphy_rssi_vf; int lcnphy_rssi_vc; int lcnphy_rssi_gs; } ;
struct TYPE_3__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_2__* sh; TYPE_1__ u; } ;
struct TYPE_4__ {int boardflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_phy*,int,int,int) ;
 int FUNC_1 (struct brcms_phy*,int,int) ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct brcms_phy *VAR_2)
{
 u16 VAR_3;
 struct brcms_phy_lcnphy *VAR_4 = VAR_2->u.pi_lcnphy;

 FUNC_4(VAR_2, VAR_1, 0x0);

 FUNC_3(VAR_2, 0x43b, 0x0);
 FUNC_3(VAR_2, 0x43c, 0x0);
 FUNC_3(VAR_2, 0x44c, 0x0);
 FUNC_3(VAR_2, 0x4e6, 0x0);
 FUNC_3(VAR_2, 0x4f9, 0x0);
 FUNC_3(VAR_2, 0x4b0, 0x0);
 FUNC_3(VAR_2, 0x938, 0x0);
 FUNC_3(VAR_2, 0x4b0, 0x0);
 FUNC_3(VAR_2, 0x44e, 0);

 FUNC_1(VAR_2, 0x567, 0x03);

 FUNC_1(VAR_2, 0x44a, 0x44);
 FUNC_3(VAR_2, 0x44a, 0x80);

 if (!(VAR_2->sh->boardflags & VAR_0))
  FUNC_2(VAR_2, 52);

 if (0) {
  VAR_3 = 0;
  VAR_3 = (u16) ((VAR_4->lcnphy_rssi_vf) |
      (VAR_4->lcnphy_rssi_vc << 4) |
      (VAR_4->lcnphy_rssi_gs << 10));
  FUNC_3(VAR_2, 0x43e, VAR_3);
 }

 FUNC_0(VAR_2, 0x634, (0xff << 0), 0xC << 0);
 if (VAR_2->sh->boardflags & VAR_0) {
  FUNC_0(VAR_2, 0x634, (0xff << 0), 0xA << 0);

  FUNC_3(VAR_2, 0x910, 0x1);
 }

 FUNC_0(VAR_2, 0x448, (0x3 << 8), 1 << 8);
 FUNC_0(VAR_2, 0x608, (0xff << 0), 0x17 << 0);
 FUNC_0(VAR_2, 0x604, (0x7ff << 0), 0x3EA << 0);

}
