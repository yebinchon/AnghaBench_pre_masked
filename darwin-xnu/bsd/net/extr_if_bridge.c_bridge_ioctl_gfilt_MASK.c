
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbrparam {int ifbrp_filter; } ;
struct bridge_softc {int sc_filter_flags; } ;



__attribute__((used)) static int
FUNC_0(struct bridge_softc *VAR_0, void *VAR_1)
{
 struct ifbrparam *VAR_2 = VAR_1;

 VAR_2->ifbrp_filter = VAR_0->sc_filter_flags;

 return (0);
}
