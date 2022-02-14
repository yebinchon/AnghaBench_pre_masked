
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_info {int dummy; } ;
struct dma_desc {int dummy; } ;
struct b44 {int flags; scalar_t__ tx_ring_dma; struct dma_desc* tx_ring; TYPE_1__* sdev; scalar_t__ rx_ring_dma; struct dma_desc* rx_ring; void* tx_buffers; void* rx_buffers; } ;
typedef int gfp_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct b44*) ;
 void* FUNC_2 (int ,int,scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (int ,struct dma_desc*,int,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct dma_desc*) ;
 void* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct b44 *VAR_8, gfp_t VAR_9)
{
 int VAR_10;

 VAR_10 = VAR_2 * sizeof(struct ring_info);
 VAR_8->rx_buffers = FUNC_6(VAR_10, VAR_9);
 if (!VAR_8->rx_buffers)
  goto out_err;

 VAR_10 = VAR_3 * sizeof(struct ring_info);
 VAR_8->tx_buffers = FUNC_6(VAR_10, VAR_9);
 if (!VAR_8->tx_buffers)
  goto out_err;

 VAR_10 = VAR_5;
 VAR_8->rx_ring = FUNC_2(VAR_8->sdev->dma_dev, VAR_10,
      &VAR_8->rx_ring_dma, VAR_9);
 if (!VAR_8->rx_ring) {



  struct dma_desc *VAR_11;
  dma_addr_t VAR_12;

  VAR_11 = FUNC_6(VAR_10, VAR_9);
  if (!VAR_11)
   goto out_err;

  VAR_12 = FUNC_3(VAR_8->sdev->dma_dev, VAR_11,
          VAR_5,
          VAR_4);

  if (FUNC_4(VAR_8->sdev->dma_dev, VAR_12) ||
   VAR_12 + VAR_10 > FUNC_0(30)) {
   FUNC_5(VAR_11);
   goto out_err;
  }

  VAR_8->rx_ring = VAR_11;
  VAR_8->rx_ring_dma = VAR_12;
  VAR_8->flags |= VAR_0;
 }

 VAR_8->tx_ring = FUNC_2(VAR_8->sdev->dma_dev, VAR_10,
      &VAR_8->tx_ring_dma, VAR_9);
 if (!VAR_8->tx_ring) {



  struct dma_desc *VAR_13;
  dma_addr_t VAR_14;

  VAR_13 = FUNC_6(VAR_10, VAR_9);
  if (!VAR_13)
   goto out_err;

  VAR_14 = FUNC_3(VAR_8->sdev->dma_dev, VAR_13,
          VAR_5,
          VAR_6);

  if (FUNC_4(VAR_8->sdev->dma_dev, VAR_14) ||
   VAR_14 + VAR_10 > FUNC_0(30)) {
   FUNC_5(VAR_13);
   goto out_err;
  }

  VAR_8->tx_ring = VAR_13;
  VAR_8->tx_ring_dma = VAR_14;
  VAR_8->flags |= VAR_1;
 }

 return 0;

out_err:
 FUNC_1(VAR_8);
 return -VAR_7;
}
