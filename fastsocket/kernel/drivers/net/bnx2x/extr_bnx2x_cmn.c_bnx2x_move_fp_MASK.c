
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_sp_objs {int index; struct bnx2x_sp_objs** txdata_ptr; struct bnx2x_agg_info* tpa_info; int napi; } ;
struct bnx2x_fp_txdata {int dummy; } ;
struct bnx2x_fp_stats {int index; struct bnx2x_fp_stats** txdata_ptr; struct bnx2x_agg_info* tpa_info; int napi; } ;
struct bnx2x_fastpath {int index; struct bnx2x_fastpath** txdata_ptr; struct bnx2x_agg_info* tpa_info; int napi; } ;
struct bnx2x_agg_info {int dummy; } ;
struct bnx2x {int max_cos; struct bnx2x_sp_objs* bnx2x_txq; struct bnx2x_sp_objs* fp_stats; struct bnx2x_sp_objs* sp_objs; struct bnx2x_sp_objs* fp; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x_sp_objs*,struct bnx2x_sp_objs*,int) ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_1, int VAR_2, int VAR_3)
{
 struct bnx2x_fastpath *VAR_4 = &VAR_1->fp[VAR_2];
 struct bnx2x_fastpath *VAR_5 = &VAR_1->fp[VAR_3];
 struct bnx2x_sp_objs *VAR_6 = &VAR_1->sp_objs[VAR_2];
 struct bnx2x_sp_objs *VAR_7 = &VAR_1->sp_objs[VAR_3];
 struct bnx2x_fp_stats *VAR_8 = &VAR_1->fp_stats[VAR_2];
 struct bnx2x_fp_stats *VAR_9 = &VAR_1->fp_stats[VAR_3];
 int VAR_10, VAR_11;
 int VAR_12 = 0, VAR_13 = 0;
 struct bnx2x_agg_info *VAR_14 = VAR_5->tpa_info;


 VAR_4->napi = VAR_5->napi;


 FUNC_2(VAR_5, VAR_4, sizeof(*VAR_5));
 VAR_5->index = VAR_3;




 VAR_5->tpa_info = VAR_14;


 FUNC_2(VAR_7, VAR_6, sizeof(*VAR_7));


 FUNC_2(VAR_9, VAR_8, sizeof(*VAR_9));






 VAR_10 = FUNC_0(VAR_1) * (VAR_1)->max_cos;
 VAR_11 = (FUNC_0(VAR_1) - VAR_2 + VAR_3) *
    (VAR_1)->max_cos;
 if (VAR_2 == FUNC_1(VAR_1)) {
  VAR_12 = VAR_10 + VAR_0;
  VAR_13 = VAR_11 + VAR_0;
 }

 FUNC_2(&VAR_1->bnx2x_txq[VAR_13],
        &VAR_1->bnx2x_txq[VAR_12],
        sizeof(struct bnx2x_fp_txdata));
 VAR_5->txdata_ptr[0] = &VAR_1->bnx2x_txq[VAR_13];
}
