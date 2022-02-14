
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {unsigned char* data; int len; unsigned char* cb; int dev; } ;
struct ieee80211_tx_info {int dummy; } ;
struct b43legacy_txhdr_fw3 {int dummy; } ;
struct b43legacy_dmaring {int current_slot; int used_slots; int dev; int * txhdr_cache; } ;
struct b43legacy_dmadesc_meta {int is_last_fragment; void* dmaaddr; struct sk_buff* skb; } ;
struct b43legacy_dmadesc32 {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr_frags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct b43legacy_dmaring*,void*,int,int) ;
 int FUNC_4 (int ,int *,unsigned char*,int,struct ieee80211_tx_info*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct b43legacy_dmaring*,int) ;
 void* FUNC_7 (struct b43legacy_dmaring*,unsigned char*,int,int) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 int FUNC_9 (struct b43legacy_dmadesc_meta*,int ,int) ;
 int FUNC_10 (struct b43legacy_dmaring*,int) ;
 int FUNC_11 (struct b43legacy_dmaring*,struct b43legacy_dmadesc32*,void*,int,int,int,int) ;
 struct b43legacy_dmadesc32* FUNC_12 (struct b43legacy_dmaring*,int,struct b43legacy_dmadesc_meta**) ;
 int FUNC_13 (struct b43legacy_dmaring*,int ) ;
 int FUNC_14 (struct b43legacy_dmaring*) ;
 int FUNC_15 (struct sk_buff*) ;
 unsigned char* FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (struct b43legacy_dmaring*,void*,int,int) ;
 int FUNC_21 () ;

__attribute__((used)) static int FUNC_22(struct b43legacy_dmaring *VAR_4,
       struct sk_buff **VAR_5)
{
 struct sk_buff *VAR_6 = *VAR_5;
 struct ieee80211_tx_info *VAR_7 = FUNC_1(VAR_6);
 u8 *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12;
 struct b43legacy_dmadesc32 *VAR_13;
 struct b43legacy_dmadesc_meta *VAR_14;
 struct b43legacy_dmadesc_meta *VAR_15;
 struct sk_buff *VAR_16;


 FUNC_0(FUNC_18(VAR_6)->nr_frags != 0);

 VAR_10 = VAR_4->current_slot;
 VAR_11 = VAR_4->used_slots;


 VAR_9 = FUNC_14(VAR_4);
 VAR_13 = FUNC_12(VAR_4, VAR_9, &VAR_15);
 FUNC_9(VAR_15, 0, sizeof(*VAR_15));

 VAR_8 = &(VAR_4->txhdr_cache[VAR_9 * sizeof(
          struct b43legacy_txhdr_fw3)]);
 VAR_12 = FUNC_4(VAR_4->dev, VAR_8,
     VAR_6->data, VAR_6->len, VAR_7,
     FUNC_6(VAR_4, VAR_9));
 if (FUNC_19(VAR_12)) {
  VAR_4->current_slot = VAR_10;
  VAR_4->used_slots = VAR_11;
  return VAR_12;
 }

 VAR_15->dmaaddr = FUNC_7(VAR_4, (unsigned char *)VAR_8,
        sizeof(struct b43legacy_txhdr_fw3), 1);
 if (FUNC_3(VAR_4, VAR_15->dmaaddr,
     sizeof(struct b43legacy_txhdr_fw3), 1)) {
  VAR_4->current_slot = VAR_10;
  VAR_4->used_slots = VAR_11;
  return -VAR_0;
 }
 FUNC_11(VAR_4, VAR_13, VAR_15->dmaaddr,
        sizeof(struct b43legacy_txhdr_fw3), 1, 0, 0);


 VAR_9 = FUNC_14(VAR_4);
 VAR_13 = FUNC_12(VAR_4, VAR_9, &VAR_14);
 FUNC_9(VAR_14, 0, sizeof(*VAR_14));

 VAR_14->skb = VAR_6;
 VAR_14->is_last_fragment = 1;

 VAR_14->dmaaddr = FUNC_7(VAR_4, VAR_6->data, VAR_6->len, 1);

 if (FUNC_3(VAR_4, VAR_14->dmaaddr, VAR_6->len, 1)) {
  VAR_16 = FUNC_2(VAR_6->len, VAR_2 | VAR_3);
  if (!VAR_16) {
   VAR_4->current_slot = VAR_10;
   VAR_4->used_slots = VAR_11;
   VAR_12 = -VAR_1;
   goto out_unmap_hdr;
  }

  FUNC_8(FUNC_16(VAR_16, VAR_6->len), VAR_6->data, VAR_6->len);
  FUNC_8(VAR_16->cb, VAR_6->cb, sizeof(VAR_6->cb));
  VAR_16->dev = VAR_6->dev;
  FUNC_17(VAR_16, FUNC_15(VAR_6));
  VAR_7 = FUNC_1(VAR_16);

  FUNC_5(VAR_6);
  VAR_6 = VAR_16;
  *VAR_5 = VAR_16;
  VAR_14->skb = VAR_6;
  VAR_14->dmaaddr = FUNC_7(VAR_4, VAR_6->data, VAR_6->len, 1);
  if (FUNC_3(VAR_4, VAR_14->dmaaddr, VAR_6->len, 1)) {
   VAR_4->current_slot = VAR_10;
   VAR_4->used_slots = VAR_11;
   VAR_12 = -VAR_0;
   goto out_free_bounce;
  }
 }

 FUNC_11(VAR_4, VAR_13, VAR_14->dmaaddr,
        VAR_6->len, 0, 1, 1);

 FUNC_21();

 FUNC_13(VAR_4, FUNC_10(VAR_4, VAR_9));
 return 0;

out_free_bounce:
 FUNC_5(VAR_6);
out_unmap_hdr:
 FUNC_20(VAR_4, VAR_15->dmaaddr,
    sizeof(struct b43legacy_txhdr_fw3), 1);
 return VAR_12;
}
