
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int lock; TYPE_1__* chip; int affinity; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {int (* set_affinity ) (int,struct cpumask const*) ;} ;


 int FUNC_0 (int ,struct cpumask const*) ;
 struct cpumask* FUNC_1 (unsigned int) ;
 struct irq_desc* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,struct cpumask const*) ;

__attribute__((used)) static void FUNC_5(int VAR_1, unsigned int VAR_2)
{
 struct irq_desc *VAR_3 = VAR_0 + VAR_1;
 const struct cpumask *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_3->lock);
 FUNC_0(VAR_3->affinity, VAR_4);
 VAR_3->chip->set_affinity(VAR_1, VAR_4);
 FUNC_3(&VAR_3->lock);
}
