
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int rx_csum; } ;
struct TYPE_7__ {void (* function ) (unsigned long) ;unsigned long data; } ;
struct spider_net_card {struct net_device* netdev; TYPE_2__* pdev; scalar_t__ ignore_rx_ramfull; scalar_t__ num_rx_ints; int napi; TYPE_1__ options; TYPE_4__ aneg_timer; scalar_t__ aneg_count; TYPE_4__ tx_timer; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int features; int name; int dev; int irq; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int const*,int ) ;
 scalar_t__ FUNC_4 (struct spider_net_card*) ;
 int FUNC_5 (struct net_device*,int *,int ,int ) ;
 int * FUNC_6 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,struct net_device*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ VAR_6 ;
 void FUNC_11 (unsigned long) ;
 int VAR_7 ;
 int FUNC_12 (struct net_device*,struct sockaddr*) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static int
FUNC_14(struct spider_net_card *VAR_8)
{
 int VAR_9;
 struct net_device *VAR_10 = VAR_8->netdev;
 struct device_node *VAR_11;
 struct sockaddr VAR_12;
 const u8 *VAR_13;

 FUNC_0(VAR_10, &VAR_8->pdev->dev);

 FUNC_8(VAR_8->pdev, VAR_10);

 FUNC_2(&VAR_8->tx_timer);
 VAR_8->tx_timer.function =
  (void (*)(unsigned long)) VAR_6;
 VAR_8->tx_timer.data = (unsigned long) VAR_8;
 VAR_10->irq = VAR_8->pdev->irq;

 VAR_8->aneg_count = 0;
 FUNC_2(&VAR_8->aneg_timer);
 VAR_8->aneg_timer.function = FUNC_11;
 VAR_8->aneg_timer.data = (unsigned long) VAR_8;

 VAR_8->options.rx_csum = VAR_5;

 FUNC_5(VAR_10, &VAR_8->napi,
         VAR_7, VAR_4);

 FUNC_13(VAR_10);

 VAR_10->features = VAR_2 | VAR_3;



 VAR_10->irq = VAR_8->pdev->irq;
 VAR_8->num_rx_ints = 0;
 VAR_8->ignore_rx_ramfull = 0;

 VAR_11 = FUNC_7(VAR_8->pdev);
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_11, "local-mac-address", ((void*)0));
 if (!VAR_13)
  return -VAR_0;
 FUNC_3(VAR_12.sa_data, VAR_13, VAR_1);

 VAR_9 = FUNC_12(VAR_10, &VAR_12);
 if ((VAR_9) && (FUNC_4(VAR_8)))
  FUNC_1(&VAR_8->netdev->dev,
          "Failed to set MAC address: %i\n", VAR_9);

 VAR_9 = FUNC_10(VAR_10);
 if (VAR_9) {
  if (FUNC_4(VAR_8))
   FUNC_1(&VAR_8->netdev->dev,
           "Couldn't register net_device: %i\n", VAR_9);
  return VAR_9;
 }

 if (FUNC_4(VAR_8))
  FUNC_9("Initialized device %s.\n", VAR_10->name);

 return 0;
}
