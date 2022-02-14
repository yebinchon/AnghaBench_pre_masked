
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int IntType; int Attributes; } ;
struct TYPE_7__ {int Attributes; struct net_device* Instance; int * Handler; int IRQInfo1; } ;
struct TYPE_6__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; struct net_device* priv; } ;
struct net_device {int watchdog_timeo; int * netdev_ops; } ;
struct TYPE_9__ {int * base; struct pcmcia_device* p_dev; } ;
typedef TYPE_4__ local_info_t ;


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
 int FUNC_3 (struct pcmcia_device*) ;
 int VAR_10 ;
 TYPE_4__* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_11)
{
    local_info_t *VAR_12;
    struct net_device *VAR_13;

    FUNC_0(0, "fmvj18x_attach()\n");


    VAR_13 = FUNC_2(sizeof(local_info_t));
    if (!VAR_13)
 return -VAR_1;
    VAR_12 = FUNC_4(VAR_13);
    VAR_11->priv = VAR_13;
    VAR_12->p_dev = VAR_11;
    VAR_12->base = ((void*)0);


    VAR_11->io.NumPorts1 = 32;
    VAR_11->io.Attributes1 = VAR_3;
    VAR_11->io.IOAddrLines = 5;


    VAR_11->irq.Attributes = VAR_6|VAR_4;
    VAR_11->irq.IRQInfo1 = VAR_5;
    VAR_11->irq.Handler = &VAR_8;
    VAR_11->irq.Instance = VAR_13;


    VAR_11->conf.Attributes = VAR_0;
    VAR_11->conf.IntType = VAR_2;

    VAR_13->netdev_ops = &VAR_9;
    VAR_13->watchdog_timeo = VAR_7;

    FUNC_1(VAR_13, &VAR_10);

    return FUNC_3(VAR_11);
}
