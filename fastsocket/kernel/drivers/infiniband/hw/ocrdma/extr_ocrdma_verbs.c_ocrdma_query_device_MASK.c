
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int max_send_sge; int max_srq_sge; int max_ord_per_qp; int max_ird_per_qp; int local_ca_ack_delay; int max_rqe; scalar_t__ max_qp; int max_pd; int max_mr; int max_cqe; int max_cq; int max_wqe; int * fw_ver; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct ocrdma_dev {TYPE_3__ attr; TYPE_2__ nic_info; } ;
struct ib_device_attr {unsigned long long max_mr_size; int page_size_cap; int device_cap_flags; int max_qp_init_rd_atom; int max_srq_sge; int max_pkeys; scalar_t__ max_fast_reg_page_list_len; int local_ca_ack_delay; int max_srq_wr; scalar_t__ max_srq; void* max_qp_rd_atom; scalar_t__ max_map_per_fmr; scalar_t__ max_fmr; scalar_t__ atomic_cap; int max_pd; scalar_t__ max_mw; int max_mr; int max_cqe; int max_cq; scalar_t__ max_sge_rd; void* max_sge; int max_qp_wr; scalar_t__ max_ah; scalar_t__ max_qp; scalar_t__ hw_ver; int vendor_part_id; int vendor_id; int sys_image_guid; int fw_ver; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int device; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocrdma_dev* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (int *,int *,void*) ;
 int FUNC_2 (struct ib_device_attr*,int ,int) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (struct ocrdma_dev*,int *) ;

int FUNC_5(struct ib_device *VAR_5, struct ib_device_attr *VAR_6)
{
 struct ocrdma_dev *VAR_7 = FUNC_0(VAR_5);

 FUNC_2(VAR_6, 0, sizeof *VAR_6);
 FUNC_1(&VAR_6->fw_ver, &VAR_7->attr.fw_ver[0],
        FUNC_3(sizeof(VAR_7->attr.fw_ver), sizeof(VAR_6->fw_ver)));
 FUNC_4(VAR_7, (u8 *)&VAR_6->sys_image_guid);
 VAR_6->max_mr_size = ~0ull;
 VAR_6->page_size_cap = 0xffff000;
 VAR_6->vendor_id = VAR_7->nic_info.pdev->vendor;
 VAR_6->vendor_part_id = VAR_7->nic_info.pdev->device;
 VAR_6->hw_ver = 0;
 VAR_6->max_qp = VAR_7->attr.max_qp;
 VAR_6->max_ah = VAR_7->attr.max_qp;
 VAR_6->max_qp_wr = VAR_7->attr.max_wqe;

 VAR_6->device_cap_flags = VAR_0 |
     VAR_2 |
     VAR_3 |
     VAR_4 |
     VAR_1;
 VAR_6->max_sge = FUNC_3(VAR_7->attr.max_send_sge, VAR_7->attr.max_srq_sge);
 VAR_6->max_sge_rd = 0;
 VAR_6->max_cq = VAR_7->attr.max_cq;
 VAR_6->max_cqe = VAR_7->attr.max_cqe;
 VAR_6->max_mr = VAR_7->attr.max_mr;
 VAR_6->max_mw = 0;
 VAR_6->max_pd = VAR_7->attr.max_pd;
 VAR_6->atomic_cap = 0;
 VAR_6->max_fmr = 0;
 VAR_6->max_map_per_fmr = 0;
 VAR_6->max_qp_rd_atom =
     FUNC_3(VAR_7->attr.max_ord_per_qp, VAR_7->attr.max_ird_per_qp);
 VAR_6->max_qp_init_rd_atom = VAR_7->attr.max_ord_per_qp;
 VAR_6->max_srq = (VAR_7->attr.max_qp - 1);
 VAR_6->max_srq_sge = VAR_7->attr.max_srq_sge;
 VAR_6->max_srq_wr = VAR_7->attr.max_rqe;
 VAR_6->local_ca_ack_delay = VAR_7->attr.local_ca_ack_delay;
 VAR_6->max_fast_reg_page_list_len = 0;
 VAR_6->max_pkeys = 1;
 return 0;
}
