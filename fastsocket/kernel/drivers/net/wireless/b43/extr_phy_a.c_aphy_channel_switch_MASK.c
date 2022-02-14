
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_0, unsigned int VAR_1)
{
 u16 VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_6(VAR_1);

 VAR_3 = FUNC_2(VAR_0, 0x0008);
 FUNC_5(VAR_0, 0x03F0, VAR_2);
 FUNC_4(VAR_0, 0x0008, VAR_3);


 VAR_4 = FUNC_2(VAR_0, 0x002E);
 VAR_4 &= 0x0080;

 FUNC_4(VAR_0, 0x002E, VAR_4);

 if (VAR_2 >= 4920 && VAR_2 <= 5500) {




  VAR_3 = 3 * VAR_2 / 116;
 }
 FUNC_4(VAR_0, 0x0007, (VAR_3 << 4) | VAR_3);
 FUNC_4(VAR_0, 0x0020, (VAR_3 << 4) | VAR_3);
 FUNC_4(VAR_0, 0x0021, (VAR_3 << 4) | VAR_3);
 FUNC_1(VAR_0, 0x0022, 0x000F, (VAR_3 << 4));
 FUNC_4(VAR_0, 0x002A, (VAR_3 << 4));
 FUNC_4(VAR_0, 0x002B, (VAR_3 << 4));
 FUNC_1(VAR_0, 0x0008, 0x00F0, (VAR_3 << 4));
 FUNC_1(VAR_0, 0x0029, 0xFF0F, 0x00B0);
 FUNC_4(VAR_0, 0x0035, 0x00AA);
 FUNC_4(VAR_0, 0x0036, 0x0085);
 FUNC_1(VAR_0, 0x003A, 0xFF20, FUNC_7(VAR_2));
 FUNC_0(VAR_0, 0x003D, 0x00FF);
 FUNC_1(VAR_0, 0x0081, 0xFF7F, 0x0080);
 FUNC_0(VAR_0, 0x0035, 0xFFEF);
 FUNC_1(VAR_0, 0x0035, 0xFFEF, 0x0010);
 FUNC_3(VAR_0);


}
