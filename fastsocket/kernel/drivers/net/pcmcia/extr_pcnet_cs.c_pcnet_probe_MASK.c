
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int IntType; int Attributes; } ;
struct TYPE_5__ {int IRQInfo1; int Attributes; } ;
struct pcmcia_device {TYPE_2__ conf; TYPE_1__ irq; struct net_device* priv; } ;
struct net_device {int * netdev_ops; } ;
struct TYPE_7__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_3__ pcnet_dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct pcmcia_device *VAR_6)
{
    pcnet_dev_t *VAR_7;
    struct net_device *VAR_8;

    FUNC_0(0, "pcnet_attach()\n");


    VAR_8 = FUNC_2(sizeof(pcnet_dev_t));
    if (!VAR_8) return -VAR_1;
    VAR_7 = FUNC_1(VAR_8);
    VAR_7->p_dev = VAR_6;
    VAR_6->priv = VAR_8;

    VAR_6->irq.Attributes = VAR_4;
    VAR_6->irq.IRQInfo1 = VAR_3;
    VAR_6->conf.Attributes = VAR_0;
    VAR_6->conf.IntType = VAR_2;

    VAR_8->netdev_ops = &VAR_5;

    return FUNC_3(VAR_6);
}
