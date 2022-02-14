
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_info_t {struct pcmcia_device* p_dev; } ;
struct TYPE_6__ {int IntType; int Attributes; } ;
struct TYPE_5__ {int IRQInfo1; int Attributes; } ;
struct TYPE_4__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; struct scsi_info_t* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pcmcia_device*) ;
 struct scsi_info_t* FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct pcmcia_device *VAR_7)
{
 struct scsi_info_t *VAR_8;

 FUNC_0(0, "SYM53C500_attach()\n");


 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->p_dev = VAR_7;
 VAR_7->priv = VAR_8;
 VAR_7->io.NumPorts1 = 16;
 VAR_7->io.Attributes1 = VAR_4;
 VAR_7->io.IOAddrLines = 10;
 VAR_7->irq.Attributes = VAR_6;
 VAR_7->irq.IRQInfo1 = VAR_5;
 VAR_7->conf.Attributes = VAR_0;
 VAR_7->conf.IntType = VAR_3;

 return FUNC_1(VAR_7);
}
