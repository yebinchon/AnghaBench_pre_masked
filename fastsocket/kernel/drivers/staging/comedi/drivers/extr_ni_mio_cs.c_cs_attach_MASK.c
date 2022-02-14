
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int IntType; int Attributes; } ;
struct TYPE_5__ {int IRQInfo1; int Attributes; } ;
struct TYPE_4__ {int NumPorts1; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pcmcia_device* VAR_5 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_6)
{
 VAR_6->io.Attributes1 = VAR_2;
 VAR_6->io.NumPorts1 = 16;
 VAR_6->irq.Attributes = VAR_4;
 VAR_6->irq.IRQInfo1 = VAR_3;
 VAR_6->conf.Attributes = VAR_0;
 VAR_6->conf.IntType = VAR_1;

 VAR_5 = VAR_6;

 FUNC_0(VAR_6);

 return 0;
}
