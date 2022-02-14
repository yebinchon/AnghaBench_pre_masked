
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int phy_id_mask; int reg_num_mask; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct smc_private {TYPE_4__ mii_if; int lock; struct pcmcia_device* p_dev; } ;
struct TYPE_7__ {int IntType; int Attributes; } ;
struct TYPE_6__ {int Attributes; struct net_device* Instance; int * Handler; int IRQInfo1; } ;
struct TYPE_5__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct pcmcia_device {TYPE_3__ conf; TYPE_2__ irq; TYPE_1__ io; struct net_device* priv; } ;
struct net_device {int watchdog_timeo; int * netdev_ops; } ;


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
 struct smc_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_13)
{
    struct smc_private *VAR_14;
    struct net_device *VAR_15;

    FUNC_0(0, "smc91c92_attach()\n");


    VAR_15 = FUNC_2(sizeof(struct smc_private));
    if (!VAR_15)
 return -VAR_1;
    VAR_14 = FUNC_3(VAR_15);
    VAR_14->p_dev = VAR_13;
    VAR_13->priv = VAR_15;

    FUNC_5(&VAR_14->lock);
    VAR_13->io.NumPorts1 = 16;
    VAR_13->io.Attributes1 = VAR_3;
    VAR_13->io.IOAddrLines = 4;
    VAR_13->irq.Attributes = VAR_6|VAR_4;
    VAR_13->irq.IRQInfo1 = VAR_5;
    VAR_13->irq.Handler = &VAR_11;
    VAR_13->irq.Instance = VAR_15;
    VAR_13->conf.Attributes = VAR_0;
    VAR_13->conf.IntType = VAR_2;


    VAR_15->netdev_ops = &VAR_12;
    FUNC_1(VAR_15, &VAR_8);
    VAR_15->watchdog_timeo = VAR_7;

    VAR_14->mii_if.dev = VAR_15;
    VAR_14->mii_if.mdio_read = VAR_9;
    VAR_14->mii_if.mdio_write = VAR_10;
    VAR_14->mii_if.phy_id_mask = 0x1f;
    VAR_14->mii_if.reg_num_mask = 0x1f;

    return FUNC_4(VAR_13);
}
