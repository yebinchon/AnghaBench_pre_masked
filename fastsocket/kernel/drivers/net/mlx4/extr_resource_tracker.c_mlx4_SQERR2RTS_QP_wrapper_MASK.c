
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_vhcr {int dummy; } ;
struct mlx4_qp_context {int dummy; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {struct mlx4_qp_context* buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,struct mlx4_vhcr*,struct mlx4_qp_context*) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;

int FUNC_2(struct mlx4_dev *VAR_0, int VAR_1,
         struct mlx4_vhcr *VAR_2,
         struct mlx4_cmd_mailbox *VAR_3,
         struct mlx4_cmd_mailbox *VAR_4,
         struct mlx4_cmd_info *VAR_5)
{
 struct mlx4_qp_context *VAR_6 = VAR_3->buf + 8;
 FUNC_0(VAR_0, VAR_2, VAR_6);
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
