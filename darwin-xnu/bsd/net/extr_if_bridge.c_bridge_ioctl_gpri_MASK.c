
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbrparam {int ifbrp_prio; } ;
struct bstp_state {int bs_bridge_priority; } ;
struct bridge_softc {struct bstp_state sc_stp; } ;


 int FUNC_0 (struct bridge_softc*) ;

__attribute__((used)) static int
FUNC_1(struct bridge_softc *VAR_0, void *VAR_1)
{
 struct ifbrparam *VAR_2 = VAR_1;
 struct bstp_state *VAR_3 = &VAR_0->sc_stp;

 if (!FUNC_0(VAR_0)) {
  return (0);
 }
 VAR_2->ifbrp_prio = VAR_3->bs_bridge_priority;
 return (0);
}
