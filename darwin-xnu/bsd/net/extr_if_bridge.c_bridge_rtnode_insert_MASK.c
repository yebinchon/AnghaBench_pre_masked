
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bridge_softc {int sc_brtcnt; int sc_rtlist; } ;
struct bridge_rtnode {int dummy; } ;


 int FUNC_0 (int *,struct bridge_rtnode*,int ) ;
 int FUNC_1 (struct bridge_softc*) ;
 int FUNC_2 (struct bridge_softc*,struct bridge_rtnode*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct bridge_softc *VAR_1, struct bridge_rtnode *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);

 FUNC_0(&VAR_1->sc_rtlist, VAR_2, VAR_0);
 VAR_1->sc_brtcnt++;

 FUNC_1(VAR_1);

 return (0);
}
