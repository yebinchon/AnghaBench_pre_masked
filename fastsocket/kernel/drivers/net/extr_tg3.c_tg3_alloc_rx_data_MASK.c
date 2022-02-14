
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct tg3_rx_prodring_set {struct ring_info* rx_jmb_buffers; TYPE_1__* rx_jmb; struct ring_info* rx_std_buffers; struct tg3_rx_buffer_desc* rx_std; } ;
struct tg3_rx_buffer_desc {int addr_hi; int addr_lo; } ;
struct tg3 {int rx_std_ring_mask; int rx_pkt_map_sz; int rx_jmb_ring_mask; int pdev; } ;
struct skb_shared_info {int dummy; } ;
struct ring_info {int * data; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct tg3_rx_buffer_desc std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct tg3*) ;
 int FUNC_2 (struct ring_info*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_7(struct tg3 *VAR_6, struct tg3_rx_prodring_set *VAR_7,
       u32 VAR_8, u32 VAR_9)
{
 struct tg3_rx_buffer_desc *VAR_10;
 struct ring_info *VAR_11;
 u8 *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14, VAR_15, VAR_16;

 switch (VAR_8) {
 case 128:
  VAR_16 = VAR_9 & VAR_6->rx_std_ring_mask;
  VAR_10 = &VAR_7->rx_std[VAR_16];
  VAR_11 = &VAR_7->rx_std_buffers[VAR_16];
  VAR_15 = VAR_6->rx_pkt_map_sz;
  break;

 case 129:
  VAR_16 = VAR_9 & VAR_6->rx_jmb_ring_mask;
  VAR_10 = &VAR_7->rx_jmb[VAR_16].std;
  VAR_11 = &VAR_7->rx_jmb_buffers[VAR_16];
  VAR_15 = VAR_5;
  break;

 default:
  return -VAR_0;
 }







 VAR_14 = FUNC_0(VAR_15 + FUNC_1(VAR_6)) +
     FUNC_0(sizeof(struct skb_shared_info));
 VAR_12 = FUNC_4(VAR_14, VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = FUNC_6(VAR_6->pdev,
     VAR_12 + FUNC_1(VAR_6),
     VAR_15,
     VAR_4);
 if (FUNC_5(VAR_6->pdev, VAR_13)) {
  FUNC_3(VAR_12);
  return -VAR_1;
 }

 VAR_11->data = VAR_12;
 FUNC_2(VAR_11, VAR_13, VAR_13);

 VAR_10->addr_hi = ((u64)VAR_13 >> 32);
 VAR_10->addr_lo = ((u64)VAR_13 & 0xffffffff);

 return VAR_15;
}
