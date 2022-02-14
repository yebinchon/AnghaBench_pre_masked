
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int lock; scalar_t__ action; } ;


 struct irq_desc* VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3;
   struct irq_desc *VAR_4 = VAR_0 + VAR_1;

 FUNC_0(&VAR_4->lock, VAR_3);
 if (VAR_4->action)
  VAR_2 = 1;
 FUNC_1(&VAR_4->lock, VAR_3);
 return VAR_2;
}
