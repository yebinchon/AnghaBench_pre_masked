
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {int initialized; int tx_vos; int nrssi_table_delta; int rc_cal; int mintxbias; int txpwridx; int* nphy_papd_epsilon_offset; int* nphy_txpwr_idx; int radiopwr; int** stats_11b_txpower; void* phy_spuravoid; scalar_t__ phy_pabias; TYPE_2__* nphy_txpwrindex; scalar_t__ nphy_papd_skip; TYPE_1__ pubpi; } ;
struct TYPE_4__ {int index_internal; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct brcms_phy *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_4->initialized = 0;

 VAR_4->tx_vos = 0xffff;
 VAR_4->nrssi_table_delta = 0x7fffffff;
 VAR_4->rc_cal = 0xffff;
 VAR_4->mintxbias = 0xffff;
 VAR_4->txpwridx = -1;
 if (FUNC_0(VAR_4)) {
  VAR_4->phy_spuravoid = VAR_1;

  if (FUNC_1(VAR_4->pubpi.phy_rev, 3)
      && FUNC_2(VAR_4->pubpi.phy_rev, 7))
   VAR_4->phy_spuravoid = VAR_0;

  VAR_4->nphy_papd_skip = 0;
  VAR_4->nphy_papd_epsilon_offset[0] = 0xf588;
  VAR_4->nphy_papd_epsilon_offset[1] = 0xf588;
  VAR_4->nphy_txpwr_idx[0] = 128;
  VAR_4->nphy_txpwr_idx[1] = 128;
  VAR_4->nphy_txpwrindex[0].index_internal = 40;
  VAR_4->nphy_txpwrindex[1].index_internal = 40;
  VAR_4->phy_pabias = 0;
 } else {
  VAR_4->phy_spuravoid = VAR_0;
 }
 VAR_4->radiopwr = 0xffff;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
   VAR_4->stats_11b_txpower[VAR_5][VAR_6] = -1;
 }
}
