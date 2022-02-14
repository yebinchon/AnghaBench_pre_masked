
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int Present; int IntType; int Attributes; } ;
struct TYPE_7__ {int IRQInfo1; int Attributes; } ;
struct TYPE_6__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; TYPE_4__* priv; } ;
struct TYPE_9__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_4__ scsi_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_8)
{
 scsi_info_t *VAR_9;

 FUNC_0(0, "qlogic_attach()\n");


 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->p_dev = VAR_8;
 VAR_8->priv = VAR_9;
 VAR_8->io.NumPorts1 = 16;
 VAR_8->io.Attributes1 = VAR_4;
 VAR_8->io.IOAddrLines = 10;
 VAR_8->irq.Attributes = VAR_6;
 VAR_8->irq.IRQInfo1 = VAR_5;
 VAR_8->conf.Attributes = VAR_0;
 VAR_8->conf.IntType = VAR_3;
 VAR_8->conf.Present = VAR_7;

 return FUNC_2(VAR_8);
}
