
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct b43_wldev {int wl; } ;


 size_t FUNC_0 (size_t const*) ;
 int VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 size_t const VAR_3 ;
 int FUNC_1 (struct b43_wldev*,size_t const,int) ;
 int FUNC_2 (struct b43_wldev*,size_t const,int,int) ;
 int FUNC_3 (struct b43_wldev*,size_t const) ;
 int FUNC_4 (struct b43_wldev*,size_t const,int) ;
 int FUNC_5 (struct b43_wldev*,int,size_t const) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct b43_wldev *VAR_4)
{
 const u16 VAR_5[] = { VAR_1, VAR_2, VAR_3 };
 const u16 VAR_6[3][2] = {
  { 0x61, 0xE9 }, { 0x69, 0xD5 }, { 0x73, 0x99 },
 };
 u16 VAR_7, VAR_8;

 FUNC_5(VAR_4, VAR_0 | 0x51, 0x0070);
 FUNC_5(VAR_4, VAR_0 | 0x5a, 0x0003);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++)
  FUNC_4(VAR_4, VAR_5[VAR_7] | 0x146, 0x3);

 FUNC_4(VAR_4, 0x2e, 0x0078);
 FUNC_4(VAR_4, 0xc0, 0x0080);
 FUNC_7(2);
 FUNC_1(VAR_4, 0x2e, ~0x0078);
 FUNC_1(VAR_4, 0xc0, ~0x0080);

 if (1) {
  FUNC_4(VAR_4, VAR_3 | 0x4, 0x1);
  FUNC_8(10);
  FUNC_4(VAR_4, VAR_3 | 0x0BF, 0x1);
  FUNC_2(VAR_4, VAR_3 | 0x19B, 0x3, 0x2);

  FUNC_4(VAR_4, VAR_3 | 0x4, 0x2);
  FUNC_8(100);
  FUNC_1(VAR_4, VAR_3 | 0x4, ~0x2);

  for (VAR_7 = 0; VAR_7 < 10000; VAR_7++) {
   if (FUNC_3(VAR_4, VAR_3 | 0x145) & 1) {
    VAR_7 = 0;
    break;
   }
   FUNC_8(100);
  }
  if (VAR_7)
   FUNC_6(VAR_4->wl, "radio 0x945 timeout\n");

  FUNC_1(VAR_4, VAR_3 | 0x4, ~0x1);
  FUNC_4(VAR_4, 0xa, 0x60);

  for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
   FUNC_5(VAR_4, 0x17F, VAR_6[VAR_7][0]);
   FUNC_5(VAR_4, 0x13D, 0x6E);
   FUNC_5(VAR_4, 0x13E, VAR_6[VAR_7][1]);
   FUNC_5(VAR_4, 0x13C, 0x55);

   for (VAR_8 = 0; VAR_8 < 10000; VAR_8++) {
    if (FUNC_3(VAR_4, 0x140) & 2) {
     VAR_8 = 0;
     break;
    }
    FUNC_8(500);
   }
   if (VAR_8)
    FUNC_6(VAR_4->wl, "radio 0x140 timeout\n");

   FUNC_5(VAR_4, 0x13C, 0x15);
  }

  FUNC_1(VAR_4, 0x17F, ~0x1);
 }

 FUNC_1(VAR_4, 0x11, ~0x0008);
}
