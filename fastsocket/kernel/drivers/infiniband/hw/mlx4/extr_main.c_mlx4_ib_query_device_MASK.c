
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct ib_smp {scalar_t__ data; int attr_id; } ;
struct ib_device_attr {int device_cap_flags; int vendor_id; int hw_ver; unsigned long long max_mr_size; int max_qp; int max_qp_rd_atom; int max_res_rd_atom; int max_mcast_grp; int max_mcast_qp_attach; int max_total_mcast_qp_attach; int max_map_per_fmr; int max_pkeys; int atomic_cap; int masked_atomic_cap; int local_ca_ack_delay; int max_fast_reg_page_list_len; int max_srq_sge; scalar_t__ max_srq_wr; scalar_t__ max_srq; int max_qp_init_rd_atom; scalar_t__ max_pd; scalar_t__ max_mr; int max_cqe; scalar_t__ max_cq; int max_sge; scalar_t__ max_qp_wr; int page_size_cap; int sys_image_guid; int vendor_part_id; int fw_ver; } ;
struct ib_device {int dummy; } ;
typedef int __be32 ;
struct TYPE_6__ {int flags; int bmme_flags; int num_qps; int reserved_qps; int max_qp_dest_rdma; int num_mgms; int num_amgms; int num_qp_per_mgm; int max_fmr_maps; int * pkey_table_len; int local_ca_ack_delay; int max_srq_sge; scalar_t__ max_srq_wqes; scalar_t__ reserved_srqs; scalar_t__ num_srqs; int max_qp_init_rdma; scalar_t__ reserved_pds; scalar_t__ num_pds; scalar_t__ reserved_mrws; scalar_t__ num_mpts; int max_cqes; scalar_t__ reserved_cqs; scalar_t__ num_cqs; int max_rq_sg; int max_sq_sg; scalar_t__ max_wqes; int page_size_cap; scalar_t__ max_gso_sz; int fw_ver; } ;
struct TYPE_5__ {TYPE_3__ caps; TYPE_1__* pdev; } ;
struct TYPE_4__ {int device; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
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
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_smp*) ;
 int FUNC_2 (struct ib_smp*) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (struct ib_device_attr*,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct mlx4_ib_dev*,int ,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 struct mlx4_ib_dev* FUNC_9 (struct ib_device*) ;

__attribute__((used)) static int FUNC_10(struct ib_device *VAR_40,
    struct ib_device_attr *VAR_41)
{
 struct mlx4_ib_dev *VAR_42 = FUNC_9(VAR_40);
 struct ib_smp *VAR_43 = ((void*)0);
 struct ib_smp *VAR_44 = ((void*)0);
 int VAR_45 = -VAR_0;

 VAR_43 = FUNC_4(sizeof *VAR_43, VAR_1);
 VAR_44 = FUNC_3(sizeof *VAR_44, VAR_1);
 if (!VAR_43 || !VAR_44)
  goto out;

 FUNC_1(VAR_43);
 VAR_43->attr_id = VAR_21;

 VAR_45 = FUNC_8(FUNC_9(VAR_40), VAR_38,
      1, ((void*)0), ((void*)0), VAR_43, VAR_44);
 if (VAR_45)
  goto out;

 FUNC_6(VAR_41, 0, sizeof *VAR_41);

 VAR_41->fw_ver = VAR_42->dev->caps.fw_ver;
 VAR_41->device_cap_flags = VAR_8 |
  VAR_14 |
  VAR_16 |
  VAR_15 |
  VAR_7;
 if (VAR_42->dev->caps.flags & VAR_30)
  VAR_41->device_cap_flags |= VAR_5;
 if (VAR_42->dev->caps.flags & VAR_31)
  VAR_41->device_cap_flags |= VAR_6;
 if (VAR_42->dev->caps.flags & VAR_28)
  VAR_41->device_cap_flags |= VAR_4;
 if (VAR_42->dev->caps.flags & VAR_35)
  VAR_41->device_cap_flags |= VAR_17;
 if (VAR_42->dev->caps.flags & VAR_33)
  VAR_41->device_cap_flags |= VAR_18;
 if (VAR_42->dev->caps.max_gso_sz && VAR_42->dev->caps.flags & VAR_32)
  VAR_41->device_cap_flags |= VAR_19;
 if (VAR_42->dev->caps.bmme_flags & VAR_25)
  VAR_41->device_cap_flags |= VAR_9;
 if ((VAR_42->dev->caps.bmme_flags & VAR_23) &&
     (VAR_42->dev->caps.bmme_flags & VAR_24) &&
     (VAR_42->dev->caps.bmme_flags & VAR_22))
  VAR_41->device_cap_flags |= VAR_10;
 if (VAR_42->dev->caps.flags & VAR_36)
  VAR_41->device_cap_flags |= VAR_20;
 if (VAR_42->dev->caps.flags & VAR_34)
  VAR_41->device_cap_flags |= VAR_11;
 if (VAR_42->dev->caps.bmme_flags & VAR_26) {
  if (VAR_42->dev->caps.bmme_flags & VAR_27)
   VAR_41->device_cap_flags |= VAR_13;
  else
   VAR_41->device_cap_flags |= VAR_12;
 }

 VAR_41->vendor_id = FUNC_0((__be32 *) (VAR_44->data + 36)) &
  0xffffff;
 VAR_41->vendor_part_id = VAR_42->dev->pdev->device;
 VAR_41->hw_ver = FUNC_0((__be32 *) (VAR_44->data + 32));
 FUNC_5(&VAR_41->sys_image_guid, VAR_44->data + 4, 8);

 VAR_41->max_mr_size = ~0ull;
 VAR_41->page_size_cap = VAR_42->dev->caps.page_size_cap;
 VAR_41->max_qp = VAR_42->dev->caps.num_qps - VAR_42->dev->caps.reserved_qps;
 VAR_41->max_qp_wr = VAR_42->dev->caps.max_wqes - VAR_37;
 VAR_41->max_sge = FUNC_7(VAR_42->dev->caps.max_sq_sg,
      VAR_42->dev->caps.max_rq_sg);
 VAR_41->max_cq = VAR_42->dev->caps.num_cqs - VAR_42->dev->caps.reserved_cqs;
 VAR_41->max_cqe = VAR_42->dev->caps.max_cqes;
 VAR_41->max_mr = VAR_42->dev->caps.num_mpts - VAR_42->dev->caps.reserved_mrws;
 VAR_41->max_pd = VAR_42->dev->caps.num_pds - VAR_42->dev->caps.reserved_pds;
 VAR_41->max_qp_rd_atom = VAR_42->dev->caps.max_qp_dest_rdma;
 VAR_41->max_qp_init_rd_atom = VAR_42->dev->caps.max_qp_init_rdma;
 VAR_41->max_res_rd_atom = VAR_41->max_qp_rd_atom * VAR_41->max_qp;
 VAR_41->max_srq = VAR_42->dev->caps.num_srqs - VAR_42->dev->caps.reserved_srqs;
 VAR_41->max_srq_wr = VAR_42->dev->caps.max_srq_wqes - 1;
 VAR_41->max_srq_sge = VAR_42->dev->caps.max_srq_sge;
 VAR_41->max_fast_reg_page_list_len = VAR_39;
 VAR_41->local_ca_ack_delay = VAR_42->dev->caps.local_ca_ack_delay;
 VAR_41->atomic_cap = VAR_42->dev->caps.flags & VAR_29 ?
  VAR_2 : VAR_3;
 VAR_41->masked_atomic_cap = VAR_41->atomic_cap;
 VAR_41->max_pkeys = VAR_42->dev->caps.pkey_table_len[1];
 VAR_41->max_mcast_grp = VAR_42->dev->caps.num_mgms + VAR_42->dev->caps.num_amgms;
 VAR_41->max_mcast_qp_attach = VAR_42->dev->caps.num_qp_per_mgm;
 VAR_41->max_total_mcast_qp_attach = VAR_41->max_mcast_qp_attach *
        VAR_41->max_mcast_grp;
 VAR_41->max_map_per_fmr = VAR_42->dev->caps.max_fmr_maps;

out:
 FUNC_2(VAR_43);
 FUNC_2(VAR_44);

 return VAR_45;
}
