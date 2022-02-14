
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int AssignedIRQ; } ;
struct pcmcia_device {TYPE_1__ irq; struct if_cs_card* priv; } ;
struct if_cs_card {scalar_t__ iobase; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct if_cs_card*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_5(struct pcmcia_device *VAR_1)
{
 struct if_cs_card *VAR_2 = VAR_1->priv;

 FUNC_2(VAR_0);

 FUNC_0(VAR_1->irq.AssignedIRQ, VAR_2);
 FUNC_4(VAR_1);
 if (VAR_2->iobase)
  FUNC_1(VAR_2->iobase);

 FUNC_3(VAR_0);
}
