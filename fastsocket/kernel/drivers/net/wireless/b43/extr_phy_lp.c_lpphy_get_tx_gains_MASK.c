
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lpphy_tx_gains {int dac; int gm; int pga; int pad; } ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;

__attribute__((used)) static struct lpphy_tx_gains FUNC_2(struct b43_wldev *VAR_2)
{
 struct lpphy_tx_gains VAR_3;
 u16 VAR_4;

 VAR_3.dac = (FUNC_1(VAR_2, VAR_0) & 0x380) >> 7;
 if (VAR_2->phy.rev < 2) {
  VAR_4 = FUNC_1(VAR_2,
       VAR_1) & 0x7FF;
  VAR_3.gm = VAR_4 & 0x0007;
  VAR_3.pga = (VAR_4 & 0x0078) >> 3;
  VAR_3.pad = (VAR_4 & 0x780) >> 7;
 } else {
  VAR_4 = FUNC_1(VAR_2, VAR_1);
  VAR_3.pad = FUNC_1(VAR_2, FUNC_0(0xFB)) & 0xFF;
  VAR_3.gm = VAR_4 & 0xFF;
  VAR_3.pga = (VAR_4 >> 8) & 0xFF;
 }

 return VAR_3;
}
