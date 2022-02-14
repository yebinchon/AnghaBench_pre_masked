
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; int protocol; } ;
struct net_device {int dummy; } ;
struct dscc4_dev_priv {unsigned int rx_dirty; TYPE_1__* pci_priv; struct sk_buff** rx_skbuff; struct RxFD* rx_fd; } ;
struct RxFD {scalar_t__ data; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int const) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (int ,int ,int const,int ) ;

__attribute__((used)) static inline int FUNC_5(struct dscc4_dev_priv *VAR_3,
     struct net_device *VAR_4)
{
 unsigned int VAR_5 = VAR_3->rx_dirty%VAR_2;
 struct RxFD *VAR_6 = VAR_3->rx_fd + VAR_5;
 const int VAR_7 = FUNC_0(VAR_0);
 struct sk_buff *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_2(VAR_7);
 VAR_3->rx_skbuff[VAR_5] = VAR_8;
 if (VAR_8) {
  VAR_8->protocol = FUNC_3(VAR_8, VAR_4);
  VAR_6->data = FUNC_1(FUNC_4(VAR_3->pci_priv->pdev,
       VAR_8->data, VAR_7, VAR_1));
 } else {
  VAR_6->data = 0;
  VAR_9 = -1;
 }
 return VAR_9;
}
