
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sge_rspq {int lock; int unhandled_irqs; } ;
struct TYPE_5__ {TYPE_3__* qs; } ;
struct TYPE_4__ {int nports; } ;
struct adapter {TYPE_2__ sge; TYPE_1__ params; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {struct sge_rspq rspq; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct adapter*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 int VAR_3;
 struct adapter *VAR_4 = VAR_2;
 struct sge_rspq *VAR_5 = &VAR_4->sge.qs[0].rspq;

 FUNC_1(&VAR_5->lock);

 VAR_3 = FUNC_0(&VAR_4->sge.qs[0]);
 if (VAR_4->params.nports == 2)
  VAR_3 += FUNC_0(&VAR_4->sge.qs[1]);
 if (!VAR_3 && FUNC_3(VAR_4) == 0)
  VAR_5->unhandled_irqs++;

 FUNC_2(&VAR_5->lock);
 return VAR_0;
}
