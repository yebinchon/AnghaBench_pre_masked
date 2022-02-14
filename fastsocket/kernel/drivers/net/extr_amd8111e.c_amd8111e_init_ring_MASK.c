
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct amd8111e_tx_dr {int dummy; } ;
struct amd8111e_rx_dr {int dummy; } ;
struct amd8111e_priv {int tx_ring_dma_addr; TYPE_2__* tx_ring; int pci_dev; int rx_ring_dma_addr; TYPE_2__* rx_ring; scalar_t__ rx_buff_len; int * rx_dma_addr; TYPE_1__** rx_skbuff; scalar_t__ opened; scalar_t__ tx_ring_idx; scalar_t__ tx_complete_idx; scalar_t__ tx_idx; scalar_t__ rx_idx; } ;
struct TYPE_6__ {void* buff_count; scalar_t__ tx_flags; scalar_t__ buff_phy_addr; void* rx_flags; } ;
struct TYPE_5__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 struct amd8111e_priv* FUNC_6 (struct net_device*) ;
 void* FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int,TYPE_2__*,int ) ;
 int FUNC_9 (int ,int ,scalar_t__,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_6)
{
 struct amd8111e_priv *VAR_7 = FUNC_6(VAR_6);
 int VAR_8;

 VAR_7->rx_idx = VAR_7->tx_idx = 0;
 VAR_7->tx_complete_idx = 0;
 VAR_7->tx_ring_idx = 0;


 if(VAR_7->opened)

  FUNC_0(VAR_6);

 else{

       if((VAR_7->tx_ring = FUNC_7(VAR_7->pci_dev,
   sizeof(struct amd8111e_tx_dr)*VAR_3,
   &VAR_7->tx_ring_dma_addr)) == ((void*)0))

   goto err_no_mem;

       if((VAR_7->rx_ring = FUNC_7(VAR_7->pci_dev,
   sizeof(struct amd8111e_rx_dr)*VAR_2,
   &VAR_7->rx_ring_dma_addr)) == ((void*)0))

   goto err_free_tx_ring;

 }

 FUNC_1(VAR_6);


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {

  if (!(VAR_7->rx_skbuff[VAR_8] = FUNC_4(VAR_7->rx_buff_len))) {

    for(--VAR_8; VAR_8 >= 0 ;VAR_8--)
     FUNC_5(VAR_7->rx_skbuff[VAR_8]);
    goto err_free_rx_ring;
  }
  FUNC_10(VAR_7->rx_skbuff[VAR_8],2);
 }

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7->rx_dma_addr[VAR_8] = FUNC_9(VAR_7->pci_dev,
   VAR_7->rx_skbuff[VAR_8]->data,VAR_7->rx_buff_len-2, VAR_5);

  VAR_7->rx_ring[VAR_8].buff_phy_addr = FUNC_3(VAR_7->rx_dma_addr[VAR_8]);
  VAR_7->rx_ring[VAR_8].buff_count = FUNC_2(VAR_7->rx_buff_len-2);
  FUNC_11();
  VAR_7->rx_ring[VAR_8].rx_flags = FUNC_2(VAR_4);
 }


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7->tx_ring[VAR_8].buff_phy_addr = 0;
  VAR_7->tx_ring[VAR_8].tx_flags = 0;
  VAR_7->tx_ring[VAR_8].buff_count = 0;
 }

 return 0;

err_free_rx_ring:

 FUNC_8(VAR_7->pci_dev,
  sizeof(struct amd8111e_rx_dr)*VAR_2,VAR_7->rx_ring,
  VAR_7->rx_ring_dma_addr);

err_free_tx_ring:

 FUNC_8(VAR_7->pci_dev,
   sizeof(struct amd8111e_tx_dr)*VAR_3,VAR_7->tx_ring,
   VAR_7->tx_ring_dma_addr);

err_no_mem:
 return -VAR_0;
}
