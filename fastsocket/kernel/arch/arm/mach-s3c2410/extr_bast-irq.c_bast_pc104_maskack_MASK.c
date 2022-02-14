
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* ack ) (int) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct irq_desc* VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(unsigned int VAR_2)
{
 struct irq_desc *VAR_3 = VAR_1 + VAR_0;

 FUNC_0(VAR_2);
 VAR_3->chip->ack(VAR_0);
}
