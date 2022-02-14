
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbrparam {int ifbrp_csize; } ;
struct bridge_softc {int sc_brtmax; } ;


 scalar_t__ FUNC_0 (struct bridge_softc*) ;
 int FUNC_1 (struct bridge_softc*) ;

__attribute__((used)) static int
FUNC_2(struct bridge_softc *VAR_0, void *VAR_1)
{
 struct ifbrparam *VAR_2 = VAR_1;

 VAR_0->sc_brtmax = VAR_2->ifbrp_csize;
 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_0);
 }
 return (0);
}
