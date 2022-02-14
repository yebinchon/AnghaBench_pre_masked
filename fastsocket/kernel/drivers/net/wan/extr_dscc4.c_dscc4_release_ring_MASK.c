
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct pci_dev {int dummy; } ;
struct dscc4_dev_priv {struct sk_buff** rx_skbuff; struct sk_buff** tx_skbuff; int rx_fd_dma; int tx_fd_dma; struct TxFD* rx_fd; struct TxFD* tx_fd; TYPE_1__* pci_priv; } ;
struct TxFD {int data; } ;
struct RxFD {int data; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*,int ,struct TxFD*,int ) ;
 int FUNC_4 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dscc4_dev_priv *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->pci_priv->pdev;
 struct TxFD *VAR_9 = VAR_7->tx_fd;
 struct RxFD *VAR_10 = VAR_7->rx_fd;
 struct sk_buff **VAR_11;
 int VAR_12;

 FUNC_3(VAR_8, VAR_6, VAR_9, VAR_7->tx_fd_dma);
 FUNC_3(VAR_8, VAR_4, VAR_10, VAR_7->rx_fd_dma);

 VAR_11 = VAR_7->tx_skbuff;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (*VAR_11) {
   FUNC_4(VAR_8, FUNC_2(VAR_9->data),
    (*VAR_11)->len, VAR_2);
   FUNC_1(*VAR_11);
  }
  VAR_11++;
  VAR_9++;
 }

 VAR_11 = VAR_7->rx_skbuff;
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (*VAR_11) {
   FUNC_4(VAR_8, FUNC_2(VAR_10->data),
    FUNC_0(VAR_0), VAR_1);
   FUNC_1(*VAR_11);
  }
  VAR_11++;
  VAR_10++;
 }
}
