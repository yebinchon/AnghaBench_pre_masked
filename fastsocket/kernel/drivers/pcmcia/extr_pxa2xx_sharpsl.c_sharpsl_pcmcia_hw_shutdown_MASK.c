
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {size_t nr; } ;
struct pcmcia_irqs {size_t sock; scalar_t__ irq; int str; } ;
struct TYPE_2__ {scalar_t__ cd_irq; int cd_irq_str; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct soc_pcmcia_socket*,struct pcmcia_irqs*,int) ;

__attribute__((used)) static void FUNC_1(struct soc_pcmcia_socket *VAR_1)
{
 if (VAR_0[VAR_1->nr].cd_irq >= 0) {
  struct pcmcia_irqs VAR_2;

  VAR_2.sock = VAR_1->nr;
  VAR_2.irq = VAR_0[VAR_1->nr].cd_irq;
  VAR_2.str = VAR_0[VAR_1->nr].cd_irq_str;
  FUNC_0(VAR_1, &VAR_2, 1);
 }
}
