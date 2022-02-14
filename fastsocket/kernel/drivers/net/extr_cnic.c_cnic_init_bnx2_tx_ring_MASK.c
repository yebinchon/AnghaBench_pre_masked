
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct status_block_msix {int status_tx_quick_consumer_index; } ;
struct status_block {int status_tx_quick_consumer_index2; } ;
struct cnic_uio_dev {scalar_t__ l2_buf_map; struct bnx2_tx_bd* l2_ring; scalar_t__ l2_ring_map; } ;
struct TYPE_2__ {struct status_block_msix* bnx2; struct status_block* gen; } ;
struct cnic_local {int status_blk_num; int * tx_cons_ptr; int tx_cons; TYPE_1__ status_blk; struct cnic_uio_dev* udev; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct bnx2_tx_bd {int tx_bd_haddr_hi; int tx_bd_haddr_lo; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (struct cnic_local*) ;
 scalar_t__ VAR_0 ;
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
 int FUNC_1 (struct cnic_dev*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct cnic_dev*,int,int,int) ;
 int FUNC_4 (struct cnic_dev*,int) ;

__attribute__((used)) static void FUNC_5(struct cnic_dev *VAR_17)
{
 struct cnic_local *VAR_18 = VAR_17->cnic_priv;
 struct cnic_eth_dev *VAR_19 = VAR_18->ethdev;
 struct cnic_uio_dev *VAR_20 = VAR_18->udev;
 u32 VAR_21, VAR_22, VAR_23;
 u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29;
 struct bnx2_tx_bd *VAR_30;
 dma_addr_t VAR_31, VAR_32 = VAR_20->l2_ring_map;
 struct status_block *VAR_33 = VAR_18->status_blk.gen;

 VAR_23 = VAR_18->status_blk_num;
 VAR_22 = 20;
 VAR_18->tx_cons_ptr = &VAR_33->status_tx_quick_consumer_index2;
 if (VAR_19->drv_state & VAR_14) {
  struct status_block_msix *VAR_34 = VAR_18->status_blk.bnx2;

  VAR_22 = VAR_16 + VAR_23 - 1;
  FUNC_1(VAR_17, VAR_13, (VAR_23 << 24) |
   (VAR_16 << 7));
  VAR_18->tx_cons_ptr = &VAR_34->status_tx_quick_consumer_index;
 }
 VAR_18->tx_cons = *VAR_18->tx_cons_ptr;

 VAR_21 = FUNC_2(VAR_22);
 if (FUNC_0(VAR_18) == VAR_0) {
  u32 VAR_35 = FUNC_2(VAR_22 + 4) + 0x40;

  for (VAR_29 = 0; VAR_29 < VAR_15; VAR_29 += 4)
   FUNC_3(VAR_17, VAR_35, VAR_29, 0);

  VAR_25 = VAR_11;
  VAR_26 = VAR_3;
  VAR_27 = VAR_5;
  VAR_28 = VAR_7;
 } else {
  FUNC_4(VAR_17, VAR_22);
  FUNC_4(VAR_17, VAR_22 + 1);

  VAR_25 = VAR_8;
  VAR_26 = VAR_1;
  VAR_27 = VAR_4;
  VAR_28 = VAR_6;
 }
 VAR_24 = VAR_10 | VAR_9;
 FUNC_3(VAR_17, VAR_21, VAR_25, VAR_24);

 VAR_24 = VAR_2 | (8 << 16);
 FUNC_3(VAR_17, VAR_21, VAR_26, VAR_24);

 VAR_30 = VAR_20->l2_ring;

 VAR_31 = VAR_20->l2_buf_map;
 for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++, VAR_30++) {
  VAR_30->tx_bd_haddr_hi = (u64) VAR_31 >> 32;
  VAR_30->tx_bd_haddr_lo = (u64) VAR_31 & 0xffffffff;
 }
 VAR_24 = (u64) VAR_32 >> 32;
 FUNC_3(VAR_17, VAR_21, VAR_27, VAR_24);
 VAR_30->tx_bd_haddr_hi = VAR_24;

 VAR_24 = (u64) VAR_32 & 0xffffffff;
 FUNC_3(VAR_17, VAR_21, VAR_28, VAR_24);
 VAR_30->tx_bd_haddr_lo = VAR_24;
}
