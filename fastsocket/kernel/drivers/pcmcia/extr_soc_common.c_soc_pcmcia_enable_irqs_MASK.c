
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {scalar_t__ nr; } ;
struct pcmcia_irqs {scalar_t__ sock; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct soc_pcmcia_socket *VAR_2,
       struct pcmcia_irqs *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  if (VAR_3[VAR_5].sock == VAR_2->nr) {
   FUNC_0(VAR_3[VAR_5].irq, VAR_1);
   FUNC_0(VAR_3[VAR_5].irq, VAR_0);
  }
}
