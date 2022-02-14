
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_mod_stat_cfg {int log_pg_sz_m; int log_pg_sz; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int * buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int FUNC_3 (int *,int ,int ) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_6, struct mlx4_mod_stat_cfg *VAR_7)
{
 struct mlx4_cmd_mailbox *VAR_8;
 u32 *VAR_9;
 int VAR_10 = 0;






 VAR_8 = FUNC_4(VAR_6);
 if (FUNC_0(VAR_8))
  return FUNC_2(VAR_8);
 VAR_9 = VAR_8->buf;

 FUNC_3(VAR_9, 0, 0x100);

 FUNC_1(VAR_9, VAR_7->log_pg_sz, 0x003);
 FUNC_1(VAR_9, VAR_7->log_pg_sz_m, 0x002);

 VAR_10 = FUNC_5(VAR_6, VAR_8->dma, 0, 0, VAR_0,
   VAR_2, VAR_1);

 FUNC_6(VAR_6, VAR_8);
 return VAR_10;
}
