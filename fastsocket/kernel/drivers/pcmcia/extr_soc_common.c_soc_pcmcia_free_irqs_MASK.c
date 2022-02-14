
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {scalar_t__ nr; } ;
struct pcmcia_irqs {scalar_t__ sock; int irq; } ;


 int FUNC_0 (int ,struct soc_pcmcia_socket*) ;

void FUNC_1(struct soc_pcmcia_socket *VAR_0,
     struct pcmcia_irqs *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_1[VAR_3].sock == VAR_0->nr)
   FUNC_0(VAR_1[VAR_3].irq, VAR_0);
}
