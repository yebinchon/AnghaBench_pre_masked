
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct res_srq {struct res_mtt* mtt; } ;
struct TYPE_4__ {int res_id; } ;
struct res_mtt {TYPE_2__ com; int ref_count; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_srq_context {int state_logsize_srqn; } ;
struct TYPE_3__ {int mtt_entry_sz; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {struct mlx4_srq_context* buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int ,struct res_mtt*) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int ,struct res_mtt**) ;
 int FUNC_4 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_5 (struct mlx4_dev*,int,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_7 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_8 (struct mlx4_srq_context*) ;
 int FUNC_9 (struct mlx4_srq_context*) ;
 int FUNC_10 (struct mlx4_dev*,int,int,int ,struct res_srq**) ;

int FUNC_11(struct mlx4_dev *VAR_4, int VAR_5,
      struct mlx4_vhcr *VAR_6,
      struct mlx4_cmd_mailbox *VAR_7,
      struct mlx4_cmd_mailbox *VAR_8,
      struct mlx4_cmd_info *VAR_9)
{
 int VAR_10;
 int VAR_11 = VAR_6->in_modifier;
 struct res_mtt *VAR_12;
 struct res_srq *VAR_13;
 struct mlx4_srq_context *VAR_14 = VAR_7->buf;
 int VAR_15 = FUNC_8(VAR_14) / VAR_4->caps.mtt_entry_sz;

 if (VAR_11 != (FUNC_1(VAR_14->state_logsize_srqn) & 0xffffff))
  return -VAR_0;

 VAR_10 = FUNC_10(VAR_4, VAR_5, VAR_11, VAR_3, &VAR_13);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_15, VAR_1, &VAR_12);
 if (VAR_10)
  goto ex_abort;
 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_15, FUNC_9(VAR_14),
         VAR_12);
 if (VAR_10)
  goto ex_put_mtt;

 VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_10)
  goto ex_put_mtt;

 FUNC_0(&VAR_12->ref_count);
 VAR_13->mtt = VAR_12;
 FUNC_5(VAR_4, VAR_5, VAR_12->com.res_id, VAR_1);
 FUNC_7(VAR_4, VAR_5, VAR_2, VAR_11);
 return 0;

ex_put_mtt:
 FUNC_5(VAR_4, VAR_5, VAR_12->com.res_id, VAR_1);
ex_abort:
 FUNC_6(VAR_4, VAR_5, VAR_2, VAR_11);

 return VAR_10;
}
