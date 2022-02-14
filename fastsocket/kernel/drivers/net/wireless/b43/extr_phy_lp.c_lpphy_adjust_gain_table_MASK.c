
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int rev; struct b43_phy_lp* lp; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_phy_lp {int tx_isolation_med_band; int tx_isolation_low_band; int tx_isolation_hi_band; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int*) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_1, u32 VAR_2)
{
 struct b43_phy_lp *VAR_3 = VAR_1->phy.lp;
 u16 VAR_4[3];
 u16 VAR_5;

 FUNC_1(VAR_1->phy.rev >= 2);

 if (FUNC_2(VAR_1->wl) == VAR_0)
  VAR_5 = VAR_3->tx_isolation_med_band;
 else if (VAR_2 <= 5320)
  VAR_5 = VAR_3->tx_isolation_low_band;
 else if (VAR_2 <= 5700)
  VAR_5 = VAR_3->tx_isolation_med_band;
 else
  VAR_5 = VAR_3->tx_isolation_hi_band;

 VAR_4[0] = ((VAR_5 - 26) / 12) << 12;
 VAR_4[1] = VAR_4[0] + 0x1000;
 VAR_4[2] = VAR_4[0] + 0x2000;

 FUNC_3(VAR_1, FUNC_0(13, 0), 3, VAR_4);
 FUNC_3(VAR_1, FUNC_0(12, 0), 3, VAR_4);
}
