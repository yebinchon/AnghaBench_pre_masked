
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct cnic_dma {scalar_t__* pg_map_arr; scalar_t__* pg_arr; } ;
struct cnic_local {int max_cid_space; int fcoe_init_cid; int l2_rx_ring_size; struct cnic_eth_dev* ethdev; int bnx2x_def_status_blk; struct cnic_dma gbl_buf_info; int kcq2; int kcq1; TYPE_2__* ctx_tbl; int * iscsi_tbl; void* fcoe_start_cid; void* iscsi_start_cid; struct cnic_dma kwq_16_data_info; } ;
struct cnic_iscsi {int dummy; } ;
struct cnic_eth_dev {int fcoe_init_cid; int drv_state; TYPE_3__* irq_arr; void* starting_cid; } ;
struct cnic_dev {scalar_t__ max_fcoe_conn; int netdev; struct cnic_local* cnic_priv; } ;
struct cnic_context {int dummy; } ;
struct bnx2x {int dummy; } ;
struct TYPE_6__ {int status_blk; } ;
struct TYPE_4__ {int * iscsi; } ;
struct TYPE_5__ {scalar_t__ kwqe_data_mapping; scalar_t__ kwqe_data; int ulp_proto_id; TYPE_1__ proto; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (struct cnic_dev*) ;
 int FUNC_4 (struct cnic_dev*,struct cnic_dma*,int,int ) ;
 int FUNC_5 (struct cnic_dev*,int *,int) ;
 int FUNC_6 (struct cnic_dev*,int) ;
 int FUNC_7 (struct cnic_dev*) ;
 int FUNC_8 (struct cnic_dev*) ;
 void* FUNC_9 (int,int ) ;
 struct bnx2x* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct cnic_dev *VAR_9)
{
 struct cnic_local *VAR_10 = VAR_9->cnic_priv;
 struct bnx2x *VAR_11 = FUNC_10(VAR_9->netdev);
 struct cnic_eth_dev *VAR_12 = VAR_10->ethdev;
 u32 VAR_13 = VAR_12->starting_cid;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 struct cnic_dma *VAR_19 = &VAR_10->kwq_16_data_info;

 VAR_10->max_cid_space = VAR_7;
 VAR_10->iscsi_start_cid = VAR_13;
 VAR_10->fcoe_start_cid = VAR_13 + VAR_7;

 if (FUNC_0(VAR_11)) {
  VAR_10->max_cid_space += VAR_9->max_fcoe_conn;
  VAR_10->fcoe_init_cid = VAR_12->fcoe_init_cid;
  if (!VAR_10->fcoe_init_cid)
   VAR_10->fcoe_init_cid = 0x10;
 }

 VAR_10->iscsi_tbl = FUNC_9(sizeof(struct cnic_iscsi) * VAR_7,
    VAR_6);
 if (!VAR_10->iscsi_tbl)
  goto error;

 VAR_10->ctx_tbl = FUNC_9(sizeof(struct cnic_context) *
    VAR_10->max_cid_space, VAR_6);
 if (!VAR_10->ctx_tbl)
  goto error;

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  VAR_10->ctx_tbl[VAR_14].proto.iscsi = &VAR_10->iscsi_tbl[VAR_14];
  VAR_10->ctx_tbl[VAR_14].ulp_proto_id = VAR_4;
 }

 for (VAR_14 = VAR_7; VAR_14 < VAR_10->max_cid_space; VAR_14++)
  VAR_10->ctx_tbl[VAR_14].ulp_proto_id = VAR_3;

 VAR_18 = FUNC_2(VAR_10->max_cid_space * VAR_2) /
  VAR_8;

 VAR_17 = FUNC_4(VAR_9, VAR_19, VAR_18, 0);
 if (VAR_17)
  return -VAR_5;

 VAR_16 = VAR_8 / VAR_2;
 for (VAR_14 = 0, VAR_15 = 0; VAR_14 < VAR_10->max_cid_space; VAR_14++) {
  long VAR_20 = VAR_2 * (VAR_14 % VAR_16);

  VAR_10->ctx_tbl[VAR_14].kwqe_data = VAR_19->pg_arr[VAR_15] + VAR_20;
  VAR_10->ctx_tbl[VAR_14].kwqe_data_mapping = VAR_19->pg_map_arr[VAR_15] +
         VAR_20;

  if ((VAR_14 % VAR_16) == (VAR_16 - 1))
   VAR_15++;
 }

 VAR_17 = FUNC_5(VAR_9, &VAR_10->kcq1, 0);
 if (VAR_17)
  goto error;

 if (FUNC_1(VAR_11)) {
  VAR_17 = FUNC_5(VAR_9, &VAR_10->kcq2, 1);
  if (VAR_17)
   goto error;
 }

 VAR_18 = FUNC_2(VAR_0) / VAR_8;
 VAR_17 = FUNC_4(VAR_9, &VAR_10->gbl_buf_info, VAR_18, 0);
 if (VAR_17)
  goto error;

 VAR_17 = FUNC_3(VAR_9);
 if (VAR_17)
  goto error;

 if (VAR_10->ethdev->drv_state & VAR_1)
  return 0;

 VAR_10->bnx2x_def_status_blk = VAR_10->ethdev->irq_arr[1].status_blk;

 VAR_10->l2_rx_ring_size = 15;

 VAR_17 = FUNC_6(VAR_9, 4);
 if (VAR_17)
  goto error;

 VAR_17 = FUNC_8(VAR_9);
 if (VAR_17)
  goto error;

 return 0;

error:
 FUNC_7(VAR_9);
 return -VAR_5;
}
