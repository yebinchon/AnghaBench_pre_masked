
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_vhcr {int in_modifier; } ;
struct TYPE_2__ {int function; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,int,int ,struct mlx4_cmd_mailbox*) ;

int FUNC_1(struct mlx4_dev *VAR_0, int VAR_1,
    struct mlx4_vhcr *VAR_2,
    struct mlx4_cmd_mailbox *VAR_3,
    struct mlx4_cmd_mailbox *VAR_4,
    struct mlx4_cmd_info *VAR_5)
{
 if (VAR_1 != VAR_0->caps.function)
  return 0;
 return FUNC_0(VAR_0, VAR_1,
       VAR_2->in_modifier, VAR_4);
}
