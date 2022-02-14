
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_txpower_lo_control {int tx_bias; int calib_list; } ;
struct b43_phy_g {void* tssi2dbm; int tgt_idle_tssi; int* nrssi; int* nrssi_lt; int lofcal; int initval; int average_tssi; int ofdmtab_addr_direction; int interfmode; struct b43_phy_g* minlowsig; struct b43_txpower_lo_control* lo_control; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct b43_phy_g*,int,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_2->phy;
 struct b43_phy_g *VAR_4 = VAR_3->g;
 const void *VAR_5;
 int VAR_6;
 struct b43_txpower_lo_control *VAR_7;
 unsigned int VAR_8;



 VAR_5 = VAR_4->tssi2dbm;
 VAR_6 = VAR_4->tgt_idle_tssi;

 VAR_7 = VAR_4->lo_control;


 FUNC_2(VAR_4, 0, sizeof(*VAR_4));


 VAR_4->tssi2dbm = VAR_5;
 VAR_4->tgt_idle_tssi = VAR_6;
 VAR_4->lo_control = VAR_7;

 FUNC_2(VAR_4->minlowsig, 0xFF, sizeof(VAR_4->minlowsig));


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4->nrssi); VAR_8++)
  VAR_4->nrssi[VAR_8] = -1000;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4->nrssi_lt); VAR_8++)
  VAR_4->nrssi_lt[VAR_8] = VAR_8;

 VAR_4->lofcal = 0xFFFF;
 VAR_4->initval = 0xFFFF;

 VAR_4->interfmode = VAR_0;


 VAR_4->ofdmtab_addr_direction = VAR_1;

 VAR_4->average_tssi = 0xFF;


 VAR_7->tx_bias = 0xFF;
 FUNC_1(&VAR_7->calib_list);
}
