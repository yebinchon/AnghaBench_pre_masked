
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_irq_info {scalar_t__ sock; int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pcmcia_irq_info *VAR_2)
{

 if(VAR_2->sock > VAR_1) return -1;
 VAR_2->irq = VAR_0;
 return 0;
}
