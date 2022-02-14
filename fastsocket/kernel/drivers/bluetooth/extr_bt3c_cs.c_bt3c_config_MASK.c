
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ AssignedIRQ; } ;
struct pcmcia_device {TYPE_2__* dev_node; int conf; TYPE_4__ irq; TYPE_3__* priv; } ;
struct TYPE_7__ {int dev_name; } ;
struct TYPE_8__ {TYPE_2__ node; TYPE_1__* hdev; } ;
typedef TYPE_3__ bt3c_info_t ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct pcmcia_device*,int ,int) ;
 int FUNC_4 (struct pcmcia_device*,int ,void*) ;
 int FUNC_5 (struct pcmcia_device*,int *) ;
 int FUNC_6 (struct pcmcia_device*,TYPE_4__*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct pcmcia_device *VAR_6)
{
 bt3c_info_t *VAR_7 = VAR_6->priv;
 int VAR_8;
 unsigned long VAR_9;



 for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
  if (!FUNC_4(VAR_6, VAR_4, (void *) VAR_9))
   goto found_port;




 if (!FUNC_4(VAR_6, VAR_5, ((void*)0)))
  goto found_port;

 FUNC_0("No usable port range found");
 FUNC_3(VAR_6, VAR_2, -VAR_0);
 goto failed;

found_port:
 VAR_8 = FUNC_6(VAR_6, &VAR_6->irq);
 if (VAR_8 != 0) {
  FUNC_3(VAR_6, VAR_3, VAR_8);
  VAR_6->irq.AssignedIRQ = 0;
 }

 VAR_8 = FUNC_5(VAR_6, &VAR_6->conf);
 if (VAR_8 != 0) {
  FUNC_3(VAR_6, VAR_1, VAR_8);
  goto failed;
 }

 if (FUNC_1(VAR_7) != 0)
  goto failed;

 FUNC_7(VAR_7->node.dev_name, VAR_7->hdev->name);
 VAR_6->dev_node = &VAR_7->node;

 return 0;

failed:
 FUNC_2(VAR_6);
 return -VAR_0;
}
