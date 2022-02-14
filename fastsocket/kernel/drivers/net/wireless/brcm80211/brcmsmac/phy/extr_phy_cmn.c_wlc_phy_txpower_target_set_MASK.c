
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txpwr_limits {int * mcs_40_mimo; int * mcs_40_stbc; int * mcs_40_cdd; int * mcs_40_siso; int * mcs_20_mimo; int * mcs_20_stbc; int * mcs_20_cdd; int * mcs_20_siso; int * ofdm_40_cdd; int * ofdm_40_siso; int * ofdm_cdd; int * ofdm; int * cck; } ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {TYPE_1__* sh; int d11core; int * tx_user_target; } ;
struct TYPE_2__ {int physhim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_1 (int ,int ) ;
 int VAR_18 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*) ;

void FUNC_7(struct brcms_phy_pub *VAR_19,
    struct txpwr_limits *VAR_20)
{
 bool VAR_21 = 0;
 struct brcms_phy *VAR_22 = (struct brcms_phy *) VAR_19;

 FUNC_2(&VAR_22->tx_user_target[VAR_5],
        &VAR_20->cck[0], VAR_0);

 FUNC_2(&VAR_22->tx_user_target[VAR_14],
        &VAR_20->ofdm[0], VAR_3);
 FUNC_2(&VAR_22->tx_user_target[VAR_15],
        &VAR_20->ofdm_cdd[0], VAR_3);

 FUNC_2(&VAR_22->tx_user_target[VAR_17],
        &VAR_20->ofdm_40_siso[0], VAR_3);
 FUNC_2(&VAR_22->tx_user_target[VAR_16],
        &VAR_20->ofdm_40_cdd[0], VAR_3);

 FUNC_2(&VAR_22->tx_user_target[VAR_8],
        &VAR_20->mcs_20_siso[0], VAR_1);
 FUNC_2(&VAR_22->tx_user_target[VAR_6],
        &VAR_20->mcs_20_cdd[0], VAR_1);
 FUNC_2(&VAR_22->tx_user_target[VAR_9],
        &VAR_20->mcs_20_stbc[0], VAR_1);
 FUNC_2(&VAR_22->tx_user_target[VAR_7],
        &VAR_20->mcs_20_mimo[0], VAR_2);

 FUNC_2(&VAR_22->tx_user_target[VAR_12],
        &VAR_20->mcs_40_siso[0], VAR_1);
 FUNC_2(&VAR_22->tx_user_target[VAR_10],
        &VAR_20->mcs_40_cdd[0], VAR_1);
 FUNC_2(&VAR_22->tx_user_target[VAR_13],
        &VAR_20->mcs_40_stbc[0], VAR_1);
 FUNC_2(&VAR_22->tx_user_target[VAR_11],
        &VAR_20->mcs_40_mimo[0], VAR_2);

 if (FUNC_1(VAR_22->d11core, FUNC_0(VAR_18)) & VAR_4)
  VAR_21 = 1;

 if (VAR_21)
  FUNC_4(VAR_22->sh->physhim);

 FUNC_6(VAR_22);
 FUNC_5(VAR_22);

 if (VAR_21)
  FUNC_3(VAR_22->sh->physhim);
}
