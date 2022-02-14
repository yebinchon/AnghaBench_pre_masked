
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int,int,int) ;
 int FUNC_9 (struct b43_wldev*,int,int) ;
 int FUNC_10 (struct b43_wldev*,int,int) ;
 int FUNC_11 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_12(struct b43_wldev *VAR_7)
{
 u16 VAR_8, VAR_9, VAR_10 = 0xFFFF;
 int VAR_11;

 FUNC_2(VAR_7, VAR_2, ~VAR_3);
 FUNC_5(VAR_7, FUNC_0(0x1B), 0x1000);
 FUNC_3(VAR_7, FUNC_0(0x82), 0xF0FF, 0x0300);
 FUNC_9(VAR_7, 0x0009, 0x0080);
 FUNC_8(VAR_7, 0x0012, 0xFFFC, 0x0002);
 FUNC_11(VAR_7);
 FUNC_6(VAR_7, FUNC_0(0xBA), 0x3ED5);
 VAR_8 = FUNC_4(VAR_7, VAR_6);
 FUNC_6(VAR_7, VAR_6, (VAR_8 & 0xFFF8) | 0x0005);
 FUNC_9(VAR_7, 0x0004, 0x0004);
 for (VAR_11 = 0x10; VAR_11 <= 0x20; VAR_11++) {
  FUNC_10(VAR_7, 0x0013, VAR_11);
  VAR_9 = FUNC_4(VAR_7, VAR_5) & 0x00FF;
  if (!VAR_9) {
   VAR_10 = 0x0000;
   break;
  } else if (VAR_9 >= 0x0080)
   VAR_9 = 0x0100 - VAR_9;
  if (VAR_9 < VAR_10)
   VAR_10 = VAR_9;
 }
 FUNC_6(VAR_7, VAR_6, VAR_8);
 FUNC_7(VAR_7, 0x0004, 0xFFFB);
 FUNC_10(VAR_7, 0x0013, VAR_10);
 FUNC_1(VAR_7, VAR_1, 0, 0xFFEC);
 FUNC_6(VAR_7, FUNC_0(0xB7), 0x1E80);
 FUNC_6(VAR_7, FUNC_0(0xB6), 0x1C00);
 FUNC_6(VAR_7, FUNC_0(0xB5), 0x0EC0);
 FUNC_6(VAR_7, FUNC_0(0xB2), 0x00C0);
 FUNC_6(VAR_7, FUNC_0(0xB9), 0x1FFF);
 FUNC_3(VAR_7, FUNC_0(0xBB), 0xF000, 0x0053);
 FUNC_3(VAR_7, VAR_4, 0xFE1F, 0x0120);
 FUNC_3(VAR_7, FUNC_0(0x13), 0x0FFF, 0x3000);
 FUNC_3(VAR_7, FUNC_0(0x14), 0x0FFF, 0x3000);
 FUNC_1(VAR_7, VAR_0, 6, 0x0017);
 for (VAR_11 = 0; VAR_11 < 6; VAR_11++)
  FUNC_1(VAR_7, VAR_0, VAR_11, 0x000F);
 FUNC_1(VAR_7, VAR_0, 0x0D, 0x000E);
 FUNC_1(VAR_7, VAR_0, 0x0E, 0x0011);
 FUNC_1(VAR_7, VAR_0, 0x0F, 0x0013);
 FUNC_6(VAR_7, FUNC_0(0x33), 0x5030);
 FUNC_5(VAR_7, VAR_2, VAR_3);
}
