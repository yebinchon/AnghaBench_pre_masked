
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_0)
{
 u8 VAR_1, VAR_2;
 u16 VAR_3[] = { 0x40, 0x60, 0x80 };

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_3); VAR_1++) {
  for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
   FUNC_2(VAR_0, FUNC_1(VAR_3[VAR_1] + VAR_2), 0);
 }

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_3); VAR_1++)
  FUNC_2(VAR_0, FUNC_1(VAR_3[VAR_1] + 0xc), 0);
}
