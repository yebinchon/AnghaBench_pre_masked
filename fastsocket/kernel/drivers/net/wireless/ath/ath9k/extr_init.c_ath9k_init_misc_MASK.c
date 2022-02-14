
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int short_repeat; int count; int endless; int period; int fft_period; scalar_t__ enabled; } ;
struct TYPE_12__ {int count; } ;
struct TYPE_10__ {int ** bslot; int slottime; } ;
struct TYPE_9__ {int txpowlimit; } ;
struct ath_softc {TYPE_6__ spec_config; TYPE_5__ ant_comb; TYPE_7__* sc_ah; TYPE_3__ beacon; TYPE_2__ config; int last_rssi; } ;
struct TYPE_8__ {int timer; } ;
struct ath_common {int bssidmask; TYPE_1__ ani; } ;
struct TYPE_11__ {int hw_caps; } ;
struct TYPE_14__ {TYPE_4__ caps; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ath_common* FUNC_1 (TYPE_7__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_8)
{
 struct ath_common *VAR_9 = FUNC_1(VAR_8->sc_ah);
 int VAR_10 = 0;

 FUNC_3(&VAR_9->ani.timer, VAR_6, (unsigned long)VAR_8);

 VAR_8->last_rssi = VAR_3;
 VAR_8->config.txpowlimit = VAR_4;
 FUNC_2(VAR_9->bssidmask, VAR_7, VAR_5);
 VAR_8->beacon.slottime = VAR_1;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->beacon.bslot); VAR_10++)
  VAR_8->beacon.bslot[VAR_10] = ((void*)0);

 if (VAR_8->sc_ah->caps.hw_caps & VAR_0)
  VAR_8->ant_comb.count = VAR_2;

 VAR_8->spec_config.enabled = 0;
 VAR_8->spec_config.short_repeat = 1;
 VAR_8->spec_config.count = 8;
 VAR_8->spec_config.endless = 0;
 VAR_8->spec_config.period = 0xFF;
 VAR_8->spec_config.fft_period = 0xF;
}
