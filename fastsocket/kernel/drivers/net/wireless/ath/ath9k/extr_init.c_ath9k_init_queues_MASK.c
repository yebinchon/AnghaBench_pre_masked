
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * txq_max_pending; TYPE_2__** txq_map; } ;
struct TYPE_5__ {int cabqReadytime; } ;
struct TYPE_8__ {void* cabq; int beaconq; } ;
struct ath_softc {TYPE_3__ tx; TYPE_1__ config; TYPE_4__ beacon; int sc_ah; } ;
struct TYPE_6__ {int mac80211_qnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 void* FUNC_2 (struct ath_softc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ath_softc *VAR_5)
{
 int VAR_6 = 0;

 VAR_5->beacon.beaconq = FUNC_0(VAR_5->sc_ah);
 VAR_5->beacon.cabq = FUNC_2(VAR_5, VAR_0, 0);

 VAR_5->config.cabqReadytime = VAR_2;
 FUNC_1(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5->tx.txq_map[VAR_6] = FUNC_2(VAR_5, VAR_1, VAR_6);
  VAR_5->tx.txq_map[VAR_6]->mac80211_qnum = VAR_6;
  VAR_5->tx.txq_max_pending[VAR_6] = VAR_3;
 }
 return 0;
}
