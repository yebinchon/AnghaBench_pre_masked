
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int NumPorts1; int BasePort1; } ;
struct pcmcia_device {TYPE_1__ io; struct net_device* priv; } ;
struct net_device {int base_addr; } ;


 int FUNC_0 (struct pcmcia_device*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_1)
{
    struct net_device *VAR_2 = VAR_1->priv;
    int VAR_3;

    VAR_1->io.NumPorts1 = 16;
    VAR_3 = FUNC_0(VAR_1, VAR_0, ((void*)0));
    if (!VAR_3)
     VAR_2->base_addr = VAR_1->io.BasePort1;

    return VAR_3;
}
