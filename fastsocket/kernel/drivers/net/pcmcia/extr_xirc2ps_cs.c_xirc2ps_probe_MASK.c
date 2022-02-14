
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct net_device* Instance; int Handler; } ;
struct TYPE_5__ {int ConfigIndex; int IntType; int Attributes; } ;
struct pcmcia_device {TYPE_2__ irq; TYPE_1__ conf; struct net_device* priv; } ;
struct net_device {int watchdog_timeo; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_7__ {int tx_timeout_task; struct pcmcia_device* p_dev; struct net_device* dev; } ;
typedef TYPE_3__ local_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_5(struct pcmcia_device *VAR_8)
{
    struct net_device *VAR_9;
    local_info_t *VAR_10;

    FUNC_0(0, "attach()\n");


    VAR_9 = FUNC_2(sizeof(local_info_t));
    if (!VAR_9)
     return -VAR_1;
    VAR_10 = FUNC_3(VAR_9);
    VAR_10->dev = VAR_9;
    VAR_10->p_dev = VAR_8;
    VAR_8->priv = VAR_9;


    VAR_8->conf.Attributes = VAR_0;
    VAR_8->conf.IntType = VAR_2;
    VAR_8->conf.ConfigIndex = 1;
    VAR_8->irq.Handler = VAR_6;
    VAR_8->irq.Instance = VAR_9;


    VAR_9->netdev_ops = &VAR_5;
    VAR_9->ethtool_ops = &VAR_4;
    VAR_9->watchdog_timeo = VAR_3;
    FUNC_1(&VAR_10->tx_timeout_task, VAR_7);

    return FUNC_4(VAR_8);
}
