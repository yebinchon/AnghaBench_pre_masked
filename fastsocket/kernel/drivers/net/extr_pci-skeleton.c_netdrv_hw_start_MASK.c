
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netdrv_private {size_t chipset; int rx_ring_dma; int tx_bufs_dma; int* tx_buf; int tx_bufs; scalar_t__ cur_rx; void* mmio_addr; } ;
struct net_device {scalar_t__ dev_addr; } ;
struct TYPE_2__ {int RxConfigMask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (int) ;
 struct netdrv_private* FUNC_11 (struct net_device*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 TYPE_1__* VAR_22 ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15 (struct net_device *VAR_23)
{
 struct netdrv_private *VAR_24 = FUNC_11(VAR_23);
 void *VAR_25 = VAR_24->mmio_addr;
 u32 VAR_26;

 FUNC_0 ("ENTER\n");


 FUNC_8 (VAR_3, (FUNC_3 (VAR_3) & VAR_4) | VAR_5);
 FUNC_14 (100);


 for (VAR_26 = 1000; VAR_26 > 0; VAR_26--)
  if ((FUNC_3 (VAR_3) & VAR_5) == 0)
   break;


 FUNC_7 (VAR_9 + 0, FUNC_10 (*(u32 *) (VAR_23->dev_addr + 0)));
 FUNC_7 (VAR_9 + 4, FUNC_10 (*(u32 *) (VAR_23->dev_addr + 4)));


 FUNC_9 (VAR_3, (FUNC_3 (VAR_3) & VAR_4) |
      VAR_6 | VAR_7);

 VAR_26 = VAR_21 |
     (FUNC_2 (VAR_14) & VAR_22[VAR_24->chipset].RxConfigMask);
 FUNC_7 (VAR_14, VAR_26);


 FUNC_6 (VAR_18, (VAR_16 << VAR_19));


 FUNC_9 (VAR_0, VAR_2);
 FUNC_14 (10);

 VAR_24->cur_rx = 0;


 FUNC_9 (VAR_0, VAR_1);
 FUNC_14 (10);


 FUNC_7 (VAR_13, VAR_24->rx_ring_dma);


 for (VAR_26 = 0; VAR_26 < VAR_12; VAR_26++)
  FUNC_7 (VAR_17 + (VAR_26 * 4), VAR_24->tx_bufs_dma + (VAR_24->tx_buf[VAR_26] - VAR_24->tx_bufs));

 FUNC_7 (VAR_15, 0);

 FUNC_12 (VAR_23);


 FUNC_4 (VAR_10, FUNC_1 (VAR_10) & VAR_11);


 FUNC_9 (VAR_3, (FUNC_3 (VAR_3) & VAR_4) |
      VAR_6 | VAR_7);


 FUNC_5 (VAR_8, VAR_20);

 FUNC_13 (VAR_23);

 FUNC_0 ("EXIT\n");
}
