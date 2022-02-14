
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct urb {int status; TYPE_1__* dev; TYPE_2__* context; } ;
struct TYPE_6__ {TYPE_3__* netdev; int tx_skb; } ;
typedef TYPE_2__ rtl8150_t ;
struct TYPE_7__ {int trans_start; int name; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 rtl8150_t *VAR_2;
 int VAR_3 = VAR_1->status;

 VAR_2 = VAR_1->context;
 if (!VAR_2)
  return;
 FUNC_1(VAR_2->tx_skb);
 if (!FUNC_2(VAR_2->netdev))
  return;
 if (VAR_3)
  FUNC_0(&VAR_1->dev->dev, "%s: Tx status %d\n",
    VAR_2->netdev->name, VAR_3);
 VAR_2->netdev->trans_start = VAR_0;
 FUNC_3(VAR_2->netdev);
}
