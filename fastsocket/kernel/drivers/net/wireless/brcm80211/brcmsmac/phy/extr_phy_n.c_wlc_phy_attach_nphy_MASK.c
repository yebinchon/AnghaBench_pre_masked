
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint ;
struct TYPE_8__ {int txpwrrecalc; int chanset; int calinit; int init; } ;
struct TYPE_6__ {size_t phy_corenum; int phy_rev; } ;
struct brcms_phy {int phyhang_avoid; int nphy_gband_spurwar_en; int nphy_aband_spurwar_en; int nphy_gband_spurwar2_en; int nphy_rxcalparams; int nphy_gain_boost; int nphy_elna_gain_config; int radio_is_on; scalar_t__ nphy_txpwrctrl; int hwpwrctrl_capable; TYPE_4__ pi_fptr; TYPE_3__* nphy_txpwrindex; TYPE_2__ pubpi; int mphase_txcal_numcmds; int mphase_cal_phase_id; int nphy_perical; void* phy_scraminit; void* nphy_txrx_chain; void* n_preamble_override; TYPE_1__* sh; } ;
struct TYPE_7__ {void* index; } ;
struct TYPE_5__ {int boardflags2; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct brcms_phy*) ;
 int FUNC_4 (struct brcms_phy*) ;

bool FUNC_5(struct brcms_phy *VAR_12)
{
 uint VAR_13;

 if (FUNC_0(VAR_12->pubpi.phy_rev, 3) && FUNC_2(VAR_12->pubpi.phy_rev, 6))
  VAR_12->phyhang_avoid = 1;

 if (FUNC_0(VAR_12->pubpi.phy_rev, 3) && FUNC_2(VAR_12->pubpi.phy_rev, 7)) {
  VAR_12->nphy_gband_spurwar_en = 1;
  if (VAR_12->sh->boardflags2 & VAR_2)
   VAR_12->nphy_aband_spurwar_en = 1;
 }
 if (FUNC_0(VAR_12->pubpi.phy_rev, 6) && FUNC_2(VAR_12->pubpi.phy_rev, 7)) {
  if (VAR_12->sh->boardflags2 & VAR_1)
   VAR_12->nphy_gband_spurwar2_en = 1;
 }

 VAR_12->n_preamble_override = VAR_0;
 if (FUNC_1(VAR_12->pubpi.phy_rev, 3) || FUNC_1(VAR_12->pubpi.phy_rev, 4))
  VAR_12->n_preamble_override = VAR_3;

 VAR_12->nphy_txrx_chain = VAR_0;
 VAR_12->phy_scraminit = VAR_0;

 VAR_12->nphy_rxcalparams = 0x010100B5;

 VAR_12->nphy_perical = VAR_6;
 VAR_12->mphase_cal_phase_id = VAR_4;
 VAR_12->mphase_txcal_numcmds = VAR_5;

 VAR_12->nphy_gain_boost = 1;
 VAR_12->nphy_elna_gain_config = 0;
 VAR_12->radio_is_on = 0;

 for (VAR_13 = 0; VAR_13 < VAR_12->pubpi.phy_corenum; VAR_13++)
  VAR_12->nphy_txpwrindex[VAR_13].index = VAR_0;

 FUNC_4(VAR_12);
 if (VAR_12->nphy_txpwrctrl == VAR_7)
  VAR_12->hwpwrctrl_capable = 1;

 VAR_12->pi_fptr.init = VAR_10;
 VAR_12->pi_fptr.calinit = VAR_8;
 VAR_12->pi_fptr.chanset = VAR_9;
 VAR_12->pi_fptr.txpwrrecalc = VAR_11;

 if (!FUNC_3(VAR_12))
  return 0;

 return 1;
}
