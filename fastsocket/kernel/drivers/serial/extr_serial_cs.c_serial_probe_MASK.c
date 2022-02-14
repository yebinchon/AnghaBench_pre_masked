
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct serial_info {struct pcmcia_device* p_dev; } ;
struct TYPE_6__ {int IntType; int Status; int Attributes; } ;
struct TYPE_5__ {int IRQInfo1; int Attributes; } ;
struct TYPE_4__ {int NumPorts1; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; struct serial_info* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct serial_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_10)
{
 struct serial_info *VAR_11;

 FUNC_0(0, "serial_attach()\n");


 VAR_11 = FUNC_1(sizeof (*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;
 VAR_11->p_dev = VAR_10;
 VAR_10->priv = VAR_11;

 VAR_10->io.Attributes1 = VAR_6;
 VAR_10->io.NumPorts1 = 8;
 VAR_10->irq.Attributes = VAR_8;
 VAR_10->irq.IRQInfo1 = VAR_7;
 VAR_10->conf.Attributes = VAR_1;
 if (VAR_9) {
  VAR_10->conf.Attributes |= VAR_2;
  VAR_10->conf.Status = VAR_0;
 }
 VAR_10->conf.IntType = VAR_5;

 return FUNC_2(VAR_10);
}
