
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TxBuffAddr; } ;
typedef TYPE_1__ tx_desc_819x_pci ;
struct sk_buff {int len; } ;
struct rtl8192_tx_ring {size_t idx; int entries; int queue; TYPE_1__* desc; } ;
struct r8192_priv {int rxringcount; int pdev; struct rtl8192_tx_ring* tx_ring; scalar_t__ rx_idx; TYPE_2__* rx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int OWN; } ;
typedef TYPE_2__ rx_desc_819x_pci ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int *) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2)
{
    struct r8192_priv *VAR_3 = FUNC_1(VAR_2);
    int VAR_4;


    if(VAR_3->rx_ring) {
        rx_desc_819x_pci *VAR_5 = ((void*)0);
        for (VAR_4 = 0; VAR_4 < VAR_3->rxringcount; VAR_4++) {
            VAR_5 = &VAR_3->rx_ring[VAR_4];
            VAR_5->OWN = 1;
        }
        VAR_3->rx_idx = 0;
    }



    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (VAR_3->tx_ring[VAR_4].desc) {
            struct rtl8192_tx_ring *VAR_6 = &VAR_3->tx_ring[VAR_4];

            while (FUNC_5(&VAR_6->queue)) {
                tx_desc_819x_pci *VAR_7 = &VAR_6->desc[VAR_6->idx];
                struct sk_buff *VAR_8 = FUNC_0(&VAR_6->queue);

                FUNC_4(VAR_3->pdev, FUNC_3(VAR_7->TxBuffAddr),
                        VAR_8->len, VAR_1);
                FUNC_2(VAR_8);
                VAR_6->idx = (VAR_6->idx + 1) % VAR_6->entries;
            }
            VAR_6->idx = 0;
        }
    }
}
