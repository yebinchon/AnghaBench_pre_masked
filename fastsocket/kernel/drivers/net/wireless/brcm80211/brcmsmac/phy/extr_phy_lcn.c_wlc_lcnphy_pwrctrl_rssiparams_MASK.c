
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy_lcnphy {int lcnphy_rssi_vc; int lcnphy_rssi_vf; int lcnphy_rssi_gs; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_phy*,int,int,int) ;
 int FUNC_1 (struct brcms_phy*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_1)
{
 u16 VAR_2, VAR_3, VAR_4;
 struct brcms_phy_lcnphy *VAR_5 = VAR_1->u.pi_lcnphy;

 VAR_2 = (2 << 8) |
        (VAR_5->lcnphy_rssi_vc << 4) | VAR_5->lcnphy_rssi_vf;
 VAR_3 = (2 << 8) | (8 << 4) | 4;
 VAR_4 = 2;

 FUNC_0(VAR_1, 0x4d8, (0x1 << 0), (0) << 0);

 FUNC_0(VAR_1, 0x4d8, (0x1 << 1), (0) << 1);

 FUNC_0(VAR_1, 0x4d7, (0x1 << 3), (0) << 3);

 FUNC_0(VAR_1, 0x4db,
      (0x3ff << 0) |
      (0x7 << 12),
      (VAR_2 << 0) | (VAR_5->lcnphy_rssi_gs << 12));

 FUNC_0(VAR_1, 0x4dc,
      (0x3ff << 0) |
      (0x7 << 12),
      (VAR_2 << 0) | (VAR_5->lcnphy_rssi_gs << 12));

 FUNC_0(VAR_1, 0x40a,
      (0x3ff << 0) |
      (0x7 << 12),
      (VAR_2 << 0) | (VAR_5->lcnphy_rssi_gs << 12));

 FUNC_0(VAR_1, 0x40b,
      (0x3ff << 0) |
      (0x7 << 12),
      (VAR_3 << 0) | (VAR_4 << 12));

 FUNC_0(VAR_1, 0x40c,
      (0x3ff << 0) |
      (0x7 << 12),
      (VAR_3 << 0) | (VAR_4 << 12));

 FUNC_1(VAR_1, VAR_0, (1 << 5), (1 << 5));
}
