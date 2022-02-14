
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bdc_func; struct bridge_softc* bdc_sc; } ;
struct bridge_softc {int sc_flags; int sc_brtcnt; int sc_rthash_size; TYPE_1__ sc_resize_call; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct bridge_softc *VAR_4)
{
 FUNC_0(VAR_4);

 if ((VAR_4->sc_flags & VAR_0) || (VAR_4->sc_flags & VAR_1))
  return;




 if (VAR_4->sc_brtcnt < VAR_4->sc_rthash_size * 4)
  return;



 if (VAR_4->sc_rthash_size >= VAR_2)
  return;

 VAR_4->sc_resize_call.bdc_sc = VAR_4;
 VAR_4->sc_resize_call.bdc_func = VAR_3;
 FUNC_1(&VAR_4->sc_resize_call);
}
