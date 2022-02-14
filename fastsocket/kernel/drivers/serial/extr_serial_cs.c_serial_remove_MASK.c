
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_info {int ndev; int slave; TYPE_1__* p_dev; int * line; } ;
struct pcmcia_device {struct serial_info* priv; } ;
struct TYPE_2__ {int * dev_node; } ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 struct serial_info *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_0(0, "serial_release(0x%p)\n", VAR_0);




 for (VAR_2 = 0; VAR_2 < VAR_1->ndev; VAR_2++)
  FUNC_2(VAR_1->line[VAR_2]);

 VAR_1->p_dev->dev_node = ((void*)0);

 if (!VAR_1->slave)
  FUNC_1(VAR_0);
}
