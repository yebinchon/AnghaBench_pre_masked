
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int res_id; } ;
struct res_mtt {TYPE_2__ com; int ref_count; } ;
struct res_cq {struct res_mtt* mtt; } ;
struct mlx4_vhcr {int dummy; } ;
struct TYPE_3__ {int mtt_entry_sz; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cq_context {int dummy; } ;
struct mlx4_cmd_mailbox {struct mlx4_cq_context* buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int ,struct res_mtt*) ;
 int FUNC_3 (struct mlx4_cq_context*) ;
 int FUNC_4 (struct mlx4_cq_context*) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int ,struct res_mtt**) ;
 int FUNC_6 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_7 (struct mlx4_dev*,int,int,int ) ;

__attribute__((used)) static int FUNC_8(struct mlx4_dev *VAR_2, int VAR_3,
    struct mlx4_vhcr *VAR_4,
    struct mlx4_cmd_mailbox *VAR_5,
    struct mlx4_cmd_mailbox *VAR_6,
    struct mlx4_cmd_info *VAR_7,
    struct res_cq *VAR_8)
{
 int VAR_9;
 struct res_mtt *VAR_10;
 struct res_mtt *VAR_11;
 struct mlx4_cq_context *VAR_12 = VAR_5->buf;
 int VAR_13 = FUNC_3(VAR_12) / VAR_2->caps.mtt_entry_sz;

 VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_8->mtt->com.res_id, VAR_1, &VAR_10);
 if (VAR_9)
  return VAR_9;

 if (VAR_10 != VAR_8->mtt) {
  VAR_9 = -VAR_0;
  goto ex_put;
 }

 VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_13, VAR_1, &VAR_11);
 if (VAR_9)
  goto ex_put;

 VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_13, FUNC_4(VAR_12), VAR_11);
 if (VAR_9)
  goto ex_put1;
 VAR_9 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  goto ex_put1;
 FUNC_0(&VAR_10->ref_count);
 FUNC_7(VAR_2, VAR_3, VAR_10->com.res_id, VAR_1);
 FUNC_1(&VAR_11->ref_count);
 VAR_8->mtt = VAR_11;
 FUNC_7(VAR_2, VAR_3, VAR_11->com.res_id, VAR_1);
 return 0;

ex_put1:
 FUNC_7(VAR_2, VAR_3, VAR_11->com.res_id, VAR_1);
ex_put:
 FUNC_7(VAR_2, VAR_3, VAR_10->com.res_id, VAR_1);

 return VAR_9;

}
