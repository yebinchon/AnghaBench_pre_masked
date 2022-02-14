
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max; } ;
struct qib_ibdev {TYPE_1__ lk_table; } ;
struct qib_devdata {int minrev; int deviceid; } ;
struct ib_device_attr {int device_cap_flags; int vendor_id; unsigned long long max_mr_size; int max_map_per_fmr; int max_qp_init_rd_atom; int max_mcast_grp; int max_mcast_qp_attach; int max_total_mcast_qp_attach; int max_pkeys; int atomic_cap; int max_srq_sge; int max_srq_wr; int max_srq; int max_qp_rd_atom; int max_pd; int max_fmr; int max_mr; int max_cqe; int max_ah; int max_cq; int max_sge; int max_qp_wr; int max_qp; int sys_image_guid; int hw_ver; int vendor_part_id; int page_size_cap; } ;
struct ib_device {int dummy; } ;


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
 struct qib_devdata* FUNC_0 (struct ib_device*) ;
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
 int FUNC_1 (struct ib_device_attr*,int ,int) ;
 int FUNC_2 (struct qib_devdata*) ;
 struct qib_ibdev* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_26,
       struct ib_device_attr *VAR_27)
{
 struct qib_devdata *VAR_28 = FUNC_0(VAR_26);
 struct qib_ibdev *VAR_29 = FUNC_3(VAR_26);

 FUNC_1(VAR_27, 0, sizeof(*VAR_27));

 VAR_27->device_cap_flags = VAR_1 |
  VAR_2 | VAR_5 |
  VAR_7 | VAR_4 |
  VAR_3 | VAR_6;
 VAR_27->page_size_cap = VAR_8;
 VAR_27->vendor_id =
  VAR_10 << 16 | VAR_11 << 8 | VAR_12;
 VAR_27->vendor_part_id = VAR_28->deviceid;
 VAR_27->hw_ver = VAR_28->minrev;
 VAR_27->sys_image_guid = VAR_25;
 VAR_27->max_mr_size = ~0ULL;
 VAR_27->max_qp = VAR_20;
 VAR_27->max_qp_wr = VAR_19;
 VAR_27->max_sge = VAR_21;
 VAR_27->max_cq = VAR_15;
 VAR_27->max_ah = VAR_13;
 VAR_27->max_cqe = VAR_14;
 VAR_27->max_mr = VAR_29->lk_table.max;
 VAR_27->max_fmr = VAR_29->lk_table.max;
 VAR_27->max_map_per_fmr = 32767;
 VAR_27->max_pd = VAR_18;
 VAR_27->max_qp_rd_atom = VAR_9;
 VAR_27->max_qp_init_rd_atom = 255;

 VAR_27->max_srq = VAR_24;
 VAR_27->max_srq_wr = VAR_23;
 VAR_27->max_srq_sge = VAR_22;

 VAR_27->atomic_cap = VAR_0;
 VAR_27->max_pkeys = FUNC_2(VAR_28);
 VAR_27->max_mcast_grp = VAR_16;
 VAR_27->max_mcast_qp_attach = VAR_17;
 VAR_27->max_total_mcast_qp_attach = VAR_27->max_mcast_qp_attach *
  VAR_27->max_mcast_grp;

 return 0;
}
