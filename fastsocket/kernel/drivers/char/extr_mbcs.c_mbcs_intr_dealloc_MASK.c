
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbcs_soft {TYPE_1__* algo_sn_irq; TYPE_1__* put_sn_irq; TYPE_1__* get_sn_irq; } ;
struct cx_dev {struct mbcs_soft* soft; } ;
struct TYPE_2__ {int irq_irq; } ;


 int FUNC_0 (int ,struct mbcs_soft*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct cx_dev *VAR_0)
{
 struct mbcs_soft *VAR_1;

 VAR_1 = VAR_0->soft;

 FUNC_0(VAR_1->get_sn_irq->irq_irq, VAR_1);
 FUNC_1(VAR_1->get_sn_irq);
 FUNC_0(VAR_1->put_sn_irq->irq_irq, VAR_1);
 FUNC_1(VAR_1->put_sn_irq);
 FUNC_0(VAR_1->algo_sn_irq->irq_irq, VAR_1);
 FUNC_1(VAR_1->algo_sn_irq);
}
