
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int Attributes; struct net_device* Instance; int * Handler; int IRQInfo1; } ;
struct TYPE_8__ {int ConfigIndex; int IntType; int Attributes; } ;
struct TYPE_7__ {int IOAddrLines; int Attributes1; scalar_t__ NumPorts1; } ;
struct pcmcia_device {TYPE_3__ irq; struct net_device* priv; TYPE_2__ conf; TYPE_1__ io; } ;
struct net_device {TYPE_4__* wireless_data; int * wireless_handlers; int * netdev_ops; } ;
struct TYPE_10__ {int * spy_data; } ;
struct TYPE_11__ {int timer; TYPE_4__ wireless_data; int spy_data; scalar_t__ num_multi; int authentication_state; int card_status; struct pcmcia_device* finder; } ;
typedef TYPE_5__ ray_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_8 ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_9 ;
 TYPE_5__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pcmcia_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct pcmcia_device* VAR_13 ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_14)
{
 ray_dev_t *VAR_15;
 struct net_device *VAR_16;

 FUNC_0(1, "ray_attach()\n");


 VAR_16 = FUNC_2(sizeof(ray_dev_t));
 if (!VAR_16)
  goto fail_alloc_dev;

 VAR_15 = FUNC_4(VAR_16);
 VAR_15->finder = VAR_14;


 VAR_14->io.NumPorts1 = 0;
 VAR_14->io.Attributes1 = VAR_4;
 VAR_14->io.IOAddrLines = 5;


 VAR_14->irq.Attributes = VAR_7 | VAR_5;
 VAR_14->irq.IRQInfo1 = VAR_6;
 VAR_14->irq.Handler = &VAR_11;


 VAR_14->conf.Attributes = VAR_1;
 VAR_14->conf.IntType = VAR_3;
 VAR_14->conf.ConfigIndex = 1;

 VAR_14->priv = VAR_16;
 VAR_14->irq.Instance = VAR_16;

 VAR_15->finder = VAR_14;
 VAR_15->card_status = VAR_0;
 VAR_15->authentication_state = VAR_8;
 VAR_15->num_multi = 0;
 FUNC_0(2, "ray_attach p_dev = %p,  dev = %p,  local = %p, intr = %p\n",
       VAR_14, VAR_16, VAR_15, &VAR_11);


 VAR_16->netdev_ops = &VAR_12;
 FUNC_1(VAR_16, &VAR_9);
 VAR_16->wireless_handlers = &VAR_10;






 FUNC_0(2, "ray_cs ray_attach calling ether_setup.)\n");
 FUNC_5(VAR_16);

 FUNC_3(&VAR_15->timer);

 VAR_13 = VAR_14;
 return FUNC_6(VAR_14);

fail_alloc_dev:
 return -VAR_2;
}
