
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct res_qp {int qpn; int ref_count; } ;
struct res_fs_rule {int qpn; int ref_count; } ;
struct mlx4_vhcr {int in_param; } ;
struct TYPE_2__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int,int ,int ,struct res_qp**) ;
 int FUNC_2 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct mlx4_dev*,char*) ;
 int FUNC_4 (struct mlx4_dev*,int,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,int,int ,int,int ,int ) ;

int FUNC_6(struct mlx4_dev *VAR_7, int VAR_8,
      struct mlx4_vhcr *VAR_9,
      struct mlx4_cmd_mailbox *VAR_10,
      struct mlx4_cmd_mailbox *VAR_11,
      struct mlx4_cmd_info *VAR_12)
{
 int VAR_13;
 struct res_qp *VAR_14;
 struct res_fs_rule *VAR_15;

 if (VAR_7->caps.steering_mode !=
     VAR_4)
  return -VAR_0;

 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9->in_param, VAR_5, &VAR_15);
 if (VAR_13)
  return VAR_13;

 FUNC_4(VAR_7, VAR_8, VAR_9->in_param, VAR_5);
 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_15->qpn, VAR_6, &VAR_14);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_5(VAR_7, VAR_8, VAR_9->in_param, 1, VAR_5, 0);
 if (VAR_13) {
  FUNC_3(VAR_7, "Fail to remove flow steering resources.\n ");
  goto out;
 }

 VAR_13 = FUNC_2(VAR_7, VAR_9->in_param, 0, 0,
         VAR_3, VAR_2,
         VAR_1);
 if (!VAR_13)
  FUNC_0(&VAR_14->ref_count);
out:
 FUNC_4(VAR_7, VAR_8, VAR_15->qpn, VAR_6);
 return VAR_13;
}
