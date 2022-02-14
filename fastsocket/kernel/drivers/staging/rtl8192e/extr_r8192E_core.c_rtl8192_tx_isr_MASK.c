
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TxBuffAddr; scalar_t__ OWN; } ;
typedef TYPE_1__ tx_desc_819x_pci ;
struct sk_buff {int len; } ;
struct rtl8192_tx_ring {size_t idx; int entries; int queue; TYPE_1__* desc; } ;
struct r8192_priv {int irq_tx_tasklet; TYPE_2__* ieee80211; int pdev; struct rtl8192_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ ack_tx_to_ieee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_3, int VAR_4)
{
    struct r8192_priv *VAR_5 = (struct r8192_priv *)FUNC_1(VAR_3);

    struct rtl8192_tx_ring *VAR_6 = &VAR_5->tx_ring[VAR_4];

    while (FUNC_7(&VAR_6->queue)) {
        tx_desc_819x_pci *VAR_7 = &VAR_6->desc[VAR_6->idx];
        struct sk_buff *VAR_8;




        if(VAR_4 != VAR_0) {
            if(VAR_7->OWN)
                return;
            VAR_6->idx = (VAR_6->idx + 1) % VAR_6->entries;
        }

        VAR_8 = FUNC_0(&VAR_6->queue);
        FUNC_5(VAR_5->pdev, FUNC_4(VAR_7->TxBuffAddr),
                VAR_8->len, VAR_2);

        FUNC_3(VAR_8);
    }
    if (VAR_4 == VAR_1){
        if (VAR_5->ieee80211->ack_tx_to_ieee){
            if (FUNC_6(VAR_3)){
                VAR_5->ieee80211->ack_tx_to_ieee = 0;
                FUNC_2(VAR_5->ieee80211, 1);
            }
        }
    }

    if(VAR_4 != VAR_0) {

        FUNC_8(&VAR_5->irq_tx_tasklet);
    }

}
