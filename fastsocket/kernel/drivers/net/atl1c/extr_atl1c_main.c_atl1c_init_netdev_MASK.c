
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int features; int watchdog_timeo; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pci_dev*,struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_8, struct pci_dev *VAR_9)
{
 FUNC_0(VAR_8, &VAR_9->dev);
 FUNC_2(VAR_9, VAR_8);

 VAR_8->netdev_ops = &VAR_7;
 VAR_8->watchdog_timeo = VAR_0;
 FUNC_1(VAR_8);


 VAR_8->features = VAR_4 |
    VAR_1 |
    VAR_3 |
    VAR_2 |
    VAR_5 |
    VAR_6;
 return 0;
}
