
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_cfg {int dummy; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (int,struct irq_cfg*,struct cpumask const*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;

int FUNC_3(int VAR_1, struct irq_cfg *VAR_2, const struct cpumask *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_0, VAR_5);
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0, VAR_5);
 return VAR_4;
}
