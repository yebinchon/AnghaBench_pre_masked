
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* eoi ) (unsigned int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_0, struct irq_desc *VAR_1)
{
 int VAR_2;

 while ((VAR_2 = FUNC_0()) >= 0)
  FUNC_1(VAR_2);

 VAR_1->chip->eoi(VAR_0);
}
