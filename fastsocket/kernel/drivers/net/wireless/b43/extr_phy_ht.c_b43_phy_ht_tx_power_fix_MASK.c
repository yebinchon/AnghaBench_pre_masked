
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
  u16 VAR_2;
  u32 VAR_3 = FUNC_4(VAR_0, FUNC_1(26, 0xE8));

  if (0)
   VAR_2 = 0x2 << (VAR_1 * 4);
  else
   VAR_2 = 0;
  FUNC_6(VAR_0, FUNC_3(0x108), VAR_2);

  FUNC_5(VAR_0, FUNC_0(7, 0x110 + VAR_1), VAR_3 >> 16);
  FUNC_5(VAR_0, FUNC_2(13, 0x63 + (VAR_1 * 4)),
    VAR_3 & 0xFF);
  FUNC_5(VAR_0, FUNC_2(13, 0x73 + (VAR_1 * 4)),
    VAR_3 & 0xFF);
 }
}
