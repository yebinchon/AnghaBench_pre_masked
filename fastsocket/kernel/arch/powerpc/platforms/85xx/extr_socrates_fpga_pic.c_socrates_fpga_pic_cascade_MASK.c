
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* eoi ) (unsigned int) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(unsigned int VAR_1, struct irq_desc *VAR_2)
{
 unsigned int VAR_3;





 VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 != VAR_0)
  FUNC_0(VAR_3);
 VAR_2->chip->eoi(VAR_1);

}
