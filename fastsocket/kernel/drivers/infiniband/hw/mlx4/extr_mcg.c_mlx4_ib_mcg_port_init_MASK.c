
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_demux_ctx {int port; scalar_t__ flushing; int mcg_mgid0_list; int mcg_table; int mcg_table_lock; int mcg_wq; int tid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

int FUNC_5(struct mlx4_ib_demux_ctx *VAR_2)
{
 char VAR_3[20];

 FUNC_1(&VAR_2->tid, 0);
 FUNC_4(VAR_3, "mlx4_ib_mcg%d", VAR_2->port);
 VAR_2->mcg_wq = FUNC_2(VAR_3);
 if (!VAR_2->mcg_wq)
  return -VAR_0;

 FUNC_3(&VAR_2->mcg_table_lock);
 VAR_2->mcg_table = VAR_1;
 FUNC_0(&VAR_2->mcg_mgid0_list);
 VAR_2->flushing = 0;

 return 0;
}
