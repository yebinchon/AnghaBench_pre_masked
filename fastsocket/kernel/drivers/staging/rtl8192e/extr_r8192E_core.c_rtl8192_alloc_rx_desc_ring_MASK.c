
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int tail; scalar_t__ cb; } ;
struct r8192_priv {int rxringcount; int rxbuffersize; int pdev; struct sk_buff** rx_buf; TYPE_1__* rx_ring; scalar_t__ rx_idx; int rx_ring_dma; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int OWN; int EOR; int Length; int BufferAddress; } ;
typedef TYPE_1__ rx_desc_819x_pci ;
typedef int dma_addr_t ;


 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int ) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static short FUNC_7(struct net_device *VAR_3)
{
    struct r8192_priv *VAR_4 = FUNC_3(VAR_3);
    rx_desc_819x_pci *VAR_5 = ((void*)0);
    int VAR_6;

    VAR_4->rx_ring = FUNC_5(VAR_4->pdev,
            sizeof(*VAR_4->rx_ring) * VAR_4->rxringcount, &VAR_4->rx_ring_dma);

    if (!VAR_4->rx_ring || (unsigned long)VAR_4->rx_ring & 0xFF) {
        FUNC_0(VAR_0,"Cannot allocate RX ring\n");
        return -VAR_1;
    }

    FUNC_4(VAR_4->rx_ring, 0, sizeof(*VAR_4->rx_ring) * VAR_4->rxringcount);
    VAR_4->rx_idx = 0;

    for (VAR_6 = 0; VAR_6 < VAR_4->rxringcount; VAR_6++) {
        struct sk_buff *VAR_7 = FUNC_2(VAR_4->rxbuffersize);
        dma_addr_t *VAR_8;
        VAR_5 = &VAR_4->rx_ring[VAR_6];
        if (!VAR_7)
            return 0;
        VAR_4->rx_buf[VAR_6] = VAR_7;
        VAR_8 = (dma_addr_t *)VAR_7->cb;
        *VAR_8 = FUNC_6(VAR_4->pdev, VAR_7->tail,
                VAR_4->rxbuffersize, VAR_2);

        VAR_5->BufferAddress = FUNC_1(*VAR_8);

        VAR_5->Length = VAR_4->rxbuffersize;
        VAR_5->OWN = 1;
    }

    VAR_5->EOR = 1;
    return 0;
}
