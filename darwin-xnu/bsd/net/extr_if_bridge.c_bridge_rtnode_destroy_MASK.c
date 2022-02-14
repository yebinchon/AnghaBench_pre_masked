
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bridge_softc {int sc_brtcnt; } ;
struct bridge_rtnode {TYPE_1__* brt_dst; } ;
struct TYPE_2__ {int bif_addrcnt; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int FUNC_1 (struct bridge_rtnode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct bridge_rtnode*) ;

__attribute__((used)) static void
FUNC_3(struct bridge_softc *VAR_3, struct bridge_rtnode *VAR_4)
{
 FUNC_0(VAR_3);

 FUNC_1(VAR_4, VAR_1);

 FUNC_1(VAR_4, VAR_2);
 VAR_3->sc_brtcnt--;
 VAR_4->brt_dst->bif_addrcnt--;
 FUNC_2(VAR_0, VAR_4);
}
