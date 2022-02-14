
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int bbatt; int rfatt; int txctl1; int radio_rev; int radio_ver; scalar_t__ type; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int ,int,int) ;

void FUNC_6(struct b43legacy_wldev *VAR_2,
        u16 VAR_3,
        u16 VAR_4,
        u16 VAR_5)
{
 struct b43legacy_phy *VAR_6 = &VAR_2->phy;

 if (VAR_3 == 0xFFFF)
  VAR_3 = VAR_6->bbatt;
 if (VAR_4 == 0xFFFF)
  VAR_4 = VAR_6->rfatt;
 if (VAR_5 == 0xFFFF)
  VAR_5 = VAR_6->txctl1;
 VAR_6->bbatt = VAR_3;
 VAR_6->rfatt = VAR_4;
 VAR_6->txctl1 = VAR_5;

 FUNC_0(VAR_3 > 11);
 if (VAR_6->radio_rev < 6)
  FUNC_0(VAR_4 > 9);
 else
  FUNC_0(VAR_4 > 31);
 FUNC_0(VAR_5 > 7);

 FUNC_2(VAR_2, VAR_3);
 FUNC_4(VAR_2, 0x0043, VAR_4);
 FUNC_5(VAR_2, VAR_1, 0x0064,
         VAR_4);
 if (VAR_6->radio_ver == 0x2050)
  FUNC_4(VAR_2, 0x0052,
     (FUNC_3(VAR_2, 0x0052)
     & ~0x0070) | ((VAR_5 << 4) & 0x0070));

 if (VAR_6->type == VAR_0)
  FUNC_1(VAR_2, 0);
}
