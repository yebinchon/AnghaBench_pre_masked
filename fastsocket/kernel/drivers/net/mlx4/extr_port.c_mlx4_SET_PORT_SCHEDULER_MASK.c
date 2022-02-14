
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_set_port_scheduler_context {struct mlx4_port_scheduler_tc_cfg_be* tc; } ;
struct mlx4_port_scheduler_tc_cfg_be {void* max_bw_value; void* max_bw_units; void* bw_precentage; void* pg; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_port_scheduler_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct mlx4_set_port_scheduler_context*,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int,int,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_7, u8 VAR_8, u8 *VAR_9,
  u8 *VAR_10, u16 *VAR_11)
{
 struct mlx4_cmd_mailbox *VAR_12;
 struct mlx4_set_port_scheduler_context *VAR_13;
 int VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_12 = FUNC_4(VAR_7);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);
 VAR_13 = VAR_12->buf;
 FUNC_3(VAR_13, 0, sizeof *VAR_13);

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  struct mlx4_port_scheduler_tc_cfg_be *VAR_17 = &VAR_13->tc[VAR_16];
  u16 VAR_18 = VAR_11 && VAR_11[VAR_16] ? VAR_11[VAR_16] :
   VAR_4;

  VAR_17->pg = FUNC_2(VAR_10[VAR_16]);
  VAR_17->bw_precentage = FUNC_2(VAR_9[VAR_16]);

  VAR_17->max_bw_units = FUNC_2(VAR_5);
  VAR_17->max_bw_value = FUNC_2(VAR_18);
 }

 VAR_15 = VAR_6 << 8 | VAR_8;
 VAR_14 = FUNC_5(VAR_7, VAR_12->dma, VAR_15, 1, VAR_1,
         VAR_2, VAR_0);

 FUNC_6(VAR_7, VAR_12);
 return VAR_14;
}
