
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* txq; } ;
struct ath_softc {TYPE_1__ tx; } ;
struct TYPE_4__ {int axq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*,int *) ;
 int FUNC_4 (struct ath_softc*,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath_softc *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_2(VAR_1);

 VAR_3 = FUNC_3(VAR_1, ((void*)0));

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!FUNC_0(VAR_1, VAR_2))
   continue;

  FUNC_5(&VAR_1->tx.txq[VAR_2].axq_lock);
  FUNC_4(VAR_1, &VAR_1->tx.txq[VAR_2]);
  FUNC_6(&VAR_1->tx.txq[VAR_2].axq_lock);
 }

 FUNC_1(VAR_1);

 return VAR_3;
}
