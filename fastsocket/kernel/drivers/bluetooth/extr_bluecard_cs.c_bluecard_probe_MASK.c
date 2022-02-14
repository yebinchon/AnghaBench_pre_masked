
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int IntType; int Attributes; } ;
struct TYPE_7__ {int Attributes; TYPE_4__* Instance; int Handler; int IRQInfo1; } ;
struct TYPE_6__ {int NumPorts1; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; TYPE_4__* priv; } ;
struct TYPE_9__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_4__ bluecard_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int VAR_8 ;
 TYPE_4__* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_9)
{
 bluecard_info_t *VAR_10;


 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->p_dev = VAR_9;
 VAR_9->priv = VAR_10;

 VAR_9->io.Attributes1 = VAR_4;
 VAR_9->io.NumPorts1 = 8;
 VAR_9->irq.Attributes = VAR_7 | VAR_5;
 VAR_9->irq.IRQInfo1 = VAR_6;

 VAR_9->irq.Handler = VAR_8;
 VAR_9->irq.Instance = VAR_10;

 VAR_9->conf.Attributes = VAR_0;
 VAR_9->conf.IntType = VAR_3;

 return FUNC_0(VAR_9);
}
