
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int ,int *) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int ) ;

int FUNC_3(struct mlx4_dev *VAR_1, int VAR_2,
          struct mlx4_vhcr *VAR_3,
          struct mlx4_cmd_mailbox *VAR_4,
          struct mlx4_cmd_mailbox *VAR_5,
          struct mlx4_cmd_info *VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_3->in_modifier & 0xffff;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_8, VAR_0, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2(VAR_1, VAR_2, VAR_8, VAR_0);
 return VAR_7;
}
