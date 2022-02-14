
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct res_srq {TYPE_2__* cq; TYPE_1__* mtt; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_4__ {int ref_count; } ;
struct TYPE_3__ {int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_2 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_3 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_4 (struct mlx4_dev*,int,int,int ,struct res_srq**) ;

int FUNC_5(struct mlx4_dev *VAR_2, int VAR_3,
      struct mlx4_vhcr *VAR_4,
      struct mlx4_cmd_mailbox *VAR_5,
      struct mlx4_cmd_mailbox *VAR_6,
      struct mlx4_cmd_info *VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_4->in_modifier;
 struct res_srq *VAR_10;

 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_9, VAR_1, &VAR_10);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  goto ex_abort;
 FUNC_0(&VAR_10->mtt->ref_count);
 if (VAR_10->cq)
  FUNC_0(&VAR_10->cq->ref_count);
 FUNC_3(VAR_2, VAR_3, VAR_0, VAR_9);

 return 0;

ex_abort:
 FUNC_2(VAR_2, VAR_3, VAR_0, VAR_9);

 return VAR_8;
}
