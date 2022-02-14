
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct sge_ofld_txq {TYPE_1__ sendq; scalar_t__ full; } ;


 int FUNC_0 (struct sge_ofld_txq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct sge_ofld_txq *VAR_1 = (struct sge_ofld_txq *)VAR_0;

 FUNC_1(&VAR_1->sendq.lock);
 VAR_1->full = 0;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->sendq.lock);
}
