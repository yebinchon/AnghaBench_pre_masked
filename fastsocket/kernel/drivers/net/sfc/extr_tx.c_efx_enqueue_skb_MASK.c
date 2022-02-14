
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int data_len; int data; } ;
struct efx_tx_queue {unsigned int write_count; unsigned int insert_count; unsigned int ptr_mask; struct efx_tx_buffer* buffer; int queue; struct efx_nic* efx; } ;
struct efx_tx_buffer {int flags; int len; int unmap_len; unsigned int dma_addr; struct sk_buff* skb; } ;
struct efx_nic {int net_dev; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
typedef unsigned int dma_addr_t ;
struct TYPE_4__ {int nr_frags; int * frags; scalar_t__ gso_size; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (struct device*,int ,unsigned int,int ) ;
 int FUNC_4 (struct device*,unsigned int) ;
 int FUNC_5 (struct device*,unsigned int,unsigned int,int ) ;
 int FUNC_6 (struct device*,unsigned int,unsigned int,int ) ;
 int FUNC_7 (struct efx_tx_queue*,struct efx_tx_buffer*) ;
 int FUNC_8 (struct efx_tx_queue*,struct sk_buff*) ;
 unsigned int FUNC_9 (struct efx_nic*,unsigned int) ;
 int FUNC_10 (struct efx_tx_queue*) ;
 int FUNC_11 (struct efx_tx_queue*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct efx_nic*,int ,int ,char*,int ,unsigned int,int) ;
 unsigned int FUNC_14 (struct device*,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_15 (int *) ;
 unsigned int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*,unsigned int) ;
 TYPE_2__* FUNC_18 (struct sk_buff*) ;
 int VAR_6 ;
 scalar_t__ FUNC_19 (int ) ;

netdev_tx_t FUNC_20(struct efx_tx_queue *VAR_7, struct sk_buff *VAR_8)
{
 struct efx_nic *VAR_9 = VAR_7->efx;
 struct device *VAR_10 = &VAR_9->pci_dev->dev;
 struct efx_tx_buffer *VAR_11;
 skb_frag_t *VAR_12;
 unsigned int VAR_13, VAR_14 = 0, VAR_15;
 dma_addr_t VAR_16, VAR_17 = 0;
 unsigned int VAR_18;
 unsigned short VAR_19;
 int VAR_20 = 0;

 FUNC_0(VAR_7->write_count != VAR_7->insert_count);

 if (FUNC_18(VAR_8)->gso_size)
  return FUNC_8(VAR_7, VAR_8);


 VAR_13 = FUNC_16(VAR_8);


 if (FUNC_1(VAR_9) && VAR_8->len <= 32) {
  FUNC_0(VAR_8->data_len);
  VAR_13 = 32 + 1;
  if (FUNC_17(VAR_8, VAR_13 - VAR_8->len))
   return VAR_4;
 }





 VAR_19 = VAR_2;
 VAR_16 = FUNC_3(VAR_10, VAR_8->data, VAR_13, VAR_5);


 while (1) {
  if (FUNC_19(FUNC_4(VAR_10, VAR_16)))
   goto dma_err;



  VAR_14 = VAR_13;
  VAR_17 = VAR_16;


  do {
   VAR_15 = VAR_7->insert_count & VAR_7->ptr_mask;
   VAR_11 = &VAR_7->buffer[VAR_15];
   FUNC_0(VAR_11->flags);
   FUNC_0(VAR_11->len);
   FUNC_0(VAR_11->unmap_len);

   VAR_18 = FUNC_9(VAR_9, VAR_16);
   if (FUNC_12(VAR_18 >= VAR_13))
    VAR_18 = VAR_13;


   VAR_11->len = VAR_18;
   VAR_11->dma_addr = VAR_16;
   VAR_11->flags = VAR_1;
   VAR_13 -= VAR_18;
   VAR_16 += VAR_18;
   ++VAR_7->insert_count;
  } while (VAR_13);


  VAR_11->flags = VAR_1 | VAR_19;
  VAR_11->unmap_len = VAR_14;
  VAR_14 = 0;


  if (VAR_20 >= FUNC_18(VAR_8)->nr_frags)
   break;
  VAR_12 = &FUNC_18(VAR_8)->frags[VAR_20];
  VAR_13 = FUNC_15(VAR_12);
  VAR_20++;

  VAR_19 = 0;
  VAR_16 = FUNC_14(VAR_10, VAR_12, 0, VAR_13,
         VAR_0);
 }


 VAR_11->skb = VAR_8;
 VAR_11->flags = VAR_3 | VAR_19;


 FUNC_10(VAR_7);

 FUNC_11(VAR_7);

 return VAR_4;

 dma_err:
 FUNC_13(VAR_9, VAR_6, VAR_9->net_dev,
    " TX queue %d could not map skb with %d bytes %d "
    "fragments for DMA\n", VAR_7->queue, VAR_8->len,
    FUNC_18(VAR_8)->nr_frags + 1);


 FUNC_2(VAR_8);


 while (VAR_7->insert_count != VAR_7->write_count) {
  --VAR_7->insert_count;
  VAR_15 = VAR_7->insert_count & VAR_7->ptr_mask;
  VAR_11 = &VAR_7->buffer[VAR_15];
  FUNC_7(VAR_7, VAR_11);
 }


 if (VAR_14) {
  if (VAR_19 & VAR_2)
   FUNC_6(VAR_10, VAR_17, VAR_14,
      VAR_0);
  else
   FUNC_5(VAR_10, VAR_17, VAR_14,
           VAR_0);
 }

 return VAR_4;
}
