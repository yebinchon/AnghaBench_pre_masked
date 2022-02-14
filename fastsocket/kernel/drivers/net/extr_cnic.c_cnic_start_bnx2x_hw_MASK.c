
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_10__ {int* pg_map_arr; } ;
struct TYPE_8__ {int* pg_map_arr; } ;
struct TYPE_9__ {TYPE_3__ dma; scalar_t__ io_addr; } ;
struct cnic_local {TYPE_5__ gbl_buf_info; int status_blk_num; TYPE_4__ kcq1; int bnx2x_igu_sb_id; int fcoe_start_cid; int fcoe_cid_tbl; int iscsi_start_cid; int cid_tbl; int pfid; int func; int port_mode; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; TYPE_2__* irq_arr; int addr_drv_info_to_mcp; } ;
struct cnic_dev {int max_fcoe_conn; int stats_addr; int netdev; struct cnic_local* cnic_priv; } ;
struct TYPE_6__ {int chip_port_mode; } ;
struct bnx2x {int pf_num; int pfid; TYPE_1__ common; } ;
struct TYPE_7__ {int status_blk_num2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_3 ;
 int FUNC_1 (struct cnic_local*) ;
 int FUNC_2 (struct cnic_dev*,scalar_t__,int) ;
 int FUNC_3 (struct cnic_dev*,scalar_t__,int ) ;
 int FUNC_4 (struct cnic_dev*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct cnic_dev*) ;
 int FUNC_14 (struct cnic_dev*) ;
 int FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (struct cnic_dev*) ;
 struct bnx2x* FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct cnic_dev *VAR_9)
{
 struct cnic_local *VAR_10 = VAR_9->cnic_priv;
 struct bnx2x *VAR_11 = FUNC_17(VAR_9->netdev);
 struct cnic_eth_dev *VAR_12 = VAR_10->ethdev;
 int VAR_13, VAR_14;
 u32 VAR_15;

 VAR_9->stats_addr = VAR_12->addr_drv_info_to_mcp;
 VAR_10->port_mode = VAR_11->common.chip_port_mode;
 VAR_10->pfid = VAR_11->pfid;
 VAR_10->func = VAR_11->pf_num;

 VAR_13 = FUNC_1(VAR_10);
 VAR_15 = VAR_10->pfid;

 VAR_14 = FUNC_15(&VAR_10->cid_tbl, VAR_7,
          VAR_10->iscsi_start_cid, 0);

 if (VAR_14)
  return -VAR_5;

 if (FUNC_0(VAR_11)) {
  VAR_14 = FUNC_15(&VAR_10->fcoe_cid_tbl, VAR_9->max_fcoe_conn,
     VAR_10->fcoe_start_cid, 0);

  if (VAR_14)
   return -VAR_5;
 }

 VAR_10->bnx2x_igu_sb_id = VAR_12->irq_arr[0].status_blk_num2;

 FUNC_14(VAR_9);


 FUNC_3(VAR_9, VAR_10->kcq1.io_addr, VAR_8);
 FUNC_2(VAR_9, VAR_0 +
  FUNC_5(VAR_15, 0), 0);
 FUNC_2(VAR_9, VAR_0 +
  FUNC_7(VAR_15, 0),
  VAR_10->kcq1.dma.pg_map_arr[1] & 0xffffffff);
 FUNC_2(VAR_9, VAR_0 +
  FUNC_7(VAR_15, 0) + 4,
  (u64) VAR_10->kcq1.dma.pg_map_arr[1] >> 32);
 FUNC_2(VAR_9, VAR_0 +
  FUNC_6(VAR_15, 0),
  VAR_10->kcq1.dma.pg_map_arr[0] & 0xffffffff);
 FUNC_2(VAR_9, VAR_0 +
  FUNC_6(VAR_15, 0) + 4,
  (u64) VAR_10->kcq1.dma.pg_map_arr[0] >> 32);
 FUNC_4(VAR_9, VAR_0 +
  FUNC_8(VAR_15, 0), 1);
 FUNC_3(VAR_9, VAR_0 +
  FUNC_10(VAR_15, 0), VAR_10->status_blk_num);
 FUNC_4(VAR_9, VAR_0 +
  FUNC_9(VAR_15, 0),
  VAR_6);

 FUNC_2(VAR_9, VAR_2 +
  FUNC_12(VAR_15),
  VAR_10->gbl_buf_info.pg_map_arr[0] & 0xffffffff);
 FUNC_2(VAR_9, VAR_2 +
  FUNC_12(VAR_15) + 4,
  (u64) VAR_10->gbl_buf_info.pg_map_arr[0] >> 32);

 FUNC_2(VAR_9, VAR_1 +
  FUNC_11(VAR_15), VAR_4);

 FUNC_16(VAR_9);

 VAR_14 = FUNC_13(VAR_9);
 if (VAR_14)
  return VAR_14;

 VAR_12->drv_state |= VAR_3;
 return 0;
}
