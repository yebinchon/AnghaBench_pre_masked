
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int AssignedIRQ; } ;
struct TYPE_3__ {int BasePort1; } ;
struct pcmcia_device {TYPE_2__ irq; TYPE_1__ io; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_device *VAR_0)
{
 FUNC_0(VAR_0->io.BasePort1, VAR_0->irq.AssignedIRQ);
 FUNC_1(VAR_0);
}
