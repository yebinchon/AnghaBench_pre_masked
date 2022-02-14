
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct rfd {int dummy; } ;
struct TYPE_6__ {int phy_id; } ;
struct nic {int flags; int loopback; TYPE_3__ mii; int netdev; TYPE_2__* rx_to_clean; int pdev; } ;
typedef enum loopback { ____Placeholder_loopback } loopback ;
struct TYPE_5__ {TYPE_1__* skb; int dma_addr; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nic*) ;
 int FUNC_1 (struct nic*) ;
 int FUNC_2 (struct nic*) ;
 int FUNC_3 (struct nic*) ;
 int FUNC_4 (struct nic*) ;
 int FUNC_5 (struct nic*) ;
 int FUNC_6 (struct nic*,int *) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int) ;
 struct sk_buff* FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_15(struct nic *VAR_11, enum loopback VAR_12)
{
 int VAR_13;
 struct sk_buff *VAR_14;






 if ((VAR_13 = FUNC_4(VAR_11)))
  return VAR_13;
 if ((VAR_13 = FUNC_0(VAR_11)))
  goto err_clean_rx;


 if (VAR_11->flags & VAR_7 && VAR_12 == VAR_10)
  VAR_12 = VAR_8;

 VAR_11->loopback = VAR_12;
 if ((VAR_13 = FUNC_2(VAR_11)))
  goto err_loopback_none;

 if (VAR_12 == VAR_10)
  FUNC_8(VAR_11->netdev, VAR_11->mii.phy_id, VAR_4,
   VAR_0);

 FUNC_6(VAR_11, ((void*)0));

 if (!(VAR_14 = FUNC_12(VAR_11->netdev, VAR_3))) {
  VAR_13 = -VAR_2;
  goto err_loopback_none;
 }
 FUNC_14(VAR_14, VAR_3);
 FUNC_10(VAR_14->data, 0xFF, VAR_3);
 FUNC_7(VAR_14, VAR_11->netdev);

 FUNC_11(10);

 FUNC_13(VAR_11->pdev, VAR_11->rx_to_clean->dma_addr,
   VAR_6, VAR_5);

 if (FUNC_9(VAR_11->rx_to_clean->skb->data + sizeof(struct rfd),
    VAR_14->data, VAR_3))
  VAR_13 = -VAR_1;

err_loopback_none:
 FUNC_8(VAR_11->netdev, VAR_11->mii.phy_id, VAR_4, 0);
 VAR_11->loopback = VAR_9;
 FUNC_1(VAR_11);
 FUNC_3(VAR_11);
err_clean_rx:
 FUNC_5(VAR_11);
 return VAR_13;
}
