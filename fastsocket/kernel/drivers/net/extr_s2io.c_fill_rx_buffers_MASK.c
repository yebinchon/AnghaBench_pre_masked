
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct swStat {int mem_freed; int pci_map_fail_cnt; int mem_allocated; int mem_alloc_fail_cnt; } ;
struct sk_buff {scalar_t__ truesize; void* data; } ;
struct s2io_nic {int pdev; } ;
struct TYPE_16__ {int block_index; int offset; } ;
struct TYPE_13__ {int block_index; int offset; } ;
struct ring_info {int pkt_cnt; int rx_bufs_left; int rxd_count; int block_count; scalar_t__ rxd_mode; int mtu; TYPE_8__ rx_curr_put_info; int pdev; struct buffAdd** ba; TYPE_7__* dev; TYPE_6__* rx_blocks; TYPE_5__ rx_curr_get_info; TYPE_3__* nic; } ;
struct buffAdd {void* ba_1; void* ba_0; } ;
struct RxD_t {unsigned long Host_Control; int Control_1; int Control_2; } ;
struct RxD3 {int Buffer0_ptr; int Buffer1_ptr; int Buffer2_ptr; } ;
struct RxD1 {int Buffer0_ptr; } ;
typedef int dma_addr_t ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {struct RxD_t* block_virt_addr; TYPE_4__* rxds; } ;
struct TYPE_12__ {struct RxD_t* virt_addr; } ;
struct TYPE_10__ {TYPE_1__* stats_info; } ;
struct TYPE_11__ {TYPE_2__ mac_control; } ;
struct TYPE_9__ {struct swStat sw_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 struct sk_buff* FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct RxD_t*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int,int ) ;
 void* FUNC_10 (int ,void*,int,int ) ;
 int FUNC_11 (int ,int ,int,int ) ;
 int VAR_16 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct s2io_nic *VAR_17, struct ring_info *VAR_18,
      int VAR_19)
{
 struct sk_buff *VAR_20;
 struct RxD_t *VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 u32 VAR_26 = 0;
 u32 VAR_27;
 u64 VAR_28;
 struct buffAdd *VAR_29;
 struct RxD_t *VAR_30 = ((void*)0);
 u64 VAR_31 = 0, VAR_32 = 0;
 int VAR_33 = 0;
 struct RxD1 *VAR_34;
 struct RxD3 *VAR_35;
 struct swStat *VAR_36 = &VAR_18->nic->mac_control.stats_info->sw_stat;

 VAR_27 = VAR_18->pkt_cnt - VAR_18->rx_bufs_left;

 VAR_25 = VAR_18->rx_curr_get_info.block_index;
 while (VAR_26 < VAR_27) {
  VAR_24 = VAR_18->rx_curr_put_info.block_index;

  VAR_22 = VAR_18->rx_curr_put_info.offset;

  VAR_21 = VAR_18->rx_blocks[VAR_24].rxds[VAR_22].virt_addr;

  VAR_33 = VAR_22 + 1;
  if (VAR_24)
   VAR_33 += (VAR_24 * VAR_18->rxd_count);

  if ((VAR_24 == VAR_25) &&
      (VAR_22 == VAR_18->rx_curr_get_info.offset) &&
      (VAR_21->Host_Control)) {
   FUNC_0(VAR_8, "%s: Get and Put info equated\n",
      VAR_18->dev->name);
   goto end;
  }
  if (VAR_22 && (VAR_22 == VAR_18->rxd_count)) {
   VAR_18->rx_curr_put_info.block_index++;
   if (VAR_18->rx_curr_put_info.block_index ==
       VAR_18->block_count)
    VAR_18->rx_curr_put_info.block_index = 0;
   VAR_24 = VAR_18->rx_curr_put_info.block_index;
   VAR_22 = 0;
   VAR_18->rx_curr_put_info.offset = VAR_22;
   VAR_21 = VAR_18->rx_blocks[VAR_24].block_virt_addr;
   FUNC_0(VAR_8, "%s: Next block at: %p\n",
      VAR_18->dev->name, VAR_21);

  }

  if ((VAR_21->Control_1 & VAR_13) &&
      ((VAR_18->rxd_mode == VAR_12) &&
       (VAR_21->Control_2 & FUNC_12(0)))) {
   VAR_18->rx_curr_put_info.offset = VAR_22;
   goto end;
  }

  VAR_23 = VAR_18->mtu +
   VAR_5 +
   VAR_4 + VAR_6;
  if (VAR_18->rxd_mode == VAR_11)
   VAR_23 += VAR_9;
  else
   VAR_23 = VAR_18->mtu + VAR_0 + VAR_1 + 4;


  VAR_20 = FUNC_5(VAR_23);
  if (!VAR_20) {
   FUNC_0(VAR_7, "%s: Could not allocate skb\n",
      VAR_18->dev->name);
   if (VAR_30) {
    FUNC_15();
    VAR_30->Control_1 |= VAR_13;
   }
   VAR_36->mem_alloc_fail_cnt++;

   return -VAR_3 ;
  }
  VAR_36->mem_allocated += VAR_20->truesize;

  if (VAR_18->rxd_mode == VAR_11) {

   VAR_34 = (struct RxD1 *)VAR_21;
   FUNC_7(VAR_21, 0, sizeof(struct RxD1));
   FUNC_13(VAR_20, VAR_9);
   VAR_34->Buffer0_ptr =
    FUNC_10(VAR_18->pdev, VAR_20->data,
            VAR_23 - VAR_9,
            VAR_10);
   if (FUNC_8(VAR_17->pdev,
        VAR_34->Buffer0_ptr))
    goto pci_map_failed;

   VAR_21->Control_2 =
    FUNC_1(VAR_23 - VAR_9);
   VAR_21->Host_Control = (unsigned long)VAR_20;
  } else if (VAR_18->rxd_mode == VAR_12) {






   VAR_35 = (struct RxD3 *)VAR_21;

   VAR_31 = VAR_35->Buffer0_ptr;
   VAR_32 = VAR_35->Buffer1_ptr;
   FUNC_7(VAR_21, 0, sizeof(struct RxD3));

   VAR_35->Buffer0_ptr = VAR_31;
   VAR_35->Buffer1_ptr = VAR_32;

   VAR_29 = &VAR_18->ba[VAR_24][VAR_22];
   FUNC_13(VAR_20, VAR_1);
   VAR_28 = (u64)(unsigned long)VAR_20->data;
   VAR_28 += VAR_0;
   VAR_28 &= ~VAR_0;
   VAR_20->data = (void *) (unsigned long)VAR_28;
   FUNC_14(VAR_20);

   if (VAR_19) {
    VAR_35->Buffer0_ptr =
     FUNC_10(VAR_18->pdev, VAR_29->ba_0,
             VAR_1,
             VAR_10);
    if (FUNC_8(VAR_17->pdev,
         VAR_35->Buffer0_ptr))
     goto pci_map_failed;
   } else
    FUNC_9(VAR_18->pdev,
              (dma_addr_t)VAR_35->Buffer0_ptr,
              VAR_1,
              VAR_10);

   VAR_21->Control_2 = FUNC_2(VAR_1);
   if (VAR_18->rxd_mode == VAR_12) {






    VAR_35->Buffer2_ptr = FUNC_10(VAR_18->pdev,
            VAR_20->data,
            VAR_18->mtu + 4,
            VAR_10);

    if (FUNC_8(VAR_17->pdev,
         VAR_35->Buffer2_ptr))
     goto pci_map_failed;

    if (VAR_19) {
     VAR_35->Buffer1_ptr =
      FUNC_10(VAR_18->pdev,
              VAR_29->ba_1,
              VAR_2,
              VAR_10);

     if (FUNC_8(VAR_17->pdev,
          VAR_35->Buffer1_ptr)) {
      FUNC_11(VAR_18->pdev,
         (dma_addr_t)(unsigned long)
         VAR_20->data,
         VAR_18->mtu + 4,
         VAR_10);
      goto pci_map_failed;
     }
    }
    VAR_21->Control_2 |= FUNC_3(1);
    VAR_21->Control_2 |= FUNC_4
     (VAR_18->mtu + 4);
   }
   VAR_21->Control_2 |= FUNC_12(0);
   VAR_21->Host_Control = (unsigned long) (VAR_20);
  }
  if (VAR_26 & ((1 << VAR_16) - 1))
   VAR_21->Control_1 |= VAR_13;
  VAR_22++;
  if (VAR_22 == (VAR_18->rxd_count + 1))
   VAR_22 = 0;
  VAR_18->rx_curr_put_info.offset = VAR_22;

  VAR_21->Control_2 |= VAR_14;
  if (!(VAR_26 & ((1 << VAR_16) - 1))) {
   if (VAR_30) {
    FUNC_15();
    VAR_30->Control_1 |= VAR_13;
   }
   VAR_30 = VAR_21;
  }
  VAR_18->rx_bufs_left += 1;
  VAR_26++;
 }

end:




 if (VAR_30) {
  FUNC_15();
  VAR_30->Control_1 |= VAR_13;
 }

 return VAR_15;

pci_map_failed:
 VAR_36->pci_map_fail_cnt++;
 VAR_36->mem_freed += VAR_20->truesize;
 FUNC_6(VAR_20);
 return -VAR_3;
}
