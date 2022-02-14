
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int NextDescAddress; } ;
typedef TYPE_2__ tx_desc_819x_pci ;
struct r8192_priv {TYPE_1__* tx_ring; int pdev; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {unsigned int entries; int queue; scalar_t__ idx; scalar_t__ dma; TYPE_2__* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_4 (int ,int,scalar_t__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,
        unsigned int VAR_3, unsigned int VAR_4)
{
    struct r8192_priv *VAR_5 = (struct r8192_priv *)FUNC_2(VAR_2);
    tx_desc_819x_pci *VAR_6;
    dma_addr_t VAR_7;
    int VAR_8;

    VAR_6 = FUNC_4(VAR_5->pdev, sizeof(*VAR_6) * VAR_4, &VAR_7);
    if (!VAR_6 || (unsigned long)VAR_6 & 0xFF) {
        FUNC_0(VAR_0, "Cannot allocate TX ring (prio = %d)\n", VAR_3);
        return -VAR_1;
    }

    FUNC_3(VAR_6, 0, sizeof(*VAR_6)*VAR_4);
    VAR_5->tx_ring[VAR_3].desc = VAR_6;
    VAR_5->tx_ring[VAR_3].dma = VAR_7;
    VAR_5->tx_ring[VAR_3].idx = 0;
    VAR_5->tx_ring[VAR_3].entries = VAR_4;
    FUNC_5(&VAR_5->tx_ring[VAR_3].queue);

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
        VAR_6[VAR_8].NextDescAddress =
            FUNC_1((u32)VAR_7 + ((VAR_8 + 1) % VAR_4) * sizeof(*VAR_6));

    return 0;
}
