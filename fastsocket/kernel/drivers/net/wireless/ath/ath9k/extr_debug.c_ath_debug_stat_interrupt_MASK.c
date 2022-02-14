
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int gen_timer; int mci; int tsfoor; int dtim; int dtimsync; int cabend; int tim; int gtt; int cst; int bnr; int bmiss; int swba; int rx_keycache_miss; int rxphyerr; int txurn; int txok; int rxorn; int rxeol; int rxok; int bb_watchdog; int rxhp; int rxlp; int total; } ;
struct TYPE_9__ {TYPE_3__ istats; } ;
struct TYPE_10__ {TYPE_4__ stats; } ;
struct ath_softc {TYPE_5__ debug; TYPE_2__* sc_ah; } ;
typedef enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;
struct TYPE_6__ {int hw_caps; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

void FUNC_0(struct ath_softc *VAR_23, enum ath9k_int VAR_24)
{
 if (VAR_24)
  VAR_23->debug.stats.istats.total++;
 if (VAR_23->sc_ah->caps.hw_caps & VAR_0) {
  if (VAR_24 & VAR_15)
   VAR_23->debug.stats.istats.rxlp++;
  if (VAR_24 & VAR_13)
   VAR_23->debug.stats.istats.rxhp++;
  if (VAR_24 & VAR_1)
   VAR_23->debug.stats.istats.bb_watchdog++;
 } else {
  if (VAR_24 & VAR_11)
   VAR_23->debug.stats.istats.rxok++;
 }
 if (VAR_24 & VAR_12)
  VAR_23->debug.stats.istats.rxeol++;
 if (VAR_24 & VAR_16)
  VAR_23->debug.stats.istats.rxorn++;
 if (VAR_24 & VAR_21)
  VAR_23->debug.stats.istats.txok++;
 if (VAR_24 & VAR_22)
  VAR_23->debug.stats.istats.txurn++;
 if (VAR_24 & VAR_17)
  VAR_23->debug.stats.istats.rxphyerr++;
 if (VAR_24 & VAR_14)
  VAR_23->debug.stats.istats.rx_keycache_miss++;
 if (VAR_24 & VAR_18)
  VAR_23->debug.stats.istats.swba++;
 if (VAR_24 & VAR_2)
  VAR_23->debug.stats.istats.bmiss++;
 if (VAR_24 & VAR_3)
  VAR_23->debug.stats.istats.bnr++;
 if (VAR_24 & VAR_5)
  VAR_23->debug.stats.istats.cst++;
 if (VAR_24 & VAR_9)
  VAR_23->debug.stats.istats.gtt++;
 if (VAR_24 & VAR_19)
  VAR_23->debug.stats.istats.tim++;
 if (VAR_24 & VAR_4)
  VAR_23->debug.stats.istats.cabend++;
 if (VAR_24 & VAR_7)
  VAR_23->debug.stats.istats.dtimsync++;
 if (VAR_24 & VAR_6)
  VAR_23->debug.stats.istats.dtim++;
 if (VAR_24 & VAR_20)
  VAR_23->debug.stats.istats.tsfoor++;
 if (VAR_24 & VAR_10)
  VAR_23->debug.stats.istats.mci++;
 if (VAR_24 & VAR_8)
  VAR_23->debug.stats.istats.gen_timer++;
}
