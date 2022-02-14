
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct b43_phy {struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {int trsw_rx_gain; int pga_gain; int lna_gain; } ;
struct b43_loctl {int i; int q; } ;
struct b43_lo_g_statemachine {int current_state; int state_val_multiplier; scalar_t__ lowest_feedth; int nr_measured; } ;
typedef int prev_loctl ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct b43_wldev*,struct b43_loctl*) ;
 int FUNC_3 (struct b43_phy*) ;
 scalar_t__ FUNC_4 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_5 (struct b43_loctl*,struct b43_loctl*,int) ;

__attribute__((used)) static int FUNC_6(struct b43_wldev *VAR_0,
        struct b43_loctl *VAR_1,
        struct b43_lo_g_statemachine *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_0->phy;
 struct b43_phy_g *VAR_4 = VAR_3->g;
 struct b43_loctl VAR_5;
 struct b43_loctl VAR_6;
 struct b43_loctl VAR_7 = {
  .i = -100,
  .q = -100,
 };
 int VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = 0;
 u16 VAR_12;

 static const struct b43_loctl VAR_13[] = {
  {.i = 1,.q = 1,},
  {.i = 1,.q = 0,},
  {.i = 1,.q = -1,},
  {.i = 0,.q = -1,},
  {.i = -1,.q = -1,},
  {.i = -1,.q = 0,},
  {.i = -1,.q = 1,},
  {.i = 0,.q = 1,},
 };

 if (VAR_2->current_state == 0) {
  VAR_9 = 1;
  VAR_10 = 8;
 } else if (VAR_2->current_state % 2 == 0) {
  VAR_9 = VAR_2->current_state - 1;
  VAR_10 = VAR_2->current_state + 1;
 } else {
  VAR_9 = VAR_2->current_state - 2;
  VAR_10 = VAR_2->current_state + 2;
 }
 if (VAR_9 < 1)
  VAR_9 += 8;
 if (VAR_10 > 8)
  VAR_10 -= 8;

 FUNC_5(&VAR_6, VAR_1, sizeof(struct b43_loctl));
 VAR_8 = VAR_9;
 VAR_2->current_state = VAR_8;
 while (1) {
  FUNC_0(!(VAR_8 >= 1 && VAR_8 <= 8));
  FUNC_5(&VAR_5, &VAR_6, sizeof(struct b43_loctl));
  VAR_5.i += VAR_13[VAR_8 - 1].i * VAR_2->state_val_multiplier;
  VAR_5.q += VAR_13[VAR_8 - 1].q * VAR_2->state_val_multiplier;
  if ((VAR_5.i != VAR_7.i ||
       VAR_5.q != VAR_7.q) &&
      (FUNC_1(VAR_5.i) <= 16 && FUNC_1(VAR_5.q) <= 16)) {
   FUNC_2(VAR_0, &VAR_5);
   VAR_12 = FUNC_4(VAR_0, VAR_4->lna_gain,
       VAR_4->pga_gain,
       VAR_4->trsw_rx_gain);
   if (VAR_12 < VAR_2->lowest_feedth) {
    FUNC_5(VAR_1, &VAR_5,
           sizeof(struct b43_loctl));
    VAR_11 = 1;
    VAR_2->lowest_feedth = VAR_12;
    if ((VAR_2->nr_measured < 2) &&
        !FUNC_3(VAR_3))
     break;
   }
  }
  FUNC_5(&VAR_7, &VAR_5, sizeof(VAR_7));
  if (VAR_8 == VAR_10)
   break;
  if (VAR_8 == 8)
   VAR_8 = 1;
  else
   VAR_8++;
  VAR_2->current_state = VAR_8;
 }

 return VAR_11;
}
