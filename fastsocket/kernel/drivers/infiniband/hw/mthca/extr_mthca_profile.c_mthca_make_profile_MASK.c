
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mthca_profile {int uarc_size; int num_qp; int num_srq; int rdb_per_qp; int num_cq; int num_mcg; int num_mpt; int num_mtt; int num_uar; int num_udav; scalar_t__ fmr_reserved_mtts; } ;
struct mthca_init_hca_param {int qpc_base; int log_num_qps; int eec_base; int log_num_eecs; int srqc_base; int log_num_srqs; int cqc_base; int log_num_cqs; int eqpc_base; int eeec_base; int eqc_base; int log_num_eqs; int rdb_base; int mc_base; int log_mc_table_sz; int mc_hash_sz; int mpt_base; int log_mpt_sz; int mtt_base; int uar_scratch_base; int uarc_base; void* log_uar_sz; void* log_uarc_sz; void* mtt_seg_sz; void* log_mc_entry_sz; } ;
struct TYPE_10__ {int max_icm_sz; } ;
struct TYPE_11__ {TYPE_1__ arbel; } ;
struct mthca_dev_lim {int qpc_entry_sz; int eec_entry_sz; int srq_entry_sz; int cqc_entry_sz; int eqpc_entry_sz; int eeec_entry_sz; int eqc_entry_sz; int mpt_entry_sz; int uar_scratch_entry_sz; TYPE_2__ hca; } ;
struct TYPE_18__ {int mtt_seg_size; int num_qps; int num_eecs; int num_srqs; int num_cqs; int num_eqs; int num_mgms; int num_amgms; int num_mpts; int num_mtt_segs; int num_uars; scalar_t__ fmr_reserved_mtts; int num_pds; } ;
struct TYPE_17__ {int uarc_size; int uarc_base; } ;
struct TYPE_16__ {int ddr_av_base; int num_ddr_avs; } ;
struct TYPE_15__ {int mpt_base; int mtt_base; } ;
struct TYPE_14__ {int rdb_shift; int rdb_base; } ;
struct TYPE_12__ {int fw_start; } ;
struct TYPE_13__ {TYPE_3__ tavor; } ;
struct mthca_dev {int ddr_start; int mthca_flags; TYPE_9__ limits; TYPE_8__ uar_table; TYPE_7__ av_table; TYPE_6__ mr_table; TYPE_5__ qp_table; TYPE_4__ fw; } ;
typedef int s64 ;


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






 scalar_t__ VAR_10 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mthca_resource*) ;
 struct mthca_resource* FUNC_2 (int,int ) ;
 void* FUNC_3 (void*,int) ;
 int FUNC_4 (struct mthca_dev*,char*,int,...) ;
 int FUNC_5 (struct mthca_dev*,char*,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_6 (struct mthca_dev*) ;
 int FUNC_7 (struct mthca_dev*,char*,...) ;

s64 FUNC_8(struct mthca_dev *VAR_11,
         struct mthca_profile *VAR_12,
         struct mthca_dev_lim *VAR_13,
         struct mthca_init_hca_param *VAR_14)
{
 struct mthca_resource {
  u64 size;
  u64 start;
  int type;
  int num;
  int log_num;
 };

 u64 VAR_15, VAR_16;
 s64 VAR_17 = 0;
 struct mthca_resource *VAR_18;
 struct mthca_resource VAR_19;
 int VAR_20, VAR_21;

 VAR_18 = FUNC_2(VAR_9 * sizeof *VAR_18, VAR_2);
 if (!VAR_18)
  return -VAR_1;

 VAR_18[133].size = VAR_13->qpc_entry_sz;
 VAR_18[140].size = VAR_13->eec_entry_sz;
 VAR_18[131].size = VAR_13->srq_entry_sz;
 VAR_18[141].size = VAR_13->cqc_entry_sz;
 VAR_18[137].size = VAR_13->eqpc_entry_sz;
 VAR_18[139].size = VAR_13->eeec_entry_sz;
 VAR_18[138].size = VAR_13->eqc_entry_sz;
 VAR_18[132].size = VAR_8;
 VAR_18[136].size = VAR_5;
 VAR_18[135].size = VAR_13->mpt_entry_sz;
 VAR_18[134].size = VAR_11->limits.mtt_seg_size;
 VAR_18[130].size = VAR_13->uar_scratch_entry_sz;
 VAR_18[128].size = VAR_3;
 VAR_18[129].size = VAR_12->uarc_size;

 VAR_18[133].num = VAR_12->num_qp;
 VAR_18[131].num = VAR_12->num_srq;
 VAR_18[137].num = VAR_12->num_qp;
 VAR_18[132].num = VAR_12->num_qp * VAR_12->rdb_per_qp;
 VAR_18[141].num = VAR_12->num_cq;
 VAR_18[138].num = VAR_6;
 VAR_18[136].num = VAR_12->num_mcg;
 VAR_18[135].num = VAR_12->num_mpt;
 VAR_18[134].num = VAR_12->num_mtt;
 VAR_18[130].num = VAR_12->num_uar;
 VAR_18[129].num = VAR_12->num_uar;
 VAR_18[128].num = VAR_12->num_udav;

 for (VAR_20 = 0; VAR_20 < VAR_9; ++VAR_20) {
  VAR_18[VAR_20].type = VAR_20;
  VAR_18[VAR_20].log_num = FUNC_3(FUNC_0(VAR_18[VAR_20].num) - 1, 0);
  VAR_18[VAR_20].size *= VAR_18[VAR_20].num;
  if (FUNC_6(VAR_11))
   VAR_18[VAR_20].size = FUNC_3(VAR_18[VAR_20].size, (u64) VAR_10);
 }

 if (FUNC_6(VAR_11)) {
  VAR_15 = 0;
  VAR_16 = VAR_13->hca.arbel.max_icm_sz;
 } else {
  VAR_15 = VAR_11->ddr_start;
  VAR_16 = VAR_11->fw.tavor.fw_start - VAR_11->ddr_start;
 }







 for (VAR_20 = VAR_9; VAR_20 > 0; --VAR_20)
  for (VAR_21 = 1; VAR_21 < VAR_20; ++VAR_21) {
   if (VAR_18[VAR_21].size > VAR_18[VAR_21 - 1].size) {
    VAR_19 = VAR_18[VAR_21];
    VAR_18[VAR_21] = VAR_18[VAR_21 - 1];
    VAR_18[VAR_21 - 1] = VAR_19;
   }
  }

 for (VAR_20 = 0; VAR_20 < VAR_9; ++VAR_20) {
  if (VAR_18[VAR_20].size) {
   VAR_18[VAR_20].start = VAR_15 + VAR_17;
   VAR_17 += VAR_18[VAR_20].size;
  }
  if (VAR_17 > VAR_16) {
   FUNC_5(VAR_11, "Profile requires 0x%llx bytes; "
      "won't fit in 0x%llx bytes of context memory.\n",
      (unsigned long long) VAR_17,
      (unsigned long long) VAR_16);
   FUNC_1(VAR_18);
   return -VAR_1;
  }

  if (VAR_18[VAR_20].size)
   FUNC_4(VAR_11, "profile[%2d]--%2d/%2d @ 0x%16llx "
      "(size 0x%8llx)\n",
      VAR_20, VAR_18[VAR_20].type, VAR_18[VAR_20].log_num,
      (unsigned long long) VAR_18[VAR_20].start,
      (unsigned long long) VAR_18[VAR_20].size);
 }

 if (FUNC_6(VAR_11))
  FUNC_4(VAR_11, "HCA context memory: reserving %d KB\n",
     (int) (VAR_17 >> 10));
 else
  FUNC_4(VAR_11, "HCA memory: allocated %d KB/%d KB (%d KB free)\n",
     (int) (VAR_17 >> 10), (int) (VAR_16 >> 10),
     (int) ((VAR_16 - VAR_17) >> 10));

 for (VAR_20 = 0; VAR_20 < VAR_9; ++VAR_20) {
  switch (VAR_18[VAR_20].type) {
  case 133:
   VAR_11->limits.num_qps = VAR_18[VAR_20].num;
   VAR_14->qpc_base = VAR_18[VAR_20].start;
   VAR_14->log_num_qps = VAR_18[VAR_20].log_num;
   break;
  case 140:
   VAR_11->limits.num_eecs = VAR_18[VAR_20].num;
   VAR_14->eec_base = VAR_18[VAR_20].start;
   VAR_14->log_num_eecs = VAR_18[VAR_20].log_num;
   break;
  case 131:
   VAR_11->limits.num_srqs = VAR_18[VAR_20].num;
   VAR_14->srqc_base = VAR_18[VAR_20].start;
   VAR_14->log_num_srqs = VAR_18[VAR_20].log_num;
   break;
  case 141:
   VAR_11->limits.num_cqs = VAR_18[VAR_20].num;
   VAR_14->cqc_base = VAR_18[VAR_20].start;
   VAR_14->log_num_cqs = VAR_18[VAR_20].log_num;
   break;
  case 137:
   VAR_14->eqpc_base = VAR_18[VAR_20].start;
   break;
  case 139:
   VAR_14->eeec_base = VAR_18[VAR_20].start;
   break;
  case 138:
   VAR_11->limits.num_eqs = VAR_18[VAR_20].num;
   VAR_14->eqc_base = VAR_18[VAR_20].start;
   VAR_14->log_num_eqs = VAR_18[VAR_20].log_num;
   break;
  case 132:
   for (VAR_11->qp_table.rdb_shift = 0;
        VAR_12->num_qp << VAR_11->qp_table.rdb_shift < VAR_18[VAR_20].num;
        ++VAR_11->qp_table.rdb_shift)
    ;
   VAR_11->qp_table.rdb_base = (u32) VAR_18[VAR_20].start;
   VAR_14->rdb_base = VAR_18[VAR_20].start;
   break;
  case 136:
   VAR_11->limits.num_mgms = VAR_18[VAR_20].num >> 1;
   VAR_11->limits.num_amgms = VAR_18[VAR_20].num >> 1;
   VAR_14->mc_base = VAR_18[VAR_20].start;
   VAR_14->log_mc_entry_sz = FUNC_0(VAR_5) - 1;
   VAR_14->log_mc_table_sz = VAR_18[VAR_20].log_num;
   VAR_14->mc_hash_sz = 1 << (VAR_18[VAR_20].log_num - 1);
   break;
  case 135:
   VAR_11->limits.num_mpts = VAR_18[VAR_20].num;
   VAR_11->mr_table.mpt_base = VAR_18[VAR_20].start;
   VAR_14->mpt_base = VAR_18[VAR_20].start;
   VAR_14->log_mpt_sz = VAR_18[VAR_20].log_num;
   break;
  case 134:
   VAR_11->limits.num_mtt_segs = VAR_18[VAR_20].num;
   VAR_11->mr_table.mtt_base = VAR_18[VAR_20].start;
   VAR_14->mtt_base = VAR_18[VAR_20].start;
   VAR_14->mtt_seg_sz = FUNC_0(VAR_11->limits.mtt_seg_size) - 7;
   break;
  case 130:
   VAR_11->limits.num_uars = VAR_18[VAR_20].num;
   VAR_14->uar_scratch_base = VAR_18[VAR_20].start;
   break;
  case 128:
   VAR_11->av_table.ddr_av_base = VAR_18[VAR_20].start;
   VAR_11->av_table.num_ddr_avs = VAR_18[VAR_20].num;
   break;
  case 129:
   VAR_11->uar_table.uarc_size = VAR_12->uarc_size;
   VAR_11->uar_table.uarc_base = VAR_18[VAR_20].start;
   VAR_14->uarc_base = VAR_18[VAR_20].start;
   VAR_14->log_uarc_sz = FUNC_0(VAR_12->uarc_size) - 13;
   VAR_14->log_uar_sz = FUNC_0(VAR_12->num_uar) - 1;
   break;
  default:
   break;
  }
 }





 VAR_11->limits.num_pds = VAR_7;

 if (VAR_11->mthca_flags & VAR_4 &&
     VAR_14->log_mpt_sz > 23) {
  FUNC_7(VAR_11, "MPT table too large (requested size 2^%d >= 2^24)\n",
      VAR_14->log_mpt_sz);
  FUNC_7(VAR_11, "Disabling memory key throughput optimization.\n");
  VAR_11->mthca_flags &= ~VAR_4;
 }
 if (FUNC_6(VAR_11) || VAR_0 == 64)
  VAR_11->limits.fmr_reserved_mtts = 0;
 else
  VAR_11->limits.fmr_reserved_mtts = VAR_12->fmr_reserved_mtts;

 FUNC_1(VAR_18);
 return VAR_17;
}
