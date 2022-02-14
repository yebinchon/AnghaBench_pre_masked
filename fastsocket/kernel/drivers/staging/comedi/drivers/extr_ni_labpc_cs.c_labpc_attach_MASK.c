
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int AssignedIRQ; } ;
struct TYPE_4__ {unsigned long BasePort1; } ;
struct pcmcia_device {TYPE_2__ irq; TYPE_1__ io; } ;
struct labpc_private {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_devconfig {int dummy; } ;
struct TYPE_6__ {int bustype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,unsigned long,unsigned int,int ) ;

 struct pcmcia_device* VAR_3 ;
 int FUNC_2 (char*) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5, struct comedi_devconfig *VAR_6)
{
 unsigned long VAR_7 = 0;
 unsigned int VAR_8 = 0;
 struct pcmcia_device *VAR_9;


 if (FUNC_0(VAR_5, sizeof(struct labpc_private)) < 0)
  return -VAR_2;


 switch (VAR_4->bustype) {
 case 128:
  VAR_9 = VAR_3;
  if (!VAR_9)
   return -VAR_1;
  VAR_7 = VAR_9->io.BasePort1;
  VAR_8 = VAR_9->irq.AssignedIRQ;
  break;
 default:
  FUNC_2("bug! couldn't determine board type\n");
  return -VAR_0;
  break;
 }
 return FUNC_1(VAR_5, VAR_7, VAR_8, 0);
}
