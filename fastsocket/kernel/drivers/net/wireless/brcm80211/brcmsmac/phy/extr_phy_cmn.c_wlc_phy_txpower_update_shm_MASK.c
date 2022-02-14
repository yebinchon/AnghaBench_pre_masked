
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct brcms_phy {int tx_power_min; int hwpwr_txcur; int* tx_power_offset; TYPE_1__* sh; scalar_t__ hwpwrctrl; } ;
struct TYPE_2__ {int physhim; int clk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int,int) ;

void FUNC_5(struct brcms_phy *VAR_11)
{
 int VAR_12;
 if (FUNC_0(VAR_11))
  return;

 if (!VAR_11->sh->clk)
  return;

 if (VAR_11->hwpwrctrl) {
  u16 VAR_13;

  FUNC_4(VAR_11->sh->physhim, VAR_5, 63);
  FUNC_4(VAR_11->sh->physhim, VAR_6,
         1 << VAR_8);

  FUNC_4(VAR_11->sh->physhim, VAR_7,
         VAR_11->tx_power_min << VAR_8);

  FUNC_4(VAR_11->sh->physhim, VAR_4,
         VAR_11->hwpwr_txcur);

  for (VAR_12 = VAR_9; VAR_12 <= VAR_10; VAR_12++) {
   const u8 VAR_14[] = {
    0x0c, 0x12, 0x18, 0x24, 0x30, 0x48, 0x60, 0x6c
   };
   VAR_13 = FUNC_3(
    VAR_11->sh->physhim,
    VAR_14[VAR_12 - VAR_9]);
   FUNC_4(VAR_11->sh->physhim, VAR_13 + 6,
          VAR_11->tx_power_offset[VAR_12]);
   FUNC_4(VAR_11->sh->physhim, VAR_13 + 14,
          -(VAR_11->tx_power_offset[VAR_12] / 2));
  }

  FUNC_2(VAR_11->sh->physhim, VAR_1, VAR_2,
          VAR_2, VAR_0);
 } else {
  int VAR_15;

  for (VAR_15 = VAR_9; VAR_15 <= VAR_10; VAR_15++)
   VAR_11->tx_power_offset[VAR_15] =
    (u8) FUNC_1(VAR_11->tx_power_offset[VAR_15], 8);
  FUNC_4(VAR_11->sh->physhim, VAR_3,
         (u16)
         ((VAR_11->tx_power_offset[VAR_9]
           + 7) >> 3));
 }
}
