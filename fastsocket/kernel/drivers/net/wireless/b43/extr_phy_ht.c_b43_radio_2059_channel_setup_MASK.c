
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;
struct b43_phy_ht_channeltab_e_radio2059 {int radio_rxtx98; int radio_rxtx92; int radio_rxtx6e; int radio_rxtx6d; int radio_rxtx6a; int radio_rxtx5a; int radio_rxtx58; int radio_rxtx4a; int radio_syn47; int radio_syn43; int radio_syn41; int radio_syn37; int radio_syn2d; int radio_syn2c; int radio_syn29; int radio_syn28; int radio_syn27; int radio_syn25; int radio_syn22; int radio_syn17; int radio_syn16; } ;





 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_0,
   const struct b43_phy_ht_channeltab_e_radio2059 *VAR_1)
{
 static const u16 VAR_2[] = { 130, 129, 128, };
 u16 VAR_3;
 int VAR_4;

 FUNC_2(VAR_0, 0x16, VAR_1->radio_syn16);
 FUNC_2(VAR_0, 0x17, VAR_1->radio_syn17);
 FUNC_2(VAR_0, 0x22, VAR_1->radio_syn22);
 FUNC_2(VAR_0, 0x25, VAR_1->radio_syn25);
 FUNC_2(VAR_0, 0x27, VAR_1->radio_syn27);
 FUNC_2(VAR_0, 0x28, VAR_1->radio_syn28);
 FUNC_2(VAR_0, 0x29, VAR_1->radio_syn29);
 FUNC_2(VAR_0, 0x2c, VAR_1->radio_syn2c);
 FUNC_2(VAR_0, 0x2d, VAR_1->radio_syn2d);
 FUNC_2(VAR_0, 0x37, VAR_1->radio_syn37);
 FUNC_2(VAR_0, 0x41, VAR_1->radio_syn41);
 FUNC_2(VAR_0, 0x43, VAR_1->radio_syn43);
 FUNC_2(VAR_0, 0x47, VAR_1->radio_syn47);

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_3 = VAR_2[VAR_4];
  FUNC_2(VAR_0, VAR_3 | 0x4a, VAR_1->radio_rxtx4a);
  FUNC_2(VAR_0, VAR_3 | 0x58, VAR_1->radio_rxtx58);
  FUNC_2(VAR_0, VAR_3 | 0x5a, VAR_1->radio_rxtx5a);
  FUNC_2(VAR_0, VAR_3 | 0x6a, VAR_1->radio_rxtx6a);
  FUNC_2(VAR_0, VAR_3 | 0x6d, VAR_1->radio_rxtx6d);
  FUNC_2(VAR_0, VAR_3 | 0x6e, VAR_1->radio_rxtx6e);
  FUNC_2(VAR_0, VAR_3 | 0x92, VAR_1->radio_rxtx92);
  FUNC_2(VAR_0, VAR_3 | 0x98, VAR_1->radio_rxtx98);
 }

 FUNC_3(50);


 FUNC_0(VAR_0, 0x2b, ~0x1);
 FUNC_0(VAR_0, 0x2e, ~0x4);
 FUNC_1(VAR_0, 0x2e, 0x4);
 FUNC_1(VAR_0, 0x2b, 0x1);

 FUNC_3(300);
}
