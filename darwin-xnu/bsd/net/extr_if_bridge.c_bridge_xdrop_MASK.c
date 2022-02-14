
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_softc {int sc_iflist_xcnt; } ;


 int FUNC_0 (struct bridge_softc*) ;

__attribute__((used)) static void
FUNC_1(struct bridge_softc *VAR_0)
{
 FUNC_0(VAR_0);

 VAR_0->sc_iflist_xcnt--;
}
