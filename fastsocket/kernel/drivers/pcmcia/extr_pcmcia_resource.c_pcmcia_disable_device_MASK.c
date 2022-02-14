
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ win; int irq; int io; } ;


 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*,int *) ;
 int FUNC_2 (struct pcmcia_device*,int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct pcmcia_device *VAR_0) {
 FUNC_0(VAR_0);
 FUNC_1(VAR_0, &VAR_0->io);
 FUNC_2(VAR_0, &VAR_0->irq);
 if (VAR_0->win)
  FUNC_3(VAR_0->win);
}
