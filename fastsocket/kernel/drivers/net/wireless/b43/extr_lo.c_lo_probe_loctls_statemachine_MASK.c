
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {int trsw_rx_gain; int pga_gain; int lna_gain; } ;
struct b43_loctl {scalar_t__ i; scalar_t__ q; } ;
struct b43_lo_g_statemachine {int nr_measured; int state_val_multiplier; int lowest_feedth; int current_state; struct b43_loctl min_loctl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,struct b43_loctl*) ;
 scalar_t__ FUNC_2 (struct b43_phy*) ;
 int FUNC_3 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_4 (struct b43_wldev*,int,scalar_t__) ;
 int FUNC_5 (struct b43_wldev*,struct b43_loctl*,struct b43_lo_g_statemachine*) ;
 int FUNC_6 (struct b43_loctl*,struct b43_loctl*,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_0,
      struct b43_loctl *VAR_1,
      int *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_0->phy;
 struct b43_phy_g *VAR_4 = VAR_3->g;
 struct b43_lo_g_statemachine VAR_5;
 u16 VAR_6;
 int VAR_7;
 struct b43_loctl VAR_8;
 int VAR_9 = 1, VAR_10 = 0;

 VAR_5.nr_measured = 0;
 VAR_5.state_val_multiplier = 1;
 if (FUNC_2(VAR_3))
  VAR_5.state_val_multiplier = 3;

 FUNC_6(&VAR_5.min_loctl, VAR_1, sizeof(struct b43_loctl));
 if (FUNC_2(VAR_3))
  VAR_9 = 4;
 do {
  FUNC_1(VAR_0, &VAR_5.min_loctl);
  VAR_6 = FUNC_3(VAR_0, VAR_4->lna_gain,
      VAR_4->pga_gain,
      VAR_4->trsw_rx_gain);
  if (VAR_6 < 0x258) {
   if (VAR_6 >= 0x12C)
    *VAR_2 += 6;
   else
    *VAR_2 += 3;
   VAR_6 = FUNC_3(VAR_0, VAR_4->lna_gain,
       VAR_4->pga_gain,
       VAR_4->trsw_rx_gain);
  }
  VAR_5.lowest_feedth = VAR_6;

  VAR_5.current_state = 0;
  do {
   FUNC_0(!
        (VAR_5.current_state >= 0
         && VAR_5.current_state <= 8));
   FUNC_6(&VAR_8, &VAR_5.min_loctl,
          sizeof(struct b43_loctl));
   VAR_7 =
       FUNC_5(VAR_0, &VAR_8, &VAR_5);
   if (!VAR_7)
    break;
   if ((VAR_8.i == VAR_5.min_loctl.i) &&
       (VAR_8.q == VAR_5.min_loctl.q))
    break;
   FUNC_6(&VAR_5.min_loctl, &VAR_8,
          sizeof(struct b43_loctl));
   VAR_5.nr_measured++;
  } while (VAR_5.nr_measured < 24);
  FUNC_6(VAR_1, &VAR_5.min_loctl, sizeof(struct b43_loctl));

  if (FUNC_2(VAR_3)) {
   if (VAR_5.lowest_feedth > 0x1194)
    *VAR_2 -= 6;
   else if (VAR_5.lowest_feedth < 0x5DC)
    *VAR_2 += 3;
   if (VAR_10 == 0) {
    if (VAR_5.lowest_feedth <= 0x5DC) {
     VAR_5.state_val_multiplier = 1;
     VAR_10++;
    } else
     VAR_5.state_val_multiplier = 2;
   } else if (VAR_10 == 2)
    VAR_5.state_val_multiplier = 1;
  }
  FUNC_4(VAR_0, *VAR_2,
           FUNC_2(VAR_3));
 } while (++VAR_10 < VAR_9);
}
