
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int Attributes; struct net_device* Instance; int * Handler; int IRQInfo1; } ;
struct TYPE_7__ {int ConfigIndex; int IntType; int Attributes; } ;
struct TYPE_6__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ irq; TYPE_2__ conf; TYPE_1__ io; struct net_device* priv; } ;
struct net_device {int watchdog_timeo; int * wireless_handlers; int * netdev_ops; } ;
struct TYPE_9__ {int spinlock; struct pcmcia_device* p_dev; } ;
typedef TYPE_4__ netwave_private ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct net_device* FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_11)
{
    struct net_device *VAR_12;
    netwave_private *VAR_13;

    FUNC_0(0, "netwave_attach()\n");


    VAR_12 = FUNC_1(sizeof(netwave_private));
    if (!VAR_12)
 return -VAR_1;
    VAR_13 = FUNC_2(VAR_12);
    VAR_13->p_dev = VAR_11;
    VAR_11->priv = VAR_12;


    VAR_11->io.NumPorts1 = 16;
    VAR_11->io.Attributes1 = VAR_3;


    VAR_11->io.IOAddrLines = 5;


    VAR_11->irq.Attributes = VAR_6 | VAR_4;
    VAR_11->irq.IRQInfo1 = VAR_5;
    VAR_11->irq.Handler = &VAR_9;


    VAR_11->conf.Attributes = VAR_0;
    VAR_11->conf.IntType = VAR_2;
    VAR_11->conf.ConfigIndex = 1;



    FUNC_4(&VAR_13->spinlock);


    VAR_12->netdev_ops = &VAR_10;

    VAR_12->wireless_handlers = &VAR_8;

    VAR_12->watchdog_timeo = VAR_7;

    VAR_11->irq.Instance = VAR_12;

    return FUNC_3( VAR_11);
}
