
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * spy_data; } ;
struct wl3501_card {TYPE_3__ wireless_data; struct pcmcia_device* p_dev; int spy_data; } ;
struct TYPE_8__ {int Attributes; struct net_device* Instance; int Handler; int IRQInfo1; } ;
struct TYPE_6__ {int ConfigIndex; int IntType; int Attributes; } ;
struct TYPE_5__ {int NumPorts1; int IOAddrLines; int Attributes1; } ;
struct pcmcia_device {TYPE_4__ irq; struct net_device* priv; TYPE_2__ conf; TYPE_1__ io; } ;
struct net_device {int watchdog_timeo; int * wireless_handlers; TYPE_3__* wireless_data; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int) ;
 struct wl3501_card* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_4 (struct pcmcia_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_12)
{
 struct net_device *VAR_13;
 struct wl3501_card *VAR_14;


 VAR_12->io.NumPorts1 = 16;
 VAR_12->io.Attributes1 = VAR_4;
 VAR_12->io.IOAddrLines = 5;


 VAR_12->irq.Attributes = VAR_7 | VAR_5;
 VAR_12->irq.IRQInfo1 = VAR_6;
 VAR_12->irq.Handler = VAR_10;


 VAR_12->conf.Attributes = VAR_0;
 VAR_12->conf.IntType = VAR_3;
 VAR_12->conf.ConfigIndex = 1;

 VAR_13 = FUNC_1(sizeof(struct wl3501_card));
 if (!VAR_13)
  goto out_link;


 VAR_13->netdev_ops = &VAR_11;
 VAR_13->watchdog_timeo = 5 * VAR_2;

 VAR_14 = FUNC_2(VAR_13);
 VAR_14->wireless_data.spy_data = &VAR_14->spy_data;
 VAR_14->p_dev = VAR_12;
 VAR_13->wireless_data = &VAR_14->wireless_data;
 VAR_13->wireless_handlers = &VAR_9;
 FUNC_0(VAR_13, &VAR_8);
 FUNC_3(VAR_13);
 VAR_12->priv = VAR_12->irq.Instance = VAR_13;

 return FUNC_4(VAR_12);
out_link:
 return -VAR_1;
}
