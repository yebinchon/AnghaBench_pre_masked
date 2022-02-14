
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int IntType; int Attributes; } ;
struct TYPE_7__ {int Attributes; struct pcmcia_device* Instance; int * Handler; int IRQInfo1; } ;
struct TYPE_6__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; struct pcmcia_device* priv; struct pcmcia_device* p_dev; } ;
typedef struct pcmcia_device scsi_info_t ;
struct TYPE_9__ {struct pcmcia_device* ScsiInfo; } ;
typedef TYPE_4__ nsp_hw_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct pcmcia_device* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pcmcia_device*) ;
 TYPE_4__ VAR_10 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_12)
{
 scsi_info_t *VAR_13;
 nsp_hw_data *VAR_14 = &VAR_10;
 int VAR_15;

 FUNC_2(VAR_9, "in");


 VAR_13 = FUNC_0(sizeof(*VAR_13), VAR_2);
 if (VAR_13 == ((void*)0)) { return -VAR_1; }
 VAR_13->p_dev = VAR_12;
 VAR_12->priv = VAR_13;
 VAR_14->ScsiInfo = VAR_13;

 FUNC_2(VAR_9, "info=0x%p", VAR_13);


 VAR_12->io.NumPorts1 = 0x10;
 VAR_12->io.Attributes1 = VAR_4;
 VAR_12->io.IOAddrLines = 10;


 VAR_12->irq.Attributes = VAR_8 | VAR_6;
 VAR_12->irq.IRQInfo1 = VAR_7;


 VAR_12->irq.Handler = &VAR_11;
 VAR_12->irq.Instance = VAR_13;
 VAR_12->irq.Attributes |= VAR_5;


 VAR_12->conf.Attributes = VAR_0;
 VAR_12->conf.IntType = VAR_3;

 VAR_15 = FUNC_1(VAR_12);

 FUNC_2(VAR_9, "link=0x%p", VAR_12);
 return VAR_15;
}
