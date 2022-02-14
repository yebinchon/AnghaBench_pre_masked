
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {unsigned char* data; size_t len; } ;
struct ieee80211_tx_info {int flags; } ;
struct b43_private_tx_info {unsigned char* bouncebuffer; } ;
struct b43_dmaring {int current_slot; int used_slots; int dev; int * txhdr_cache; struct b43_dma_ops* ops; } ;
struct b43_dmadesc_meta {int is_last_fragment; void* dmaaddr; struct sk_buff* skb; } ;
struct b43_dmadesc_generic {int dummy; } ;
struct b43_dma_ops {int (* poke_tx ) (struct b43_dmaring*,int ) ;int (* fill_descriptor ) (struct b43_dmaring*,struct b43_dmadesc_generic*,void*,size_t,int,int,int) ;struct b43_dmadesc_generic* (* idx2desc ) (struct b43_dmaring*,int,struct b43_dmadesc_meta**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct b43_dmaring*,void*,size_t,int) ;
 int FUNC_2 (int ,int *,struct sk_buff*,struct ieee80211_tx_info*,int ) ;
 struct b43_private_tx_info* FUNC_3 (struct ieee80211_tx_info*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct b43_dmaring*,int) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (unsigned char*,size_t,int) ;
 void* FUNC_9 (struct b43_dmaring*,unsigned char*,size_t,int) ;
 int FUNC_10 (struct b43_dmadesc_meta*,int ,int) ;
 int FUNC_11 (struct b43_dmaring*,int) ;
 int FUNC_12 (struct b43_dmaring*) ;
 struct b43_dmadesc_generic* FUNC_13 (struct b43_dmaring*,int,struct b43_dmadesc_meta**) ;
 int FUNC_14 (struct b43_dmaring*,struct b43_dmadesc_generic*,void*,size_t,int,int,int) ;
 struct b43_dmadesc_generic* FUNC_15 (struct b43_dmaring*,int,struct b43_dmadesc_meta**) ;
 int FUNC_16 (struct b43_dmaring*,struct b43_dmadesc_generic*,void*,size_t,int,int,int) ;
 int FUNC_17 (struct b43_dmaring*,int ) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct b43_dmaring*,void*,size_t,int) ;
 int FUNC_20 () ;

__attribute__((used)) static int FUNC_21(struct b43_dmaring *VAR_8,
      struct sk_buff *VAR_9)
{
 const struct b43_dma_ops *VAR_10 = VAR_8->ops;
 struct ieee80211_tx_info *VAR_11 = FUNC_0(VAR_9);
 struct b43_private_tx_info *VAR_12 = FUNC_3(VAR_11);
 u8 *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17;
 struct b43_dmadesc_generic *VAR_18;
 struct b43_dmadesc_meta *VAR_19;
 struct b43_dmadesc_meta *VAR_20;
 u16 VAR_21;
 size_t VAR_22 = FUNC_5(VAR_8->dev);






 VAR_15 = VAR_8->current_slot;
 VAR_16 = VAR_8->used_slots;


 VAR_14 = FUNC_12(VAR_8);
 VAR_18 = VAR_10->idx2desc(VAR_8, VAR_14, &VAR_20);
 FUNC_10(VAR_20, 0, sizeof(*VAR_20));

 VAR_13 = &(VAR_8->txhdr_cache[(VAR_14 / VAR_7) * VAR_22]);
 VAR_21 = FUNC_6(VAR_8, VAR_14);
 VAR_17 = FUNC_2(VAR_8->dev, VAR_13,
     VAR_9, VAR_11, VAR_21);
 if (FUNC_18(VAR_17)) {
  VAR_8->current_slot = VAR_15;
  VAR_8->used_slots = VAR_16;
  return VAR_17;
 }

 VAR_20->dmaaddr = FUNC_9(VAR_8, (unsigned char *)VAR_13,
        VAR_22, 1);
 if (FUNC_1(VAR_8, VAR_20->dmaaddr, VAR_22, 1)) {
  VAR_8->current_slot = VAR_15;
  VAR_8->used_slots = VAR_16;
  return -VAR_2;
 }
 VAR_10->fill_descriptor(VAR_8, VAR_18, VAR_20->dmaaddr,
        VAR_22, 1, 0, 0);


 VAR_14 = FUNC_12(VAR_8);
 VAR_18 = VAR_10->idx2desc(VAR_8, VAR_14, &VAR_19);
 FUNC_10(VAR_19, 0, sizeof(*VAR_19));

 VAR_19->skb = VAR_9;
 VAR_19->is_last_fragment = 1;
 VAR_12->bouncebuffer = ((void*)0);

 VAR_19->dmaaddr = FUNC_9(VAR_8, VAR_9->data, VAR_9->len, 1);

 if (FUNC_1(VAR_8, VAR_19->dmaaddr, VAR_9->len, 1)) {
  VAR_12->bouncebuffer = FUNC_8(VAR_9->data, VAR_9->len,
        VAR_4 | VAR_5);
  if (!VAR_12->bouncebuffer) {
   VAR_8->current_slot = VAR_15;
   VAR_8->used_slots = VAR_16;
   VAR_17 = -VAR_3;
   goto out_unmap_hdr;
  }

  VAR_19->dmaaddr = FUNC_9(VAR_8, VAR_12->bouncebuffer, VAR_9->len, 1);
  if (FUNC_1(VAR_8, VAR_19->dmaaddr, VAR_9->len, 1)) {
   FUNC_7(VAR_12->bouncebuffer);
   VAR_12->bouncebuffer = ((void*)0);
   VAR_8->current_slot = VAR_15;
   VAR_8->used_slots = VAR_16;
   VAR_17 = -VAR_2;
   goto out_unmap_hdr;
  }
 }

 VAR_10->fill_descriptor(VAR_8, VAR_18, VAR_19->dmaaddr, VAR_9->len, 0, 1, 1);

 if (VAR_11->flags & VAR_6) {


  FUNC_4(VAR_8->dev, VAR_0,
    VAR_1, VAR_21);
 }

 FUNC_20();
 VAR_10->poke_tx(VAR_8, FUNC_11(VAR_8, VAR_14));
 return 0;

out_unmap_hdr:
 FUNC_19(VAR_8, VAR_20->dmaaddr,
    VAR_22, 1);
 return VAR_17;
}
