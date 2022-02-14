
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sk_buff {unsigned int len; void* data; } ;
struct pci_dev {int dev; } ;
struct e1000_tx_ring {int count; int size; TYPE_1__* buffer_info; scalar_t__ dma; scalar_t__ next_to_clean; scalar_t__ next_to_use; void* desc; } ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {int data; } ;
struct e1000_tx_desc {TYPE_3__ upper; TYPE_2__ lower; void* buffer_addr; } ;
struct e1000_rx_ring {int count; int size; TYPE_4__* buffer_info; scalar_t__ dma; scalar_t__ next_to_clean; scalar_t__ next_to_use; void* desc; } ;
struct e1000_rx_desc {void* buffer_addr; } ;
struct e1000_hw {int mc_filter_type; } ;
struct e1000_buffer {int dummy; } ;
struct e1000_adapter {struct pci_dev* pdev; struct e1000_rx_ring test_rx_ring; struct e1000_tx_ring test_tx_ring; struct e1000_hw hw; } ;
struct TYPE_8__ {unsigned int length; void* dma; struct sk_buff* skb; } ;
struct TYPE_5__ {unsigned int length; void* dma; struct sk_buff* skb; } ;


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
 unsigned int VAR_14 ;
 struct e1000_rx_desc* FUNC_1 (struct e1000_rx_ring,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct e1000_tx_desc* FUNC_2 (struct e1000_tx_ring,int) ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 struct sk_buff* FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (int *,int,scalar_t__*,int ) ;
 void* FUNC_7 (int *,void*,unsigned int,int ) ;
 int FUNC_8 (struct e1000_adapter*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 void* FUNC_11 (int,int,int ) ;
 int FUNC_12 (void*,int,int) ;
 int FUNC_13 (struct sk_buff*,unsigned int) ;
 int FUNC_14 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct e1000_adapter *VAR_34)
{
 struct e1000_hw *VAR_35 = &VAR_34->hw;
 struct e1000_tx_ring *VAR_36 = &VAR_34->test_tx_ring;
 struct e1000_rx_ring *VAR_37 = &VAR_34->test_rx_ring;
 struct pci_dev *VAR_38 = VAR_34->pdev;
 u32 VAR_39;
 int VAR_40, VAR_41;



 if (!VAR_36->count)
  VAR_36->count = VAR_6;

 VAR_36->buffer_info = FUNC_11(VAR_36->count, sizeof(struct e1000_buffer),
        VAR_20);
 if (!VAR_36->buffer_info) {
  VAR_41 = 1;
  goto err_nomem;
 }

 VAR_36->size = VAR_36->count * sizeof(struct e1000_tx_desc);
 VAR_36->size = FUNC_0(VAR_36->size, 4096);
 VAR_36->desc = FUNC_6(&VAR_38->dev, VAR_36->size, &VAR_36->dma,
     VAR_20);
 if (!VAR_36->desc) {
  VAR_41 = 2;
  goto err_nomem;
 }
 FUNC_12(VAR_36->desc, 0, VAR_36->size);
 VAR_36->next_to_use = VAR_36->next_to_clean = 0;

 FUNC_10(VAR_30, ((u64)VAR_36->dma & 0x00000000FFFFFFFF));
 FUNC_10(VAR_29, ((u64)VAR_36->dma >> 32));
 FUNC_10(VAR_32, VAR_36->count * sizeof(struct e1000_tx_desc));
 FUNC_10(VAR_31, 0);
 FUNC_10(VAR_33, 0);
 FUNC_10(VAR_28, VAR_16 | VAR_15 |
      VAR_3 << VAR_4 |
      VAR_7 << VAR_2);

 for (VAR_40 = 0; VAR_40 < VAR_36->count; VAR_40++) {
  struct e1000_tx_desc *VAR_42 = FUNC_2(*VAR_36, VAR_40);
  struct sk_buff *VAR_43;
  unsigned int VAR_44 = 1024;

  VAR_43 = FUNC_3(VAR_44, VAR_20);
  if (!VAR_43) {
   VAR_41 = 3;
   goto err_nomem;
  }
  FUNC_13(VAR_43, VAR_44);
  VAR_36->buffer_info[VAR_40].skb = VAR_43;
  VAR_36->buffer_info[VAR_40].length = VAR_43->len;
  VAR_36->buffer_info[VAR_40].dma =
   FUNC_7(&VAR_38->dev, VAR_43->data, VAR_43->len,
           VAR_1);
  VAR_42->buffer_addr = FUNC_5(VAR_36->buffer_info[VAR_40].dma);
  VAR_42->lower.data = FUNC_4(VAR_43->len);
  VAR_42->lower.data |= FUNC_4(VAR_17 |
         VAR_18 |
         VAR_19);
  VAR_42->upper.data = 0;
 }



 if (!VAR_37->count)
  VAR_37->count = VAR_5;

 VAR_37->buffer_info = FUNC_11(VAR_37->count, sizeof(struct e1000_buffer),
        VAR_20);
 if (!VAR_37->buffer_info) {
  VAR_41 = 4;
  goto err_nomem;
 }

 VAR_37->size = VAR_37->count * sizeof(struct e1000_rx_desc);
 VAR_37->desc = FUNC_6(&VAR_38->dev, VAR_37->size, &VAR_37->dma,
     VAR_20);
 if (!VAR_37->desc) {
  VAR_41 = 5;
  goto err_nomem;
 }
 FUNC_12(VAR_37->desc, 0, VAR_37->size);
 VAR_37->next_to_use = VAR_37->next_to_clean = 0;

 VAR_39 = FUNC_9(VAR_22);
 FUNC_10(VAR_22, VAR_39 & ~VAR_9);
 FUNC_10(VAR_24, ((u64)VAR_37->dma & 0xFFFFFFFF));
 FUNC_10(VAR_23, ((u64)VAR_37->dma >> 32));
 FUNC_10(VAR_26, VAR_37->size);
 FUNC_10(VAR_25, 0);
 FUNC_10(VAR_27, 0);
 VAR_39 = VAR_9 | VAR_8 | VAR_13 |
  VAR_10 | VAR_12 |
  (VAR_35->mc_filter_type << VAR_11);
 FUNC_10(VAR_22, VAR_39);

 for (VAR_40 = 0; VAR_40 < VAR_37->count; VAR_40++) {
  struct e1000_rx_desc *VAR_45 = FUNC_1(*VAR_37, VAR_40);
  struct sk_buff *VAR_46;

  VAR_46 = FUNC_3(VAR_14 + VAR_21, VAR_20);
  if (!VAR_46) {
   VAR_41 = 6;
   goto err_nomem;
  }
  FUNC_14(VAR_46, VAR_21);
  VAR_37->buffer_info[VAR_40].skb = VAR_46;
  VAR_37->buffer_info[VAR_40].length = VAR_14;
  VAR_37->buffer_info[VAR_40].dma =
   FUNC_7(&VAR_38->dev, VAR_46->data,
           VAR_14, VAR_0);
  VAR_45->buffer_addr = FUNC_5(VAR_37->buffer_info[VAR_40].dma);
  FUNC_12(VAR_46->data, 0x00, VAR_46->len);
 }

 return 0;

err_nomem:
 FUNC_8(VAR_34);
 return VAR_41;
}
