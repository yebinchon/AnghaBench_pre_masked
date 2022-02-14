
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int res_id; } ;
struct res_mtt {TYPE_2__ com; int ref_count; } ;
struct res_eq {struct res_mtt* mtt; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_eq_context {int dummy; } ;
struct TYPE_3__ {int mtt_entry_sz; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {struct mlx4_eq_context* buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int,struct res_mtt*) ;
 int FUNC_3 (struct mlx4_eq_context*) ;
 int FUNC_4 (struct mlx4_eq_context*) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int ,struct res_eq**) ;
 int FUNC_6 (struct mlx4_dev*,int,int,int ,struct res_mtt**) ;
 int FUNC_7 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_8 (struct mlx4_dev*,int,int ,int ) ;
 int FUNC_9 (struct mlx4_dev*,int,int,int,int ,int ) ;
 int FUNC_10 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_11 (struct mlx4_dev*,int,int ,int) ;

int FUNC_12(struct mlx4_dev *VAR_3, int VAR_4,
     struct mlx4_vhcr *VAR_5,
     struct mlx4_cmd_mailbox *VAR_6,
     struct mlx4_cmd_mailbox *VAR_7,
     struct mlx4_cmd_info *VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_5->in_modifier;
 int VAR_11 = (VAR_4 << 8) | VAR_10;
 struct mlx4_eq_context *VAR_12 = VAR_6->buf;
 int VAR_13 = FUNC_3(VAR_12) / VAR_3->caps.mtt_entry_sz;
 int VAR_14 = FUNC_4(VAR_12);
 struct res_eq *VAR_15;
 struct res_mtt *VAR_16;

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_11, 1, VAR_0, 0);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_11, VAR_1, &VAR_15);
 if (VAR_9)
  goto out_add;

 VAR_9 = FUNC_6(VAR_3, VAR_4, VAR_13, VAR_2, &VAR_16);
 if (VAR_9)
  goto out_move;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_13, VAR_14, VAR_16);
 if (VAR_9)
  goto out_put;

 VAR_9 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  goto out_put;

 FUNC_1(&VAR_16->ref_count);
 VAR_15->mtt = VAR_16;
 FUNC_8(VAR_3, VAR_4, VAR_16->com.res_id, VAR_2);
 FUNC_11(VAR_3, VAR_4, VAR_0, VAR_11);
 return 0;

out_put:
 FUNC_8(VAR_3, VAR_4, VAR_16->com.res_id, VAR_2);
out_move:
 FUNC_10(VAR_3, VAR_4, VAR_0, VAR_11);
out_add:
 FUNC_9(VAR_3, VAR_4, VAR_11, 1, VAR_0, 0);
 return VAR_9;
}
