
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int radio_ver; } ;
struct b43_wldev {TYPE_2__* dev; TYPE_1__ phy; } ;
struct TYPE_4__ {int chip_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_1)
{

 FUNC_2(VAR_1, VAR_0, 0x2);
 FUNC_7(1);
 FUNC_1(VAR_1, VAR_0, 0xFFFD);
 FUNC_7(1);

 if (VAR_1->phy.radio_ver == 0x2062) {
  FUNC_4(VAR_1);
 } else {
  FUNC_5(VAR_1);
  FUNC_6(VAR_1);
  FUNC_3(VAR_1, FUNC_0(0xF0), 0x5F80);
  FUNC_3(VAR_1, FUNC_0(0xF1), 0);
  if (VAR_1->dev->chip_id == 0x4325) {

  }
 }
}
