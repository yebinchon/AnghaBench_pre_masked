
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {scalar_t__ tx_tone_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_2)
{
 struct b43_phy_lp *VAR_3 = VAR_2->phy.lp;
 int VAR_4;

 VAR_3->tx_tone_freq = 0;

 FUNC_0(VAR_2, VAR_1, 0xF000);
 for (VAR_4 = 0; VAR_4 < 31; VAR_4++) {
  if (!(FUNC_1(VAR_2, VAR_0) & 0x1))
   break;
  FUNC_2(100);
 }
}
