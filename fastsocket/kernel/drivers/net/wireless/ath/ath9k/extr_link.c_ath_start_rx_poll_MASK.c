
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int beacon_interval; } ;
struct ath_softc {TYPE_1__ cur_beacon_conf; int rx_poll_timer; int sc_flags; int sc_ah; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct ath_softc *VAR_2, u8 VAR_3)
{
 if (!FUNC_0(VAR_2->sc_ah))
  return;

 if (!FUNC_3(VAR_0, &VAR_2->sc_flags))
  return;

 FUNC_1(&VAR_2->rx_poll_timer, VAR_1 + FUNC_2
    (VAR_3 * VAR_2->cur_beacon_conf.beacon_interval));
}
