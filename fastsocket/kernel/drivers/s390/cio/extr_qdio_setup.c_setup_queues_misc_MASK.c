
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {int mask; int nr; int * handler; struct qdio_irq* irq_ptr; struct qdio_q* slib; } ;
struct qdio_irq {int dummy; } ;
typedef int qdio_handler_t ;


 int VAR_0 ;
 int FUNC_0 (struct qdio_q*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct qdio_q *VAR_1, struct qdio_irq *VAR_2,
         qdio_handler_t *VAR_3, int VAR_4)
{

 FUNC_0(VAR_1, 0, ((char *)&VAR_1->slib) - ((char *)VAR_1));
 FUNC_0(VAR_1->slib, 0, VAR_0);

 VAR_1->irq_ptr = VAR_2;
 VAR_1->mask = 1 << (31 - VAR_4);
 VAR_1->nr = VAR_4;
 VAR_1->handler = VAR_3;
}
