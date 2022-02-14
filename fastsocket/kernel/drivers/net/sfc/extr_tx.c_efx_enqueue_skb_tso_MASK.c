
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tso_state {scalar_t__ header_len; scalar_t__ in_len; scalar_t__ packet_space; int dma_flags; scalar_t__ unmap_len; int unmap_addr; int protocol; } ;
struct sk_buff {scalar_t__ len; } ;
struct efx_tx_queue {scalar_t__ write_count; scalar_t__ insert_count; int tso_bursts; struct efx_nic* efx; } ;
struct efx_nic {TYPE_1__* pci_dev; int net_dev; } ;
struct TYPE_4__ {scalar_t__ gso_segs; scalar_t__ gso_size; int nr_frags; scalar_t__ frags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 int FUNC_5 (struct efx_tx_queue*) ;
 int FUNC_6 (struct efx_tx_queue*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct efx_tx_queue*) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct efx_tx_queue*,struct sk_buff*,struct tso_state*) ;
 int FUNC_13 (struct tso_state*,struct efx_nic*,scalar_t__) ;
 int FUNC_14 (struct tso_state*,struct efx_nic*,struct sk_buff*) ;
 int FUNC_15 (struct tso_state*,struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct efx_tx_queue*,struct sk_buff*,struct tso_state*) ;
 int VAR_4 ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct efx_tx_queue *VAR_5,
          struct sk_buff *VAR_6)
{
 struct efx_nic *VAR_7 = VAR_5->efx;
 int VAR_8, VAR_9;
 struct tso_state VAR_10;






 if (FUNC_17(FUNC_11(VAR_6)->gso_segs > VAR_1)) {
  unsigned int VAR_11 =
   (FUNC_11(VAR_6)->gso_segs - VAR_1) *
   FUNC_11(VAR_6)->gso_size;
  if (FUNC_1(VAR_6, VAR_6->len - VAR_11)) {
   FUNC_2(VAR_6);
   return VAR_3;
  }
 }


 VAR_10.protocol = FUNC_7(VAR_6);

 FUNC_0(VAR_5->write_count != VAR_5->insert_count);

 FUNC_15(&VAR_10, VAR_6);




 if (FUNC_10(VAR_6) == VAR_10.header_len) {

  FUNC_0(FUNC_11(VAR_6)->nr_frags < 1);
  VAR_8 = 0;
  VAR_9 = FUNC_13(&VAR_10, VAR_7,
          FUNC_11(VAR_6)->frags + VAR_8);
  if (VAR_9)
   goto mem_err;
 } else {
  VAR_9 = FUNC_14(&VAR_10, VAR_7, VAR_6);
  if (VAR_9)
   goto mem_err;
  VAR_8 = -1;
 }

 if (FUNC_16(VAR_5, VAR_6, &VAR_10) < 0)
  goto mem_err;

 while (1) {
  FUNC_12(VAR_5, VAR_6, &VAR_10);


  if (VAR_10.in_len == 0) {
   if (++VAR_8 >= FUNC_11(VAR_6)->nr_frags)

    break;
   VAR_9 = FUNC_13(&VAR_10, VAR_7,
           FUNC_11(VAR_6)->frags + VAR_8);
   if (VAR_9)
    goto mem_err;
  }


  if (VAR_10.packet_space == 0 &&
      FUNC_16(VAR_5, VAR_6, &VAR_10) < 0)
   goto mem_err;
 }


 FUNC_6(VAR_5);

 FUNC_8(VAR_5);

 VAR_5->tso_bursts++;
 return VAR_3;

 mem_err:
 FUNC_9(VAR_7, VAR_4, VAR_7->net_dev,
    "Out of memory for TSO headers, or DMA mapping error\n");
 FUNC_2(VAR_6);


 if (VAR_10.unmap_len) {
  if (VAR_10.dma_flags & VAR_2)
   FUNC_4(&VAR_7->pci_dev->dev, VAR_10.unmap_addr,
      VAR_10.unmap_len, VAR_0);
  else
   FUNC_3(&VAR_7->pci_dev->dev, VAR_10.unmap_addr,
           VAR_10.unmap_len, VAR_0);
 }

 FUNC_5(VAR_5);
 return VAR_3;
}
