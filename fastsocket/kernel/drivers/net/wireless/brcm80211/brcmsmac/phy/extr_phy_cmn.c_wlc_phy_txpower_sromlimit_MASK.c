
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u8 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int min_txpower; int* tx_srom_max_rate_2g; int* hwtxpwr; int* tx_srom_max_rate_5g_mid; int* tx_srom_max_rate_5g_hi; int* tx_srom_max_rate_5g_low; } ;
struct TYPE_3__ {scalar_t__ chan; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_2 (struct brcms_phy*,scalar_t__,int*,int) ;

void
FUNC_3(struct brcms_phy_pub *VAR_12, uint VAR_13, u8 *VAR_14,
     u8 *VAR_15, int VAR_16)
{
 struct brcms_phy *VAR_17 = (struct brcms_phy *) VAR_12;
 uint VAR_18;

 *VAR_14 = VAR_17->min_txpower * VAR_0;

 if (FUNC_1(VAR_17)) {
  if (VAR_16 < 0)
   VAR_16 = VAR_9;
  FUNC_2(VAR_17, VAR_13, VAR_15,
         (u8) VAR_16);

 } else if ((VAR_13 <= VAR_2)) {
  if (VAR_16 < 0)
   VAR_16 = VAR_9;
  *VAR_15 = VAR_17->tx_srom_max_rate_2g[VAR_16];
 } else {

  *VAR_15 = VAR_1;

  if (VAR_16 < 0)
   VAR_16 = VAR_10;

  for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_11); VAR_18++) {
   if (VAR_13 == VAR_11[VAR_18].chan)
    break;
  }

  if (VAR_17->hwtxpwr) {
   *VAR_15 = VAR_17->hwtxpwr[VAR_18];
  } else {

   if ((VAR_18 >= VAR_5) && (VAR_18 <= VAR_8))
    *VAR_15 =
        VAR_17->tx_srom_max_rate_5g_mid[VAR_16];
   if ((VAR_18 >= VAR_3)
       && (VAR_18 <= VAR_6))
    *VAR_15 =
        VAR_17->tx_srom_max_rate_5g_hi[VAR_16];
   if ((VAR_18 >= VAR_4) && (VAR_18 <= VAR_7))
    *VAR_15 =
        VAR_17->tx_srom_max_rate_5g_low[VAR_16];
  }
 }
}
