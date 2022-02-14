
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_cfg {int dummy; } ;
struct TYPE_2__ {struct irq_cfg* chip_data; } ;


 int FUNC_0 (unsigned int,struct irq_cfg*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_0 ;

void FUNC_6(unsigned int VAR_1)
{
 unsigned long VAR_2;
 struct irq_cfg *VAR_3;

 FUNC_1(VAR_1);

 FUNC_2(VAR_1);
 FUNC_4(&VAR_0, VAR_2);
 VAR_3 = FUNC_3(VAR_1)->chip_data;
 FUNC_0(VAR_1, VAR_3);
 FUNC_5(&VAR_0, VAR_2);
}
