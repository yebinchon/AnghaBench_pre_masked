
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ AssignedIRQ; } ;
struct TYPE_7__ {int NumPorts1; } ;
struct pcmcia_device {TYPE_3__* dev_node; int conf; TYPE_5__ irq; TYPE_1__ io; TYPE_4__* priv; } ;
struct TYPE_9__ {int dev_name; } ;
struct TYPE_10__ {TYPE_3__ node; TYPE_2__* hdev; } ;
typedef TYPE_4__ dtl1_info_t ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_device*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 scalar_t__ FUNC_3 (struct pcmcia_device*,int ,int *) ;
 int FUNC_4 (struct pcmcia_device*,int *) ;
 int FUNC_5 (struct pcmcia_device*,TYPE_5__*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_4)
{
 dtl1_info_t *VAR_5 = VAR_4->priv;
 int VAR_6;


 VAR_4->io.NumPorts1 = 8;
 if (FUNC_3(VAR_4, VAR_3, ((void*)0)) < 0)
  goto failed;

 VAR_6 = FUNC_5(VAR_4, &VAR_4->irq);
 if (VAR_6 != 0) {
  FUNC_0(VAR_4, VAR_2, VAR_6);
  VAR_4->irq.AssignedIRQ = 0;
 }

 VAR_6 = FUNC_4(VAR_4, &VAR_4->conf);
 if (VAR_6 != 0) {
  FUNC_0(VAR_4, VAR_1, VAR_6);
  goto failed;
 }

 if (FUNC_1(VAR_5) != 0)
  goto failed;

 FUNC_6(VAR_5->node.dev_name, VAR_5->hdev->name);
 VAR_4->dev_node = &VAR_5->node;

 return 0;

failed:
 FUNC_2(VAR_4);
 return -VAR_0;
}
