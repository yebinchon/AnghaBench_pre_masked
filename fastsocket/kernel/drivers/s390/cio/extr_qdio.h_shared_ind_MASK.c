
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {struct qdio_irq* irq_ptr; } ;
struct qdio_irq {int dummy; } ;


 scalar_t__ FUNC_0 (struct qdio_irq*) ;
 scalar_t__ FUNC_1 (struct qdio_irq*) ;

__attribute__((used)) static inline int FUNC_2(struct qdio_q *VAR_0)
{
 struct qdio_irq *VAR_1 = VAR_0->irq_ptr;
 return FUNC_1(VAR_1) || FUNC_0(VAR_1);
}
