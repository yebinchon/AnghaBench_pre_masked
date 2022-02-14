
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_softc {int sc_mtx; int sc_stp; } ;
typedef int ifnet_t ;


 int FUNC_0 (struct bridge_softc*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bridge_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bridge_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct bridge_softc*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(ifnet_t VAR_4)
{
 struct bridge_softc *VAR_5 = (struct bridge_softc *)FUNC_6(VAR_4);





 if (FUNC_1(VAR_5)) {

  FUNC_2(VAR_5);
 }

 FUNC_8(&VAR_1);
 FUNC_0(VAR_5, VAR_3);
 FUNC_9(&VAR_1);

 FUNC_5(VAR_4);

 FUNC_7(&VAR_5->sc_mtx, VAR_2);
 FUNC_4(&VAR_0, VAR_5);
}
