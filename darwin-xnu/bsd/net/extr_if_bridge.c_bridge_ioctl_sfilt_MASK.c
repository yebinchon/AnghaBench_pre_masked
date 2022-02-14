
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbrparam {int ifbrp_filter; } ;
struct bridge_softc {int sc_filter_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct bridge_softc *VAR_3, void *VAR_4)
{
 struct ifbrparam *VAR_5 = VAR_4;

 if (VAR_5->ifbrp_filter & ~VAR_1)
  return (VAR_0);


 if (VAR_5->ifbrp_filter & VAR_2)
  return (VAR_0);


 VAR_3->sc_filter_flags = VAR_5->ifbrp_filter;

 return (0);
}
