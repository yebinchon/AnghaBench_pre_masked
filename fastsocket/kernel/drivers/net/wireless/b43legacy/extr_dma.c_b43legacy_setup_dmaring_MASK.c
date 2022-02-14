
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43legacy_wldev {TYPE_1__* dev; } ;
struct b43legacy_txhdr_fw3 {int dummy; } ;
struct b43legacy_dmaring {int type; int nr_slots; int index; int tx; int current_slot; struct b43legacy_dmaring* meta; struct b43legacy_dmaring* txhdr_cache; int last_injected_overflow; int frameoffset; int rx_buffersize; int mmio_base; struct b43legacy_wldev* dev; } ;
struct b43legacy_dmadesc_meta {int dummy; } ;
typedef enum b43legacy_dmatype { ____Placeholder_b43legacy_dmatype } b43legacy_dmatype ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct b43legacy_dmaring*) ;
 scalar_t__ FUNC_2 (struct b43legacy_dmaring*,int ,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,struct b43legacy_dmaring*,int,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (struct b43legacy_dmaring*) ;
 int FUNC_7 (struct b43legacy_dmaring*) ;
 int VAR_9 ;
 void* FUNC_8 (int,int,int) ;
 int FUNC_9 (struct b43legacy_dmaring*) ;
 struct b43legacy_dmaring* FUNC_10 (int,int) ;

__attribute__((used)) static
struct b43legacy_dmaring *FUNC_11(struct b43legacy_wldev *VAR_10,
        int VAR_11,
        int VAR_12,
        enum b43legacy_dmatype VAR_13)
{
 struct b43legacy_dmaring *VAR_14;
 int VAR_15;
 int VAR_16;
 dma_addr_t VAR_17;

 VAR_14 = FUNC_10(sizeof(*VAR_14), VAR_8);
 if (!VAR_14)
  goto out;
 VAR_14->type = VAR_13;
 VAR_14->dev = VAR_10;

 VAR_16 = VAR_4;
 if (VAR_12)
  VAR_16 = VAR_5;

 VAR_14->meta = FUNC_8(VAR_16, sizeof(struct b43legacy_dmadesc_meta),
        VAR_8);
 if (!VAR_14->meta)
  goto err_kfree_ring;
 if (VAR_12) {
  VAR_14->txhdr_cache = FUNC_8(VAR_16,
     sizeof(struct b43legacy_txhdr_fw3),
     VAR_8);
  if (!VAR_14->txhdr_cache)
   goto err_kfree_meta;


  VAR_17 = FUNC_4(VAR_10->dev->dma_dev, VAR_14->txhdr_cache,
           sizeof(struct b43legacy_txhdr_fw3),
           VAR_6);

  if (FUNC_2(VAR_14, VAR_17,
     sizeof(struct b43legacy_txhdr_fw3), 1)) {

   FUNC_9(VAR_14->txhdr_cache);
   VAR_14->txhdr_cache = FUNC_8(VAR_16,
     sizeof(struct b43legacy_txhdr_fw3),
     VAR_8 | VAR_7);
   if (!VAR_14->txhdr_cache)
    goto err_kfree_meta;

   VAR_17 = FUNC_4(VAR_10->dev->dma_dev,
     VAR_14->txhdr_cache,
     sizeof(struct b43legacy_txhdr_fw3),
     VAR_6);

   if (FUNC_2(VAR_14, VAR_17,
     sizeof(struct b43legacy_txhdr_fw3), 1))
    goto err_kfree_txhdr_cache;
  }

  FUNC_5(VAR_10->dev->dma_dev, VAR_17,
     sizeof(struct b43legacy_txhdr_fw3),
     VAR_6);
 }

 VAR_14->nr_slots = VAR_16;
 VAR_14->mmio_base = FUNC_3(VAR_13, VAR_11);
 VAR_14->index = VAR_11;
 if (VAR_12) {
  VAR_14->tx = 1;
  VAR_14->current_slot = -1;
 } else {
  if (VAR_14->index == 0) {
   VAR_14->rx_buffersize = VAR_0;
   VAR_14->frameoffset = VAR_1;
  } else if (VAR_14->index == 3) {
   VAR_14->rx_buffersize = VAR_2;
   VAR_14->frameoffset = VAR_3;
  } else
   FUNC_0(1);
 }




 VAR_15 = FUNC_1(VAR_14);
 if (VAR_15)
  goto err_kfree_txhdr_cache;
 VAR_15 = FUNC_6(VAR_14);
 if (VAR_15)
  goto err_free_ringmemory;

out:
 return VAR_14;

err_free_ringmemory:
 FUNC_7(VAR_14);
err_kfree_txhdr_cache:
 FUNC_9(VAR_14->txhdr_cache);
err_kfree_meta:
 FUNC_9(VAR_14->meta);
err_kfree_ring:
 FUNC_9(VAR_14);
 VAR_14 = ((void*)0);
 goto out;
}
