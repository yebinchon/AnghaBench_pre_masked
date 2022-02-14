
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; } ;
struct ipath_ibdev {TYPE_2__* dd; TYPE_1__ lk_table; int sys_image_guid; } ;
struct ib_device_attr {int device_cap_flags; int vendor_id; unsigned long long max_mr_size; int max_map_per_fmr; int max_qp_init_rd_atom; int max_mcast_grp; int max_mcast_qp_attach; int max_total_mcast_qp_attach; int max_pkeys; int atomic_cap; int max_srq_sge; int max_srq_wr; int max_srq; int max_qp_rd_atom; int max_pd; int max_fmr; int max_mr; int max_cqe; int max_ah; int max_cq; int max_sge; int max_qp_wr; int max_qp; int sys_image_guid; int hw_ver; int vendor_part_id; int page_size_cap; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int ipath_pcirev; int ipath_deviceid; } ;


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
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ib_device_attr*,int ,int) ;
 struct ipath_ibdev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_25,
         struct ib_device_attr *VAR_26)
{
 struct ipath_ibdev *VAR_27 = FUNC_2(VAR_25);

 FUNC_1(VAR_26, 0, sizeof(*VAR_26));

 VAR_26->device_cap_flags = VAR_1 |
  VAR_2 | VAR_5 |
  VAR_7 | VAR_4 |
  VAR_3 | VAR_6;
 VAR_26->page_size_cap = VAR_12;
 VAR_26->vendor_id =
  VAR_9 << 16 | VAR_10 << 8 | VAR_11;
 VAR_26->vendor_part_id = VAR_27->dd->ipath_deviceid;
 VAR_26->hw_ver = VAR_27->dd->ipath_pcirev;

 VAR_26->sys_image_guid = VAR_27->sys_image_guid;

 VAR_26->max_mr_size = ~0ull;
 VAR_26->max_qp = VAR_20;
 VAR_26->max_qp_wr = VAR_19;
 VAR_26->max_sge = VAR_21;
 VAR_26->max_cq = VAR_15;
 VAR_26->max_ah = VAR_13;
 VAR_26->max_cqe = VAR_14;
 VAR_26->max_mr = VAR_27->lk_table.max;
 VAR_26->max_fmr = VAR_27->lk_table.max;
 VAR_26->max_map_per_fmr = 32767;
 VAR_26->max_pd = VAR_18;
 VAR_26->max_qp_rd_atom = VAR_8;
 VAR_26->max_qp_init_rd_atom = 255;

 VAR_26->max_srq = VAR_24;
 VAR_26->max_srq_wr = VAR_23;
 VAR_26->max_srq_sge = VAR_22;

 VAR_26->atomic_cap = VAR_0;
 VAR_26->max_pkeys = FUNC_0(VAR_27->dd);
 VAR_26->max_mcast_grp = VAR_16;
 VAR_26->max_mcast_qp_attach = VAR_17;
 VAR_26->max_total_mcast_qp_attach = VAR_26->max_mcast_qp_attach *
  VAR_26->max_mcast_grp;

 return 0;
}
