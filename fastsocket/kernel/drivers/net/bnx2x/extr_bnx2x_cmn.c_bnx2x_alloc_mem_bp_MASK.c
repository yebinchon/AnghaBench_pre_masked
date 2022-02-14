
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msix_entry {int dummy; } ;
struct bnx2x_sp_objs {int dummy; } ;
struct bnx2x_ilt {int dummy; } ;
struct bnx2x_fp_txdata {int dummy; } ;
struct bnx2x_fp_stats {int dummy; } ;
struct bnx2x_fastpath {void* tpa_info; } ;
struct bnx2x_agg_info {int dummy; } ;
struct bnx2x {int igu_sb_cnt; int fp_array_size; struct bnx2x_ilt* ilt; struct msix_entry* msix_table; void* bnx2x_txq; void* fp_stats; void* sp_objs; struct bnx2x_fastpath* fp; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 void* FUNC_5 (int,int,int ) ;
 struct bnx2x_ilt* FUNC_6 (int,int ) ;

int FUNC_7(struct bnx2x *VAR_4)
{
 struct bnx2x_fastpath *VAR_5;
 struct msix_entry *VAR_6;
 struct bnx2x_ilt *VAR_7;
 int VAR_8 = 0;
 int VAR_9, VAR_10;
 int VAR_11;





 VAR_8 = VAR_4->igu_sb_cnt;
 if (FUNC_3(VAR_4))
  VAR_8++;
 FUNC_0("msix_table_size %d\n", VAR_8);


 VAR_9 = FUNC_1(VAR_4) + FUNC_2(VAR_4);
 VAR_4->fp_array_size = VAR_9;
 FUNC_0("fp_array_size %d\n", VAR_4->fp_array_size);

 VAR_5 = FUNC_5(VAR_4->fp_array_size, sizeof(*VAR_5), VAR_3);
 if (!VAR_5)
  goto alloc_err;
 for (VAR_11 = 0; VAR_11 < VAR_4->fp_array_size; VAR_11++) {
  VAR_5[VAR_11].tpa_info =
   FUNC_5(VAR_2,
    sizeof(struct bnx2x_agg_info), VAR_3);
  if (!(VAR_5[VAR_11].tpa_info))
   goto alloc_err;
 }

 VAR_4->fp = VAR_5;


 VAR_4->sp_objs = FUNC_5(VAR_4->fp_array_size, sizeof(struct bnx2x_sp_objs),
         VAR_3);
 if (!VAR_4->sp_objs)
  goto alloc_err;


 VAR_4->fp_stats = FUNC_5(VAR_4->fp_array_size, sizeof(struct bnx2x_fp_stats),
          VAR_3);
 if (!VAR_4->fp_stats)
  goto alloc_err;


 VAR_10 =
  FUNC_1(VAR_4) * VAR_0 + FUNC_2(VAR_4);
 FUNC_0("txq_array_size %d", VAR_10);

 VAR_4->bnx2x_txq = FUNC_5(VAR_10, sizeof(struct bnx2x_fp_txdata),
    VAR_3);
 if (!VAR_4->bnx2x_txq)
  goto alloc_err;


 VAR_6 = FUNC_5(VAR_8, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  goto alloc_err;
 VAR_4->msix_table = VAR_6;


 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  goto alloc_err;
 VAR_4->ilt = VAR_7;

 return 0;
alloc_err:
 FUNC_4(VAR_4);
 return -VAR_1;
}
