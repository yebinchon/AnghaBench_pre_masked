
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_vhcr {int in_param; int in_modifier; scalar_t__ op_modifier; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int) ;

int FUNC_3(struct mlx4_dev *VAR_1, int VAR_2,
    struct mlx4_vhcr *VAR_3,
    struct mlx4_cmd_mailbox *VAR_4,
    struct mlx4_cmd_mailbox *VAR_5,
    struct mlx4_cmd_info *VAR_6)
{
 u32 VAR_7 = (u32) VAR_3->in_param & 0xffffffff;
 u8 VAR_8 = VAR_3->in_param >> 62;
 enum mlx4_steer_type VAR_9 = VAR_3->in_modifier;


 if (FUNC_1(VAR_1) && VAR_9 == VAR_0)
  return 0;

 if (VAR_3->op_modifier)
  return FUNC_0(VAR_1, VAR_8, VAR_9, VAR_7);
 else
  return FUNC_2(VAR_1, VAR_8, VAR_9, VAR_7);
}
