
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_3)
{
 u8 VAR_4;

 if (1) {
  FUNC_0(VAR_3, VAR_0, (0x7 << 10) | 0x340);
  for (VAR_4 = 0; VAR_4 < 30; VAR_4++) {
   FUNC_0(VAR_3, VAR_1, 0);
   FUNC_0(VAR_3, VAR_2, 0);
  }
 }

 FUNC_0(VAR_3, VAR_0, (0x7 << 10) | 0x80);
 for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
  FUNC_0(VAR_3, VAR_1, 0);
  FUNC_0(VAR_3, VAR_2, 0);
 }
}
