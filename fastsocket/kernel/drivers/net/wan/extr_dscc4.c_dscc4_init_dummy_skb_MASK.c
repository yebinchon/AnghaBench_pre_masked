
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct dscc4_dev_priv {int tx_dirty; struct sk_buff** tx_skbuff; TYPE_1__* pci_priv; struct TxFD* tx_fd; } ;
struct TxFD {int state; int data; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct dscc4_dev_priv *VAR_5)
{
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_2(VAR_0);
 if (VAR_6) {
  int VAR_7 = VAR_5->tx_dirty%VAR_3;
  struct TxFD *VAR_8 = VAR_5->tx_fd + VAR_7;

  VAR_6->len = VAR_0;
  FUNC_4(VAR_6, VAR_4,
     FUNC_5(VAR_4) % VAR_0);
  VAR_8->state = VAR_1 | FUNC_0(VAR_0);
  VAR_8->data = FUNC_1(FUNC_3(VAR_5->pci_priv->pdev,
          VAR_6->data, VAR_0,
          VAR_2));
  VAR_5->tx_skbuff[VAR_7] = VAR_6;
 }
 return VAR_6;
}
