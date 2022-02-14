
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* buffer_addr; } ;
union e1000_rx_desc_extended {TYPE_2__ read; } ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct pci_dev {int dev; } ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {int data; } ;
struct e1000_tx_desc {TYPE_5__ upper; TYPE_4__ lower; void* buffer_addr; } ;
struct e1000_ring {int count; int size; TYPE_3__* buffer_info; scalar_t__ dma; scalar_t__ next_to_clean; scalar_t__ next_to_use; void* desc; } ;
struct TYPE_6__ {int mc_filter_type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct e1000_buffer {int dummy; } ;
struct e1000_adapter {int flags2; struct e1000_hw hw; struct pci_dev* pdev; struct e1000_ring test_rx_ring; struct e1000_ring test_tx_ring; } ;
struct TYPE_8__ {int length; void* dma; struct sk_buff* skb; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 union e1000_rx_desc_extended* FUNC_1 (struct e1000_ring,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct e1000_tx_desc* FUNC_2 (struct e1000_ring,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_29 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct sk_buff* FUNC_13 (int,int ) ;
 int FUNC_14 (int) ;
 void* FUNC_15 (void*) ;
 void* FUNC_16 (int *,int,scalar_t__*,int ) ;
 void* FUNC_17 (int *,int ,int,int ) ;
 scalar_t__ FUNC_18 (int *,void*) ;
 int FUNC_19 (struct e1000_adapter*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int) ;
 void* FUNC_22 (int,int,int ) ;
 int FUNC_23 (int ,int,int) ;
 int FUNC_24 (struct sk_buff*,unsigned int) ;
 int FUNC_25 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_26(struct e1000_adapter *VAR_30)
{
 struct e1000_ring *VAR_31 = &VAR_30->test_tx_ring;
 struct e1000_ring *VAR_32 = &VAR_30->test_rx_ring;
 struct pci_dev *VAR_33 = VAR_30->pdev;
 struct e1000_hw *VAR_34 = &VAR_30->hw;
 u32 VAR_35;
 int VAR_36;
 int VAR_37;



 if (!VAR_31->count)
  VAR_31->count = VAR_7;

 VAR_31->buffer_info = FUNC_22(VAR_31->count,
           sizeof(struct e1000_buffer), VAR_26);
 if (!VAR_31->buffer_info) {
  VAR_37 = 1;
  goto err_nomem;
 }

 VAR_31->size = VAR_31->count * sizeof(struct e1000_tx_desc);
 VAR_31->size = FUNC_0(VAR_31->size, 4096);
 VAR_31->desc = FUNC_16(&VAR_33->dev, VAR_31->size,
        &VAR_31->dma, VAR_26);
 if (!VAR_31->desc) {
  VAR_37 = 2;
  goto err_nomem;
 }
 VAR_31->next_to_use = 0;
 VAR_31->next_to_clean = 0;

 FUNC_21(FUNC_9(0), ((u64)VAR_31->dma & 0x00000000FFFFFFFF));
 FUNC_21(FUNC_8(0), ((u64)VAR_31->dma >> 32));
 FUNC_21(FUNC_11(0), VAR_31->count * sizeof(struct e1000_tx_desc));
 FUNC_21(FUNC_10(0), 0);
 FUNC_21(FUNC_12(0), 0);
 FUNC_21(VAR_29, VAR_21 | VAR_19 | VAR_20 |
      VAR_4 << VAR_5 |
      VAR_3 << VAR_2);

 for (VAR_36 = 0; VAR_36 < VAR_31->count; VAR_36++) {
  struct e1000_tx_desc *VAR_38 = FUNC_2(*VAR_31, VAR_36);
  struct sk_buff *VAR_39;
  unsigned int VAR_40 = 1024;

  VAR_39 = FUNC_13(VAR_40, VAR_26);
  if (!VAR_39) {
   VAR_37 = 3;
   goto err_nomem;
  }
  FUNC_24(VAR_39, VAR_40);
  VAR_31->buffer_info[VAR_36].skb = VAR_39;
  VAR_31->buffer_info[VAR_36].length = VAR_39->len;
  VAR_31->buffer_info[VAR_36].dma =
      FUNC_17(&VAR_33->dev, VAR_39->data, VAR_39->len,
       VAR_1);
  if (FUNC_18(&VAR_33->dev,
          VAR_31->buffer_info[VAR_36].dma)) {
   VAR_37 = 4;
   goto err_nomem;
  }
  VAR_38->buffer_addr = FUNC_15(VAR_31->buffer_info[VAR_36].dma);
  VAR_38->lower.data = FUNC_14(VAR_39->len);
  VAR_38->lower.data |= FUNC_14(VAR_22 |
         VAR_23 |
         VAR_24);
  VAR_38->upper.data = 0;
 }



 if (!VAR_32->count)
  VAR_32->count = VAR_6;

 VAR_32->buffer_info = FUNC_22(VAR_32->count,
           sizeof(struct e1000_buffer), VAR_26);
 if (!VAR_32->buffer_info) {
  VAR_37 = 5;
  goto err_nomem;
 }

 VAR_32->size = VAR_32->count * sizeof(union e1000_rx_desc_extended);
 VAR_32->desc = FUNC_16(&VAR_33->dev, VAR_32->size,
        &VAR_32->dma, VAR_26);
 if (!VAR_32->desc) {
  VAR_37 = 6;
  goto err_nomem;
 }
 VAR_32->next_to_use = 0;
 VAR_32->next_to_clean = 0;

 VAR_35 = FUNC_20(VAR_28);
 if (!(VAR_30->flags2 & VAR_25))
  FUNC_21(VAR_28, VAR_35 & ~VAR_9);
 FUNC_21(FUNC_4(0), ((u64)VAR_32->dma & 0xFFFFFFFF));
 FUNC_21(FUNC_3(0), ((u64)VAR_32->dma >> 32));
 FUNC_21(FUNC_6(0), VAR_32->size);
 FUNC_21(FUNC_5(0), 0);
 FUNC_21(FUNC_7(0), 0);
 VAR_35 = VAR_9 | VAR_8 | VAR_17 |
     VAR_18 | VAR_13 | VAR_11 |
     VAR_15 | VAR_16 |
     VAR_10 | VAR_14 |
     (VAR_30->hw.mac.mc_filter_type << VAR_12);
 FUNC_21(VAR_28, VAR_35);

 for (VAR_36 = 0; VAR_36 < VAR_32->count; VAR_36++) {
  union e1000_rx_desc_extended *VAR_41;
  struct sk_buff *VAR_42;

  VAR_42 = FUNC_13(2048 + VAR_27, VAR_26);
  if (!VAR_42) {
   VAR_37 = 7;
   goto err_nomem;
  }
  FUNC_25(VAR_42, VAR_27);
  VAR_32->buffer_info[VAR_36].skb = VAR_42;
  VAR_32->buffer_info[VAR_36].dma =
      FUNC_17(&VAR_33->dev, VAR_42->data, 2048,
       VAR_0);
  if (FUNC_18(&VAR_33->dev,
          VAR_32->buffer_info[VAR_36].dma)) {
   VAR_37 = 8;
   goto err_nomem;
  }
  VAR_41 = FUNC_1(*VAR_32, VAR_36);
  VAR_41->read.buffer_addr =
      FUNC_15(VAR_32->buffer_info[VAR_36].dma);
  FUNC_23(VAR_42->data, 0x00, VAR_42->len);
 }

 return 0;

err_nomem:
 FUNC_19(VAR_30);
 return VAR_37;
}
