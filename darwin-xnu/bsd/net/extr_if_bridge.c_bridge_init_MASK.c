
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_softc; } ;
struct bridge_softc {int sc_stp; } ;
typedef scalar_t__ errno_t ;


 int FUNC_0 (struct bridge_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bridge_softc*) ;
 scalar_t__ FUNC_2 (struct bridge_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ifnet*) ;
 scalar_t__ FUNC_5 (struct ifnet*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_1)
{
 struct bridge_softc *VAR_2 = (struct bridge_softc *)VAR_1->if_softc;
 errno_t VAR_3;

 FUNC_0(VAR_2);

 if ((FUNC_4(VAR_1) & VAR_0))
  return (0);

 VAR_3 = FUNC_5(VAR_1, VAR_0, VAR_0);

 if (FUNC_2(VAR_2)) {




  FUNC_1(VAR_2);




 }
 return (VAR_3);
}
