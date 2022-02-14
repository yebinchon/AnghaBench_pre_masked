
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int const u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0)
{
 static const u8 VAR_1[5] = { 0x00, 0x40, 0x80, 0x90, 0xD0 };
 static const u8 VAR_2[5] = { 0x00, 0x01, 0x05, 0x06, 0x0A };
 u16 VAR_3 = FUNC_1(VAR_0, 0x001E);
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
   if (VAR_3 == (VAR_1[VAR_4] << 4 | VAR_2[VAR_5])) {
    FUNC_0(VAR_0, 0x0069,
           (VAR_4 - VAR_5) << 8 | 0x00C0);
    return;
   }
  }
 }
}
