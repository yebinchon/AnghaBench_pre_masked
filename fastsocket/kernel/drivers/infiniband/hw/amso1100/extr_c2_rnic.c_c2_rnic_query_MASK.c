
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
typedef int u64 ;
struct ib_device_attr {int fw_ver; int max_mr_size; int page_size_cap; int vendor_id; int vendor_part_id; int hw_ver; int max_qp; int max_qp_wr; int max_cq; int max_cqe; int max_mr; int max_pd; int max_qp_rd_atom; int max_res_rd_atom; int max_qp_init_rd_atom; int max_mw; scalar_t__ local_ca_ack_delay; scalar_t__ max_pkeys; scalar_t__ max_srq_sge; scalar_t__ max_srq_wr; scalar_t__ max_srq; scalar_t__ max_map_per_fmr; scalar_t__ max_fmr; scalar_t__ max_ah; scalar_t__ max_total_mcast_qp_attach; scalar_t__ max_mcast_qp_attach; scalar_t__ max_mcast_grp; scalar_t__ max_raw_ethy_qp; scalar_t__ max_raw_ipv6_qp; scalar_t__ max_rdd; scalar_t__ max_ee; int atomic_cap; scalar_t__ max_ee_init_rd_atom; scalar_t__ max_ee_rd_atom; int max_sge_rd; int max_sge; int device_cap_flags; int sys_image_guid; } ;
struct TYPE_3__ {unsigned long context; } ;
struct c2wr_rnic_query_req {int rnic_handle; TYPE_1__ hdr; } ;
struct c2wr_rnic_query_rep {int max_mws; int max_qp_ord; int max_global_ird; int max_qp_ird; int max_pds; int max_mrs; int max_cq_depth; int max_cqs; int max_qp_depth; int max_qps; int hw_version; int part_number; int vendor_id; int fw_ver_patch; int fw_ver_minor; int fw_ver_major; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct c2_dev {int device_cap_flags; TYPE_2__* netdev; int adapter_handle; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct c2wr_rnic_query_rep*) ;
 int FUNC_2 (struct c2wr_rnic_query_req*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct c2_dev*,struct c2wr_rnic_query_rep*) ;
 struct c2_vq_req* FUNC_5 (struct c2_dev*) ;
 int FUNC_6 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_7 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_8 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_9 (struct c2_dev*,union c2wr*) ;
 int FUNC_10 (struct c2_dev*,struct c2_vq_req*) ;

__attribute__((used)) static int FUNC_11(struct c2_dev *VAR_6, struct ib_device_attr *VAR_7)
{
 struct c2_vq_req *VAR_8;
 struct c2wr_rnic_query_req VAR_9;
 struct c2wr_rnic_query_rep *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_5(VAR_6);
 if (!VAR_8)
  return -VAR_4;

 FUNC_2(&VAR_9, VAR_3);
 VAR_9.hdr.context = (unsigned long) VAR_8;
 VAR_9.rnic_handle = VAR_6->adapter_handle;

 FUNC_7(VAR_6, VAR_8);

 VAR_11 = FUNC_9(VAR_6, (union c2wr *) &VAR_9);
 if (VAR_11) {
  FUNC_8(VAR_6, VAR_8);
  goto bail1;
 }

 VAR_11 = FUNC_10(VAR_6, VAR_8);
 if (VAR_11)
  goto bail1;

 VAR_10 =
     (struct c2wr_rnic_query_rep *) (unsigned long) (VAR_8->reply_msg);
 if (!VAR_10)
  VAR_11 = -VAR_4;
 else
  VAR_11 = FUNC_1(VAR_10);
 if (VAR_11)
  goto bail2;

 VAR_7->fw_ver =
  ((u64)FUNC_0(VAR_10->fw_ver_major) << 32) |
  ((FUNC_0(VAR_10->fw_ver_minor) & 0xFFFF) << 16) |
  (FUNC_0(VAR_10->fw_ver_patch) & 0xFFFF);
 FUNC_3(&VAR_7->sys_image_guid, VAR_6->netdev->dev_addr, 6);
 VAR_7->max_mr_size = 0xFFFFFFFF;
 VAR_7->page_size_cap = ~(VAR_2-1);
 VAR_7->vendor_id = FUNC_0(VAR_10->vendor_id);
 VAR_7->vendor_part_id = FUNC_0(VAR_10->part_number);
 VAR_7->hw_ver = FUNC_0(VAR_10->hw_version);
 VAR_7->max_qp = FUNC_0(VAR_10->max_qps);
 VAR_7->max_qp_wr = FUNC_0(VAR_10->max_qp_depth);
 VAR_7->device_cap_flags = VAR_6->device_cap_flags;
 VAR_7->max_sge = VAR_0;
 VAR_7->max_sge_rd = VAR_1;
 VAR_7->max_cq = FUNC_0(VAR_10->max_cqs);
 VAR_7->max_cqe = FUNC_0(VAR_10->max_cq_depth);
 VAR_7->max_mr = FUNC_0(VAR_10->max_mrs);
 VAR_7->max_pd = FUNC_0(VAR_10->max_pds);
 VAR_7->max_qp_rd_atom = FUNC_0(VAR_10->max_qp_ird);
 VAR_7->max_ee_rd_atom = 0;
 VAR_7->max_res_rd_atom = FUNC_0(VAR_10->max_global_ird);
 VAR_7->max_qp_init_rd_atom = FUNC_0(VAR_10->max_qp_ord);
 VAR_7->max_ee_init_rd_atom = 0;
 VAR_7->atomic_cap = VAR_5;
 VAR_7->max_ee = 0;
 VAR_7->max_rdd = 0;
 VAR_7->max_mw = FUNC_0(VAR_10->max_mws);
 VAR_7->max_raw_ipv6_qp = 0;
 VAR_7->max_raw_ethy_qp = 0;
 VAR_7->max_mcast_grp = 0;
 VAR_7->max_mcast_qp_attach = 0;
 VAR_7->max_total_mcast_qp_attach = 0;
 VAR_7->max_ah = 0;
 VAR_7->max_fmr = 0;
 VAR_7->max_map_per_fmr = 0;
 VAR_7->max_srq = 0;
 VAR_7->max_srq_wr = 0;
 VAR_7->max_srq_sge = 0;
 VAR_7->max_pkeys = 0;
 VAR_7->local_ca_ack_delay = 0;

 bail2:
 FUNC_4(VAR_6, VAR_10);

 bail1:
 FUNC_6(VAR_6, VAR_8);
 return VAR_11;
}
