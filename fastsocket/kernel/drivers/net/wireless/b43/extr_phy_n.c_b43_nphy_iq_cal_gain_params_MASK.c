
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct nphy_txgains {int* txgm; int* pga; int* pad; int* ipa; } ;
struct nphy_iqcal_params {int txgm; int pga; int pad; int ipa; int cal_gain; int* ncorr; } ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 size_t*** VAR_1 ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_2, u16 VAR_3,
     struct nphy_txgains VAR_4,
     struct nphy_iqcal_params *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u16 VAR_9;

 if (VAR_2->phy.rev >= 3) {
  VAR_5->txgm = VAR_4.txgm[VAR_3];
  VAR_5->pga = VAR_4.pga[VAR_3];
  VAR_5->pad = VAR_4.pad[VAR_3];
  VAR_5->ipa = VAR_4.ipa[VAR_3];
  VAR_5->cal_gain = (VAR_5->txgm << 12) | (VAR_5->pga << 8) |
     (VAR_5->pad << 4) | (VAR_5->ipa);
  for (VAR_7 = 0; VAR_7 < 5; VAR_7++)
   VAR_5->ncorr[VAR_7] = 0x79;
 } else {
  VAR_9 = (VAR_4.pad[VAR_3]) | (VAR_4.pga[VAR_3] << 4) |
   (VAR_4.txgm[VAR_3] << 8);

  VAR_8 = (FUNC_0(VAR_2->wl) == VAR_0) ?
   1 : 0;
  for (VAR_6 = 0; VAR_6 < 9; VAR_6++)
   if (VAR_1[VAR_8][VAR_6][0] == VAR_9)
    break;
  VAR_6 = FUNC_1(VAR_6, 8);

  VAR_5->txgm = VAR_1[VAR_8][VAR_6][1];
  VAR_5->pga = VAR_1[VAR_8][VAR_6][2];
  VAR_5->pad = VAR_1[VAR_8][VAR_6][3];
  VAR_5->cal_gain = (VAR_5->txgm << 7) | (VAR_5->pga << 4) |
     (VAR_5->pad << 2);
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
   VAR_5->ncorr[VAR_7] = VAR_1[VAR_8][VAR_6][4 + VAR_7];
 }
}
