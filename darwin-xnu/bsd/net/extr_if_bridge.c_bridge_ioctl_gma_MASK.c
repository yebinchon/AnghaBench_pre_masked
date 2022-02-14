
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbrparam {int ifbrp_maxage; } ;
struct bstp_state {int bs_bridge_max_age; } ;
struct bridge_softc {struct bstp_state sc_stp; } ;


 int VAR_0 ;
 int FUNC_0 (struct bridge_softc*) ;

__attribute__((used)) static int
FUNC_1(struct bridge_softc *VAR_1, void *VAR_2)
{
 struct ifbrparam *VAR_3;
 struct bstp_state *VAR_4;

 if (!FUNC_0(VAR_1)) {
  return (VAR_0);
 }
 VAR_3 = VAR_2;
 VAR_4 = &VAR_1->sc_stp;
 VAR_3->ifbrp_maxage = VAR_4->bs_bridge_max_age >> 8;
 return (0);
}
