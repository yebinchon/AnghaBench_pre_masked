
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_2,
         s16 VAR_3, s16 VAR_4, s16 VAR_5)
{
 struct b43_phy *VAR_6 = &VAR_2->phy;
 u16 VAR_7;
 u16 VAR_8 = 0x08, VAR_9 = 0x18;
 u16 VAR_10;
 u16 VAR_11;

 if (VAR_6->rev <= 1) {
  VAR_8 = 0x10;
  VAR_9 = 0x20;
 }

 VAR_11 = VAR_0;
 if (VAR_6->rev <= 1)
  VAR_11 = VAR_1;
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  FUNC_1(VAR_2, VAR_11, VAR_7, VAR_3);

 for (VAR_7 = VAR_8; VAR_7 < VAR_9; VAR_7++)
  FUNC_1(VAR_2, VAR_11, VAR_7, VAR_4);

 if (VAR_5 != -1) {
  VAR_10 = ((u16) VAR_5 << 14) | ((u16) VAR_5 << 6);
  FUNC_2(VAR_2, 0x04A0, 0xBFBF, VAR_10);
  FUNC_2(VAR_2, 0x04A1, 0xBFBF, VAR_10);
  FUNC_2(VAR_2, 0x04A2, 0xBFBF, VAR_10);
 }
 FUNC_0(VAR_2, 0, 1);
}
