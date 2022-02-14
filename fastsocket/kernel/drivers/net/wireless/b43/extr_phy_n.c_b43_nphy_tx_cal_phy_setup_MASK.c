
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int rev; TYPE_1__* n; } ;
struct b43_wldev {int wl; TYPE_2__ phy; } ;
struct TYPE_3__ {int* tx_rx_cal_phy_saveregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int,int) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int ,int,int) ;
 int FUNC_7 (struct b43_wldev*,int ) ;
 int FUNC_8 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct b43_wldev *VAR_13)
{
 u16 *VAR_14 = VAR_13->phy.n->tx_rx_cal_phy_saveregs;
 u16 VAR_15;

 VAR_14[0] = FUNC_7(VAR_13, VAR_0);
 VAR_14[1] = FUNC_7(VAR_13, VAR_1);
 if (VAR_13->phy.rev >= 3) {
  FUNC_6(VAR_13, VAR_0, 0xF0FF, 0x0A00);
  FUNC_6(VAR_13, VAR_1, 0xF0FF, 0x0A00);

  VAR_15 = FUNC_7(VAR_13, VAR_3);
  VAR_14[2] = VAR_15;
  FUNC_8(VAR_13, VAR_3, VAR_15 | 0x0600);

  VAR_15 = FUNC_7(VAR_13, VAR_2);
  VAR_14[3] = VAR_15;
  FUNC_8(VAR_13, VAR_2, VAR_15 | 0x0600);

  VAR_14[4] = FUNC_7(VAR_13, VAR_4);
  FUNC_5(VAR_13, VAR_4,
        ~VAR_5 & 0xFFFF);

  VAR_15 = FUNC_3(VAR_13, FUNC_0(8, 3));
  VAR_14[5] = VAR_15;
  FUNC_4(VAR_13, FUNC_0(8, 3), 0);

  VAR_15 = FUNC_3(VAR_13, FUNC_0(8, 19));
  VAR_14[6] = VAR_15;
  FUNC_4(VAR_13, FUNC_0(8, 19), 0);
  VAR_14[7] = FUNC_7(VAR_13, VAR_8);
  VAR_14[8] = FUNC_7(VAR_13, VAR_9);

  FUNC_2(VAR_13, VAR_11, 1, 3);
  FUNC_2(VAR_13, VAR_12, 2, 1);
  FUNC_2(VAR_13, VAR_12, 8, 2);

  VAR_14[9] = FUNC_7(VAR_13, VAR_6);
  VAR_14[10] = FUNC_7(VAR_13, VAR_7);
  FUNC_5(VAR_13, VAR_6, ~0x0001);
  FUNC_5(VAR_13, VAR_7, ~0x0001);
 } else {
  FUNC_6(VAR_13, VAR_0, 0x0FFF, 0xA000);
  FUNC_6(VAR_13, VAR_1, 0x0FFF, 0xA000);
  VAR_15 = FUNC_7(VAR_13, VAR_2);
  VAR_14[2] = VAR_15;
  FUNC_8(VAR_13, VAR_2, VAR_15 | 0x3000);
  VAR_15 = FUNC_3(VAR_13, FUNC_0(8, 2));
  VAR_14[3] = VAR_15;
  VAR_15 |= 0x2000;
  FUNC_4(VAR_13, FUNC_0(8, 2), VAR_15);
  VAR_15 = FUNC_3(VAR_13, FUNC_0(8, 18));
  VAR_14[4] = VAR_15;
  VAR_15 |= 0x2000;
  FUNC_4(VAR_13, FUNC_0(8, 18), VAR_15);
  VAR_14[5] = FUNC_7(VAR_13, VAR_8);
  VAR_14[6] = FUNC_7(VAR_13, VAR_9);
  if (FUNC_1(VAR_13->wl) == VAR_10)
   VAR_15 = 0x0180;
  else
   VAR_15 = 0x0120;
  FUNC_8(VAR_13, VAR_8, VAR_15);
  FUNC_8(VAR_13, VAR_9, VAR_15);
 }
}
