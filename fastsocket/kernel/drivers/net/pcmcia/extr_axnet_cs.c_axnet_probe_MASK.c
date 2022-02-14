
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
struct net_device {int watchdog_timeo; int * netdev_ops; } ;
struct ei_device {int page_lock; } ;
struct TYPE_7__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_3__ axnet_dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *) ;
 int VAR_5 ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct ei_device* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_8)
{
    axnet_dev_t *VAR_9;
    struct net_device *VAR_10;
    struct ei_device *VAR_11;

    FUNC_0(0, "axnet_attach()\n");

    VAR_10 = FUNC_3(sizeof(struct ei_device) + sizeof(axnet_dev_t));
    if (!VAR_10)
 return -VAR_1;

    VAR_11 = FUNC_5(VAR_10);
    FUNC_6(&VAR_11->page_lock);

    VAR_9 = FUNC_1(VAR_10);
    VAR_9->p_dev = VAR_8;
    VAR_8->priv = VAR_10;
    VAR_8->irq.Attributes = VAR_4;
    VAR_8->irq.IRQInfo1 = VAR_3;
    VAR_8->conf.Attributes = VAR_0;
    VAR_8->conf.IntType = VAR_2;

    VAR_10->netdev_ops = &VAR_6;

    FUNC_2(VAR_10, &VAR_7);
    VAR_10->watchdog_timeo = VAR_5;

    return FUNC_4(VAR_8);
}
