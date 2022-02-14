
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {scalar_t__ radio_on; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int FUNC_0 (struct b43_wldev*,int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_0,
     bool VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_0->phy;

 if (!VAR_1) {
  if (VAR_2->radio_on)
   return;
  FUNC_3(VAR_0, 0x0004, 0x00C0);
  FUNC_3(VAR_0, 0x0005, 0x0008);
  FUNC_0(VAR_0, 0x0010, 0xFFF7);
  FUNC_0(VAR_0, 0x0011, 0xFFF7);
  FUNC_2(VAR_0);
 } else {
  FUNC_3(VAR_0, 0x0004, 0x00FF);
  FUNC_3(VAR_0, 0x0005, 0x00FB);
  FUNC_1(VAR_0, 0x0010, 0x0008);
  FUNC_1(VAR_0, 0x0011, 0x0008);
 }
}
