
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * txq; } ;
struct ath_softc {TYPE_2__* dfs_detector; int sc_ah; TYPE_1__ tx; } ;
struct TYPE_4__ {int (* exit ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_softc*,int) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath_softc*,int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct ath_softc *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (FUNC_0(VAR_1, VAR_2))
   FUNC_4(VAR_1, &VAR_1->tx.txq[VAR_2]);

 FUNC_3(VAR_1->sc_ah);
 if (VAR_1->dfs_detector != ((void*)0))
  VAR_1->dfs_detector->exit(VAR_1->dfs_detector);

 FUNC_2(VAR_1);
}
