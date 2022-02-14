
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ConfigIndex; int IntType; int Attributes; } ;
struct TYPE_5__ {int Attributes; struct net_device* Instance; int * Handler; int IRQInfo1; } ;
struct TYPE_4__ {int NumPorts1; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; struct net_device* priv; } ;
struct net_device {int watchdog_timeo; int * netdev_ops; } ;
struct el3_private {int lock; struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_7 ;
 struct net_device* FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct el3_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_11)
{
    struct el3_private *VAR_12;
    struct net_device *VAR_13;

    FUNC_0(0, "3c589_attach()\n");


    VAR_13 = FUNC_2(sizeof(struct el3_private));
    if (!VAR_13)
  return -VAR_1;
    VAR_12 = FUNC_3(VAR_13);
    VAR_11->priv = VAR_13;
    VAR_12->p_dev = VAR_11;

    FUNC_4(&VAR_12->lock);
    VAR_11->io.NumPorts1 = 16;
    VAR_11->io.Attributes1 = VAR_3;
    VAR_11->irq.Attributes = VAR_6|VAR_4;
    VAR_11->irq.IRQInfo1 = VAR_5;
    VAR_11->irq.Handler = &VAR_8;
    VAR_11->irq.Instance = VAR_13;
    VAR_11->conf.Attributes = VAR_0;
    VAR_11->conf.IntType = VAR_2;
    VAR_11->conf.ConfigIndex = 1;

    VAR_13->netdev_ops = &VAR_9;
    VAR_13->watchdog_timeo = VAR_7;

    FUNC_1(VAR_13, &VAR_10);

    return FUNC_5(VAR_11);
}
