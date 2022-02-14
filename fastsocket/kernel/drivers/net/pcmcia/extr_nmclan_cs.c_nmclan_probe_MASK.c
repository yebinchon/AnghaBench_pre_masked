
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ConfigIndex; int Present; int IntType; int Attributes; } ;
struct TYPE_7__ {int Attributes; struct net_device* Instance; int * Handler; int IRQInfo1; } ;
struct TYPE_6__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; struct net_device* priv; } ;
struct net_device {int watchdog_timeo; int * netdev_ops; } ;
struct TYPE_9__ {int tx_free_frames; int bank_lock; struct pcmcia_device* p_dev; } ;
typedef TYPE_4__ mace_private ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_9 ;
 struct net_device* FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_4__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int VAR_13 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_14)
{
    mace_private *VAR_15;
    struct net_device *VAR_16;

    FUNC_0(0, "nmclan_attach()\n");
    FUNC_0(1, "%s\n", VAR_13);


    VAR_16 = FUNC_2(sizeof(mace_private));
    if (!VAR_16)
     return -VAR_2;
    VAR_15 = FUNC_3(VAR_16);
    VAR_15->p_dev = VAR_14;
    VAR_14->priv = VAR_16;

    FUNC_5(&VAR_15->bank_lock);
    VAR_14->io.NumPorts1 = 32;
    VAR_14->io.Attributes1 = VAR_4;
    VAR_14->io.IOAddrLines = 5;
    VAR_14->irq.Attributes = VAR_7 | VAR_5;
    VAR_14->irq.IRQInfo1 = VAR_6;
    VAR_14->irq.Handler = &VAR_10;
    VAR_14->irq.Instance = VAR_16;
    VAR_14->conf.Attributes = VAR_1;
    VAR_14->conf.IntType = VAR_3;
    VAR_14->conf.ConfigIndex = 1;
    VAR_14->conf.Present = VAR_8;

    VAR_15->tx_free_frames=VAR_0;

    VAR_16->netdev_ops = &VAR_11;
    FUNC_1(VAR_16, &VAR_12);
    VAR_16->watchdog_timeo = VAR_9;

    return FUNC_4(VAR_14);
}
