
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lpphy_tx_gains {int pad; int pga; int gm; int dac; } ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_1,
          struct lpphy_tx_gains VAR_2)
{
 u16 VAR_3, VAR_4;

 if (VAR_1->phy.rev < 2) {
  VAR_3 = (VAR_2.pad << 7) | (VAR_2.pga << 3) | VAR_2.gm;
  FUNC_1(VAR_1, VAR_0,
    0xF800, VAR_3);
 } else {
  VAR_4 = FUNC_4(VAR_1);
  FUNC_2(VAR_1, VAR_0,
         (VAR_2.pga << 8) | VAR_2.gm);




  FUNC_1(VAR_1, FUNC_0(0xFB),
    0x8000, VAR_2.pad | (VAR_4 << 6));
  FUNC_2(VAR_1, FUNC_0(0xFC),
         (VAR_2.pga << 8) | VAR_2.gm);
  FUNC_1(VAR_1, FUNC_0(0xFD),
    0x8000, VAR_2.pad | (VAR_4 << 8));
 }
 FUNC_5(VAR_1, VAR_2.dac);
 FUNC_3(VAR_1);
}
