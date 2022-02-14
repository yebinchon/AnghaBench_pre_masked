
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_host {int dummy; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 struct irq_chip VAR_1 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,struct irq_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_host *VAR_3, unsigned int VAR_4,
    irq_hw_number_t VAR_5)
{
 struct irq_chip *VAR_6 = &VAR_1;

 FUNC_0(VAR_4)->status |= VAR_0;

 FUNC_1(VAR_4, VAR_6, VAR_2);

 return 0;
}
