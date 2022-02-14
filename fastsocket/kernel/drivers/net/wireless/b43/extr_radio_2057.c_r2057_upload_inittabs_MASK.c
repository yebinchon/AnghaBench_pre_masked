
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int rev; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int FUNC_0 (int**) ;
 int FUNC_1 (char*,int) ;
 int** VAR_0 ;
 int** VAR_1 ;
 int** VAR_2 ;
 int** VAR_3 ;
 int** VAR_4 ;

void FUNC_2(struct b43_wldev *VAR_5)
{
 struct b43_phy *VAR_6 = &VAR_5->phy;
 u16 *VAR_7 = ((void*)0);
 u16 VAR_8, VAR_9;

 if (VAR_6->rev == 7) {
  VAR_7 = VAR_0[0];
  VAR_8 = FUNC_0(VAR_0);
 } else if (VAR_6->rev == 8 || VAR_6->rev == 9) {
  if (VAR_6->radio_rev == 5) {
   if (VAR_6->radio_rev == 8) {
    VAR_7 = VAR_1[0];
    VAR_8 = FUNC_0(VAR_1);
   } else {
    VAR_7 = VAR_2[0];
    VAR_8 = FUNC_0(VAR_2);
   }
  } else if (VAR_6->radio_rev == 7) {
   VAR_7 = VAR_3[0];
   VAR_8 = FUNC_0(VAR_3);
  } else if (VAR_6->radio_rev == 9) {
   VAR_7 = VAR_4[0];
   VAR_8 = FUNC_0(VAR_4);
  }
 }

 if (VAR_7) {
  for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
   FUNC_1("radio_write 0x%X ", *VAR_7);
   VAR_7++;
   FUNC_1("0x%X\n", *VAR_7);
   VAR_7++;
  }
 }
}
