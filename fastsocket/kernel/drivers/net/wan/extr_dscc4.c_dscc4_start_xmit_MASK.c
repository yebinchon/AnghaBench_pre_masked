
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct net_device {void* trans_start; } ;
struct dscc4_pci_priv {int pdev; } ;
struct dscc4_dev_priv {int tx_current; int tx_dirty; int lock; struct TxFD* tx_fd; struct sk_buff** tx_skbuff; struct dscc4_pci_priv* pci_priv; } ;
struct TxFD {int state; int complete; void* jiffies; int data; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct dscc4_dev_priv*,struct net_device*) ;
 struct dscc4_dev_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct dscc4_dev_priv*,struct net_device*) ;
 int FUNC_5 (struct net_device*,struct dscc4_dev_priv*,char*) ;
 scalar_t__ FUNC_6 (struct dscc4_dev_priv*,struct net_device*) ;
 void* VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_6,
       struct net_device *VAR_7)
{
 struct dscc4_dev_priv *VAR_8 = FUNC_3(VAR_7);
 struct dscc4_pci_priv *VAR_9 = VAR_8->pci_priv;
 struct TxFD *VAR_10;
 int VAR_11;

 VAR_11 = VAR_8->tx_current%VAR_3;
 VAR_8->tx_skbuff[VAR_11] = VAR_6;
 VAR_10 = VAR_8->tx_fd + VAR_11;
 VAR_10->state = VAR_0 | FUNC_0(VAR_6->len);
 VAR_10->data = FUNC_1(FUNC_9(VAR_9->pdev, VAR_6->data, VAR_6->len,
         VAR_2));
 VAR_10->complete = 0x00000000;
 VAR_10->jiffies = VAR_5;
 FUNC_7();







 VAR_7->trans_start = VAR_5;

 if (VAR_4 > 2)
  FUNC_5(VAR_7, VAR_8, "Xmit");

 if (!((++VAR_8->tx_current - VAR_8->tx_dirty)%VAR_3))
  FUNC_8(VAR_7);

 if (FUNC_6(VAR_8, VAR_7))
  FUNC_2(VAR_8, VAR_7);

 return VAR_1;
}
