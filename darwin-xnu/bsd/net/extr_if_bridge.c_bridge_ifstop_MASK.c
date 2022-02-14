
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct bridge_softc* if_softc; } ;
struct bridge_softc {int sc_stp; int sc_aging_timer; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct bridge_softc*) ;
 int FUNC_3 (struct bridge_softc*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct ifnet *VAR_2, int VAR_3)
{
#pragma unused(disable)
 struct bridge_softc *VAR_4 = VAR_2->if_softc;

 FUNC_0(VAR_4);

 if ((FUNC_5(VAR_2) & VAR_1) == 0)
  return;

 if (FUNC_2(VAR_4)) {
  FUNC_1(&VAR_4->sc_aging_timer);





  FUNC_3(VAR_4, VAR_0);
 }
 (void) FUNC_6(VAR_2, 0, VAR_1);
}
