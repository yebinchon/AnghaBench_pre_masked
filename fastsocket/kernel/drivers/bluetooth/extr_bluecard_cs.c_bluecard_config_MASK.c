
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int ConfigIndex; } ;
struct TYPE_11__ {scalar_t__ AssignedIRQ; } ;
struct TYPE_12__ {int NumPorts1; int IOAddrLines; int BasePort1; } ;
struct pcmcia_device {TYPE_2__* dev_node; TYPE_6__ conf; TYPE_4__ irq; TYPE_5__ io; TYPE_3__* priv; } ;
struct TYPE_9__ {int dev_name; } ;
struct TYPE_10__ {TYPE_2__ node; TYPE_1__* hdev; } ;
typedef TYPE_3__ bluecard_info_t ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct pcmcia_device*,int ,int) ;
 int FUNC_3 (struct pcmcia_device*,TYPE_6__*) ;
 int FUNC_4 (struct pcmcia_device*,TYPE_5__*) ;
 int FUNC_5 (struct pcmcia_device*,TYPE_4__*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_4)
{
 bluecard_info_t *VAR_5 = VAR_4->priv;
 int VAR_6, VAR_7;

 VAR_4->conf.ConfigIndex = 0x20;
 VAR_4->io.NumPorts1 = 64;
 VAR_4->io.IOAddrLines = 6;

 for (VAR_7 = 0; VAR_7 < 0x400; VAR_7 += 0x40) {
  VAR_4->io.BasePort1 = VAR_7 ^ 0x300;
  VAR_6 = FUNC_4(VAR_4, &VAR_4->io);
  if (VAR_6 == 0)
   break;
 }

 if (VAR_6 != 0) {
  FUNC_2(VAR_4, VAR_2, VAR_6);
  goto failed;
 }

 VAR_6 = FUNC_5(VAR_4, &VAR_4->irq);
 if (VAR_6 != 0) {
  FUNC_2(VAR_4, VAR_3, VAR_6);
  VAR_4->irq.AssignedIRQ = 0;
 }

 VAR_6 = FUNC_3(VAR_4, &VAR_4->conf);
 if (VAR_6 != 0) {
  FUNC_2(VAR_4, VAR_1, VAR_6);
  goto failed;
 }

 if (FUNC_0(VAR_5) != 0)
  goto failed;

 FUNC_6(VAR_5->node.dev_name, VAR_5->hdev->name);
 VAR_4->dev_node = &VAR_5->node;

 return 0;

failed:
 FUNC_1(VAR_4);
 return -VAR_0;
}
