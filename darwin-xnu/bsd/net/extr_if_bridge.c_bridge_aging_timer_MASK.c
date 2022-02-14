
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; } ;
struct TYPE_6__ {void (* bdc_func ) (struct bridge_softc*) ;TYPE_1__ bdc_ts; struct bridge_softc* bdc_sc; } ;
struct bridge_softc {int sc_flags; TYPE_3__ sc_aging_timer; TYPE_2__* sc_ifp; } ;
struct TYPE_5__ {int if_flags; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bridge_softc*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(struct bridge_softc *VAR_3)
{
 FUNC_0(VAR_3);

 FUNC_1(VAR_3);

 if ((VAR_3->sc_ifp->if_flags & VAR_0) &&
     (VAR_3->sc_flags & VAR_1) == 0) {
  VAR_3->sc_aging_timer.bdc_sc = VAR_3;
  VAR_3->sc_aging_timer.bdc_func = FUNC_3;
  VAR_3->sc_aging_timer.bdc_ts.tv_sec = VAR_2;
  FUNC_2(&VAR_3->sc_aging_timer);
 }
}
