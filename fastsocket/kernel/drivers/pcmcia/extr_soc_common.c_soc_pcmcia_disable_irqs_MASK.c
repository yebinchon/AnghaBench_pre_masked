
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {scalar_t__ nr; } ;
struct pcmcia_irqs {scalar_t__ sock; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct soc_pcmcia_socket *VAR_1,
        struct pcmcia_irqs *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_2[VAR_4].sock == VAR_1->nr)
   FUNC_0(VAR_2[VAR_4].irq, VAR_0);
}
