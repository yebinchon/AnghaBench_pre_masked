
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


typedef scalar_t__ u64 ;
struct mthca_init_hca_param {int mc_base; int srqc_base; int cqc_base; int rdb_base; int eqpc_base; int qpc_base; int mpt_base; int mtt_base; int eqc_base; } ;
struct mthca_dev_lim {int mpt_entry_sz; int qpc_entry_sz; int eqpc_entry_sz; int cqc_entry_sz; int srq_entry_sz; } ;
struct TYPE_10__ {int aux_icm; } ;
struct TYPE_11__ {TYPE_2__ arbel; } ;
struct TYPE_12__ {void* mtt_table; void* mpt_table; } ;
struct TYPE_13__ {int rdb_shift; void* qp_table; void* eqp_table; void* rdb_table; } ;
struct TYPE_14__ {void* table; } ;
struct TYPE_16__ {void* table; } ;
struct TYPE_9__ {void* table; } ;
struct TYPE_15__ {int reserved_mtts; int mtt_seg_size; int num_mtt_segs; int num_mpts; int reserved_mrws; int num_qps; int reserved_qps; int num_cqs; int reserved_cqs; int num_srqs; int reserved_srqs; int num_mgms; int num_amgms; } ;
struct mthca_dev {int mthca_flags; TYPE_3__ fw; TYPE_4__ mr_table; TYPE_5__ qp_table; TYPE_6__ cq_table; TYPE_8__ srq_table; TYPE_1__ mcg_table; TYPE_7__ limits; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (struct mthca_dev*,int ) ;
 int FUNC_3 (struct mthca_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct mthca_dev*) ;
 int FUNC_5 (struct mthca_dev*,scalar_t__,int,int ) ;
 void* FUNC_6 (struct mthca_dev*,int ,int,int,int,int,int) ;
 int FUNC_7 (struct mthca_dev*,char*,unsigned long long,unsigned long long) ;
 int FUNC_8 (struct mthca_dev*,char*,...) ;
 int FUNC_9 (struct mthca_dev*,int ,int ) ;
 int FUNC_10 (struct mthca_dev*,void*) ;
 int FUNC_11 (struct mthca_dev*,int ) ;
 int FUNC_12 (struct mthca_dev*) ;

__attribute__((used)) static int FUNC_13(struct mthca_dev *VAR_6,
     struct mthca_dev_lim *VAR_7,
     struct mthca_init_hca_param *VAR_8,
     u64 VAR_9)
{
 u64 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_6, VAR_9, &VAR_10);
 if (VAR_11) {
  FUNC_8(VAR_6, "SET_ICM_SIZE command returned %d, aborting.\n", VAR_11);
  return VAR_11;
 }

 FUNC_7(VAR_6, "%lld KB of HCA context requires %lld KB aux memory.\n",
    (unsigned long long) VAR_9 >> 10,
    (unsigned long long) VAR_10 << 2);

 VAR_6->fw.arbel.aux_icm = FUNC_5(VAR_6, VAR_10,
       VAR_1 | VAR_5, 0);
 if (!VAR_6->fw.arbel.aux_icm) {
  FUNC_8(VAR_6, "Couldn't allocate aux memory, aborting.\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_6, VAR_6->fw.arbel.aux_icm);
 if (VAR_11) {
  FUNC_8(VAR_6, "MAP_ICM_AUX returned %d, aborting.\n", VAR_11);
  goto err_free_aux;
 }

 VAR_11 = FUNC_11(VAR_6, VAR_8->eqc_base);
 if (VAR_11) {
  FUNC_8(VAR_6, "Failed to map EQ context memory, aborting.\n");
  goto err_unmap_aux;
 }


 VAR_6->limits.reserved_mtts = FUNC_0(VAR_6->limits.reserved_mtts * VAR_6->limits.mtt_seg_size,
        FUNC_1()) / VAR_6->limits.mtt_seg_size;

 VAR_6->mr_table.mtt_table = FUNC_6(VAR_6, VAR_8->mtt_base,
        VAR_6->limits.mtt_seg_size,
        VAR_6->limits.num_mtt_segs,
        VAR_6->limits.reserved_mtts,
        1, 0);
 if (!VAR_6->mr_table.mtt_table) {
  FUNC_8(VAR_6, "Failed to map MTT context memory, aborting.\n");
  VAR_11 = -VAR_0;
  goto err_unmap_eq;
 }

 VAR_6->mr_table.mpt_table = FUNC_6(VAR_6, VAR_8->mpt_base,
        VAR_7->mpt_entry_sz,
        VAR_6->limits.num_mpts,
        VAR_6->limits.reserved_mrws,
        1, 1);
 if (!VAR_6->mr_table.mpt_table) {
  FUNC_8(VAR_6, "Failed to map MPT context memory, aborting.\n");
  VAR_11 = -VAR_0;
  goto err_unmap_mtt;
 }

 VAR_6->qp_table.qp_table = FUNC_6(VAR_6, VAR_8->qpc_base,
       VAR_7->qpc_entry_sz,
       VAR_6->limits.num_qps,
       VAR_6->limits.reserved_qps,
       0, 0);
 if (!VAR_6->qp_table.qp_table) {
  FUNC_8(VAR_6, "Failed to map QP context memory, aborting.\n");
  VAR_11 = -VAR_0;
  goto err_unmap_mpt;
 }

 VAR_6->qp_table.eqp_table = FUNC_6(VAR_6, VAR_8->eqpc_base,
        VAR_7->eqpc_entry_sz,
        VAR_6->limits.num_qps,
        VAR_6->limits.reserved_qps,
        0, 0);
 if (!VAR_6->qp_table.eqp_table) {
  FUNC_8(VAR_6, "Failed to map EQP context memory, aborting.\n");
  VAR_11 = -VAR_0;
  goto err_unmap_qp;
 }

 VAR_6->qp_table.rdb_table = FUNC_6(VAR_6, VAR_8->rdb_base,
        VAR_4,
        VAR_6->limits.num_qps <<
        VAR_6->qp_table.rdb_shift, 0,
        0, 0);
 if (!VAR_6->qp_table.rdb_table) {
  FUNC_8(VAR_6, "Failed to map RDB context memory, aborting\n");
  VAR_11 = -VAR_0;
  goto err_unmap_eqp;
 }

       VAR_6->cq_table.table = FUNC_6(VAR_6, VAR_8->cqc_base,
          VAR_7->cqc_entry_sz,
          VAR_6->limits.num_cqs,
          VAR_6->limits.reserved_cqs,
          0, 0);
 if (!VAR_6->cq_table.table) {
  FUNC_8(VAR_6, "Failed to map CQ context memory, aborting.\n");
  VAR_11 = -VAR_0;
  goto err_unmap_rdb;
 }

 if (VAR_6->mthca_flags & VAR_2) {
  VAR_6->srq_table.table =
   FUNC_6(VAR_6, VAR_8->srqc_base,
           VAR_7->srq_entry_sz,
           VAR_6->limits.num_srqs,
           VAR_6->limits.reserved_srqs,
           0, 0);
  if (!VAR_6->srq_table.table) {
   FUNC_8(VAR_6, "Failed to map SRQ context memory, "
      "aborting.\n");
   VAR_11 = -VAR_0;
   goto err_unmap_cq;
  }
 }






 VAR_6->mcg_table.table = FUNC_6(VAR_6, VAR_8->mc_base,
            VAR_3,
            VAR_6->limits.num_mgms +
            VAR_6->limits.num_amgms,
            VAR_6->limits.num_mgms +
            VAR_6->limits.num_amgms,
            0, 0);
 if (!VAR_6->mcg_table.table) {
  FUNC_8(VAR_6, "Failed to map MCG context memory, aborting.\n");
  VAR_11 = -VAR_0;
  goto err_unmap_srq;
 }

 return 0;

err_unmap_srq:
 if (VAR_6->mthca_flags & VAR_2)
  FUNC_10(VAR_6, VAR_6->srq_table.table);

err_unmap_cq:
 FUNC_10(VAR_6, VAR_6->cq_table.table);

err_unmap_rdb:
 FUNC_10(VAR_6, VAR_6->qp_table.rdb_table);

err_unmap_eqp:
 FUNC_10(VAR_6, VAR_6->qp_table.eqp_table);

err_unmap_qp:
 FUNC_10(VAR_6, VAR_6->qp_table.qp_table);

err_unmap_mpt:
 FUNC_10(VAR_6, VAR_6->mr_table.mpt_table);

err_unmap_mtt:
 FUNC_10(VAR_6, VAR_6->mr_table.mtt_table);

err_unmap_eq:
 FUNC_12(VAR_6);

err_unmap_aux:
 FUNC_4(VAR_6);

err_free_aux:
 FUNC_9(VAR_6, VAR_6->fw.arbel.aux_icm, 0);

 return VAR_11;
}
