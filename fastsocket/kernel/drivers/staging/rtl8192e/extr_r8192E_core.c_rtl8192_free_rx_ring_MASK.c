
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct r8192_priv {int rxringcount; int * rx_ring; int rx_ring_dma; int pdev; int rxbuffersize; struct sk_buff** rx_buf; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
    struct r8192_priv *VAR_2 = FUNC_0(VAR_1);
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2->rxringcount; VAR_3++) {
        struct sk_buff *VAR_4 = VAR_2->rx_buf[VAR_3];
        if (!VAR_4)
            continue;

        FUNC_3(VAR_2->pdev,
                *((dma_addr_t *)VAR_4->cb),
                VAR_2->rxbuffersize, VAR_0);
        FUNC_1(VAR_4);
    }

    FUNC_2(VAR_2->pdev, sizeof(*VAR_2->rx_ring) * VAR_2->rxringcount,
            VAR_2->rx_ring, VAR_2->rx_ring_dma);
    VAR_2->rx_ring = ((void*)0);
}
