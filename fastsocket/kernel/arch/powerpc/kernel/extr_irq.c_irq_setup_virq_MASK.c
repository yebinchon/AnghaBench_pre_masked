
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irq_host {TYPE_1__* ops; } ;
typedef int irq_hw_number_t ;
struct TYPE_6__ {int status; } ;
struct TYPE_5__ {int hwirq; } ;
struct TYPE_4__ {scalar_t__ (* map ) (struct irq_host*,unsigned int,int ) ;} ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct irq_host*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct irq_host *VAR_2, unsigned int VAR_3,
       irq_hw_number_t VAR_4)
{

 FUNC_0(VAR_3)->status &= ~VAR_0;


 FUNC_4();
 VAR_1[VAR_3].hwirq = VAR_4;
 FUNC_3();

 if (VAR_2->ops->map(VAR_2, VAR_3, VAR_4)) {
  FUNC_2("irq: -> mapping failed, freeing\n");
  FUNC_1(VAR_3, 1);
  return -1;
 }

 return 0;
}
