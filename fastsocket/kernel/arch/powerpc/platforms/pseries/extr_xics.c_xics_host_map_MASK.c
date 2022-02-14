
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_host {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (char*,unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct irq_host *VAR_4, unsigned int VAR_5,
    irq_hw_number_t VAR_6)
{
 FUNC_2("xics: map virq %d, hwirq 0x%lx\n", VAR_5, VAR_6);


 FUNC_1(VAR_2, VAR_5, VAR_6);

 FUNC_0(VAR_5)->status |= VAR_0;
 FUNC_3(VAR_5, VAR_3, VAR_1);
 return 0;
}
