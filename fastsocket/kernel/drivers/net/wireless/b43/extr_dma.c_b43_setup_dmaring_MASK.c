
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hdr_format; } ;
struct b43_wldev {TYPE_2__* dev; int wl; TYPE_1__ fw; } ;
struct b43_dmaring {int nr_slots; int type; int index; int tx; int current_slot; struct b43_dmaring* meta; struct b43_dmaring* txhdr_cache; int last_injected_overflow; int frameoffset; int rx_buffersize; int * ops; int mmio_base; struct b43_wldev* dev; int skb; } ;
struct b43_dmadesc_meta {int dummy; } ;
typedef enum b43_dmatype { ____Placeholder_b43_dmatype } b43_dmatype ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct b43_dmaring*) ;
 scalar_t__ FUNC_3 (struct b43_dmaring*,int ,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ,struct b43_dmaring*,int,int ) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (struct b43_dmaring*) ;
 int FUNC_10 (struct b43_dmaring*) ;
 int VAR_14 ;
 void* FUNC_11 (int,int,int) ;
 int FUNC_12 (struct b43_dmaring*) ;
 struct b43_dmaring* FUNC_13 (int,int) ;

__attribute__((used)) static
struct b43_dmaring *FUNC_14(struct b43_wldev *VAR_15,
          int VAR_16,
          int VAR_17,
          enum b43_dmatype VAR_18)
{
 struct b43_dmaring *VAR_19;
 int VAR_20, VAR_21;
 dma_addr_t VAR_22;

 VAR_19 = FUNC_13(sizeof(*VAR_19), VAR_10);
 if (!VAR_19)
  goto out;

 VAR_19->nr_slots = VAR_6;
 if (VAR_17)
  VAR_19->nr_slots = VAR_7;

 VAR_19->meta = FUNC_11(VAR_19->nr_slots, sizeof(struct b43_dmadesc_meta),
        VAR_10);
 if (!VAR_19->meta)
  goto err_kfree_ring;
 for (VAR_20 = 0; VAR_20 < VAR_19->nr_slots; VAR_20++)
  VAR_19->meta->skb = VAR_5;

 VAR_19->type = VAR_18;
 VAR_19->dev = VAR_15;
 VAR_19->mmio_base = FUNC_4(VAR_18, VAR_16);
 VAR_19->index = VAR_16;
 if (VAR_18 == VAR_4)
  VAR_19->ops = &VAR_13;
 else
  VAR_19->ops = &VAR_12;
 if (VAR_17) {
  VAR_19->tx = 1;
  VAR_19->current_slot = -1;
 } else {
  if (VAR_19->index == 0) {
   switch (VAR_15->fw.hdr_format) {
   case 128:
    VAR_19->rx_buffersize = VAR_2;
    VAR_19->frameoffset = VAR_3;
    break;
   case 129:
   case 130:
    VAR_19->rx_buffersize = VAR_0;
    VAR_19->frameoffset = VAR_1;
    break;
   }
  } else
   FUNC_0(1);
 }




 if (VAR_17) {

  FUNC_1(VAR_7 % VAR_11 != 0);

  VAR_19->txhdr_cache = FUNC_11(VAR_19->nr_slots / VAR_11,
         FUNC_5(VAR_15),
         VAR_10);
  if (!VAR_19->txhdr_cache)
   goto err_kfree_meta;


  VAR_22 = FUNC_7(VAR_15->dev->dma_dev,
       VAR_19->txhdr_cache,
       FUNC_5(VAR_15),
       VAR_8);

  if (FUNC_3(VAR_19, VAR_22,
       FUNC_5(VAR_15), 1)) {

   FUNC_12(VAR_19->txhdr_cache);
   VAR_19->txhdr_cache = FUNC_11(VAR_19->nr_slots / VAR_11,
          FUNC_5(VAR_15),
          VAR_10 | VAR_9);
   if (!VAR_19->txhdr_cache)
    goto err_kfree_meta;

   VAR_22 = FUNC_7(VAR_15->dev->dma_dev,
        VAR_19->txhdr_cache,
        FUNC_5(VAR_15),
        VAR_8);

   if (FUNC_3(VAR_19, VAR_22,
        FUNC_5(VAR_15), 1)) {

    FUNC_6(VAR_15->wl,
           "TXHDR DMA allocation failed\n");
    goto err_kfree_txhdr_cache;
   }
  }

  FUNC_8(VAR_15->dev->dma_dev,
     VAR_22, FUNC_5(VAR_15),
     VAR_8);
 }

 VAR_21 = FUNC_2(VAR_19);
 if (VAR_21)
  goto err_kfree_txhdr_cache;
 VAR_21 = FUNC_9(VAR_19);
 if (VAR_21)
  goto err_free_ringmemory;

      out:
 return VAR_19;

      err_free_ringmemory:
 FUNC_10(VAR_19);
      err_kfree_txhdr_cache:
 FUNC_12(VAR_19->txhdr_cache);
      err_kfree_meta:
 FUNC_12(VAR_19->meta);
      err_kfree_ring:
 FUNC_12(VAR_19);
 VAR_19 = ((void*)0);
 goto out;
}
