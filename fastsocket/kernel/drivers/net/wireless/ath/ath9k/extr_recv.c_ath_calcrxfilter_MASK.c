
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int rxfilter; } ;
struct ath_softc {int nvifs; TYPE_5__* sc_ah; TYPE_2__ rx; TYPE_1__* hw; } ;
struct TYPE_8__ {scalar_t__ macVersion; } ;
struct TYPE_10__ {scalar_t__ opmode; TYPE_3__ hw_version; scalar_t__ is_monitoring; } ;
struct TYPE_9__ {scalar_t__ radar_enabled; } ;
struct TYPE_6__ {TYPE_4__ conf; } ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;

u32 FUNC_2(struct ath_softc *VAR_22)
{
 u32 VAR_23;

 VAR_23 = VAR_14 | VAR_2
  | VAR_6;


 if (VAR_22->hw->conf.radar_enabled)
  VAR_23 |= VAR_10 | VAR_9;

 if (VAR_22->rx.rxfilter & VAR_18)
  VAR_23 |= VAR_11;






 if (VAR_22->sc_ah->is_monitoring)
  VAR_23 |= VAR_12;

 if (VAR_22->rx.rxfilter & VAR_16)
  VAR_23 |= VAR_5;

 if ((VAR_22->sc_ah->opmode == VAR_21) &&
     (VAR_22->nvifs <= 1) &&
     !(VAR_22->rx.rxfilter & VAR_15))
  VAR_23 |= VAR_8;
 else
  VAR_23 |= VAR_3;

 if ((VAR_22->sc_ah->opmode == VAR_20) ||
     (VAR_22->rx.rxfilter & VAR_19))
  VAR_23 |= VAR_13;

 if (FUNC_1(&VAR_22->hw->conf))
  VAR_23 |= VAR_4;

 if (VAR_22->nvifs > 1 || (VAR_22->rx.rxfilter & VAR_17)) {

  if (VAR_22->sc_ah->hw_version.macVersion <= VAR_0)
   VAR_23 |= VAR_12;
  VAR_23 |= VAR_7;
 }

 if (FUNC_0(VAR_22->sc_ah))
  VAR_23 |= VAR_1;

 return VAR_23;

}
