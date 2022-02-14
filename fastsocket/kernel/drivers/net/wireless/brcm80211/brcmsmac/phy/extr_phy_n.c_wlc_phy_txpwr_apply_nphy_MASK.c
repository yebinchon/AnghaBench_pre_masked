
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int phy_rev; } ;
struct brcms_phy {int cck2gpo; int ofdm2gpo; int* mcs2gpo; int ofdm5gpo; int* mcs5gpo; int ofdm5glpo; int* mcs5glpo; int ofdm5ghpo; int* mcs5ghpo; TYPE_2__ pubpi; int * tx_srom_max_rate_5g_hi; int bw405ghpo; int stbc5ghpo; int cdd5ghpo; TYPE_1__* nphy_pwrctrl_info; int * tx_srom_max_rate_5g_low; int bw405glpo; int stbc5glpo; int cdd5glpo; int * tx_srom_max_rate_5g_mid; int bw405gpo; int stbc5gpo; int cdd5gpo; int * tx_srom_max_rate_2g; int bw402gpo; int stbc2gpo; int cdd2gpo; } ;
struct TYPE_3__ {int max_pwr_5gh; int max_pwr_5gl; int max_pwr_5gm; int max_pwr_2g; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 size_t VAR_29 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,size_t,int ,size_t) ;
 int FUNC_3 (int *,int ,int ,size_t) ;
 int FUNC_4 (int *,int ,size_t,int) ;
 int FUNC_5 (int *,int*,int ,size_t,int) ;

void FUNC_6(struct brcms_phy *VAR_30)
{
 uint VAR_31, VAR_32, VAR_33;
 u8 VAR_34 = 0, VAR_35 = 0, VAR_36 = 0;
 u8 VAR_37 = 0;
 u16 VAR_38[2], *VAR_39 = ((void*)0);
 u8 *VAR_40 = ((void*)0);

 for (VAR_33 = 0; VAR_33 < (VAR_0 + VAR_1);
      VAR_33++) {
  switch (VAR_33) {
  case 0:

   VAR_37 = FUNC_1(VAR_30->nphy_pwrctrl_info[0].max_pwr_2g,
       VAR_30->nphy_pwrctrl_info[1].max_pwr_2g);

   VAR_38[0] = VAR_30->cck2gpo;
   FUNC_5(VAR_30->tx_srom_max_rate_2g,
       VAR_38,
       VAR_37,
       VAR_3,
       VAR_16);

   VAR_38[0] = (u16) (VAR_30->ofdm2gpo & 0xffff);
   VAR_38[1] =
    (u16) (VAR_30->ofdm2gpo >> 16) & 0xffff;

   VAR_39 = VAR_30->mcs2gpo;

   VAR_35 = VAR_30->cdd2gpo;
   VAR_36 = VAR_30->stbc2gpo;
   VAR_34 = VAR_30->bw402gpo;

   VAR_40 = VAR_30->tx_srom_max_rate_2g;
   break;
  case 1:

   VAR_37 = FUNC_1(VAR_30->nphy_pwrctrl_info[0].max_pwr_5gm,
       VAR_30->nphy_pwrctrl_info[1].max_pwr_5gm);

   VAR_38[0] = (u16) (VAR_30->ofdm5gpo & 0xffff);
   VAR_38[1] =
    (u16) (VAR_30->ofdm5gpo >> 16) & 0xffff;

   VAR_39 = VAR_30->mcs5gpo;

   VAR_35 = VAR_30->cdd5gpo;
   VAR_36 = VAR_30->stbc5gpo;
   VAR_34 = VAR_30->bw405gpo;

   VAR_40 = VAR_30->tx_srom_max_rate_5g_mid;
   break;
  case 2:

   VAR_37 = FUNC_1(VAR_30->nphy_pwrctrl_info[0].max_pwr_5gl,
       VAR_30->nphy_pwrctrl_info[1].max_pwr_5gl);

   VAR_38[0] = (u16) (VAR_30->ofdm5glpo & 0xffff);
   VAR_38[1] =
    (u16) (VAR_30->ofdm5glpo >> 16) & 0xffff;

   VAR_39 = VAR_30->mcs5glpo;

   VAR_35 = VAR_30->cdd5glpo;
   VAR_36 = VAR_30->stbc5glpo;
   VAR_34 = VAR_30->bw405glpo;

   VAR_40 = VAR_30->tx_srom_max_rate_5g_low;
   break;
  case 3:

   VAR_37 = FUNC_1(VAR_30->nphy_pwrctrl_info[0].max_pwr_5gh,
       VAR_30->nphy_pwrctrl_info[1].max_pwr_5gh);

   VAR_38[0] = (u16) (VAR_30->ofdm5ghpo & 0xffff);
   VAR_38[1] =
    (u16) (VAR_30->ofdm5ghpo >> 16) & 0xffff;

   VAR_39 = VAR_30->mcs5ghpo;

   VAR_35 = VAR_30->cdd5ghpo;
   VAR_36 = VAR_30->stbc5ghpo;
   VAR_34 = VAR_30->bw405ghpo;

   VAR_40 = VAR_30->tx_srom_max_rate_5g_hi;
   break;
  }

  FUNC_5(VAR_40, VAR_38,
      VAR_37, VAR_12,
      VAR_25);

  FUNC_3(VAR_40,
      VAR_6,
      VAR_19,
      VAR_12);

  FUNC_5(VAR_40, VAR_39,
      VAR_37,
      VAR_4,
      VAR_17);

  if (FUNC_0(VAR_30->pubpi.phy_rev, 3))
   FUNC_4(VAR_40, VAR_35,
          VAR_4,
          VAR_17);

  FUNC_2(VAR_40,
      VAR_13,
      VAR_26,
      VAR_4);

  FUNC_5(VAR_40, VAR_39,
      VAR_37,
      VAR_7,
      VAR_20);

  if (FUNC_0(VAR_30->pubpi.phy_rev, 3))
   FUNC_4(VAR_40,
          VAR_36,
          VAR_7,
          VAR_20);

  FUNC_5(VAR_40,
      &VAR_39[2], VAR_37,
      VAR_5,
      VAR_18);

  if (VAR_2) {

   FUNC_5(VAR_40,
       &VAR_39[4],
       VAR_37,
       VAR_10,
       VAR_23);

   FUNC_2(VAR_40,
       VAR_15,
       VAR_28,
       VAR_10);

   FUNC_5(VAR_40,
       &VAR_39[4],
       VAR_37,
       VAR_8,
       VAR_21);

   FUNC_4(VAR_40, VAR_35,
          VAR_8,
          VAR_21);

   FUNC_2(VAR_40,
       VAR_14,
       VAR_27,
       VAR_8);

   FUNC_5(VAR_40,
       &VAR_39[4],
       VAR_37,
       VAR_11,
       VAR_24);

   FUNC_4(VAR_40,
          VAR_36,
          VAR_11,
          VAR_24);

   FUNC_5(VAR_40,
       &VAR_39[6],
       VAR_37,
       VAR_9,
       VAR_22);
  } else {

   for (VAR_31 = VAR_15, VAR_32 =
         VAR_12;
        VAR_31 <= VAR_22;
        VAR_31++, VAR_32++)
    VAR_40[VAR_31] =
     VAR_40[VAR_32];
  }

  if (FUNC_0(VAR_30->pubpi.phy_rev, 3))
   FUNC_4(VAR_40,
          VAR_34,
          VAR_15,
          VAR_22);

  VAR_40[VAR_29] =
   VAR_40[VAR_8];
 }

 return;
}
