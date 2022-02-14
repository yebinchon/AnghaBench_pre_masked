
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u16 ;
struct TYPE_2__ {size_t token_mask; struct mlx4_cmd_context* context; } ;
struct mlx4_priv {TYPE_1__ cmd; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_context {size_t token; int done; int out_param; int result; int fw_status; } ;


 int FUNC_0 (int *) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mlx4_dev *VAR_0, u16 VAR_1, u8 VAR_2, u64 VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_1(VAR_0);
 struct mlx4_cmd_context *VAR_5 =
  &VAR_4->cmd.context[VAR_1 & VAR_4->cmd.token_mask];


 if (VAR_1 != VAR_5->token)
  return;

 VAR_5->fw_status = VAR_2;
 VAR_5->result = FUNC_2(VAR_2);
 VAR_5->out_param = VAR_3;

 FUNC_0(&VAR_5->done);
}
