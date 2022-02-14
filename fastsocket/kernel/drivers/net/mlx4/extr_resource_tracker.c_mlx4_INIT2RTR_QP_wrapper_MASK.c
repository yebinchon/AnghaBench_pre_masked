
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ from_state; } ;
struct res_qp {int sched_queue; TYPE_2__ com; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct TYPE_3__ {int sched_queue; } ;
struct mlx4_qp_context {TYPE_1__ pri_path; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {struct mlx4_qp_context* buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_vhcr*,struct mlx4_qp_context*) ;
 int FUNC_1 (struct mlx4_dev*,int,int,int ,struct res_qp**) ;
 int FUNC_2 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int ) ;
 int FUNC_4 (struct mlx4_dev*,struct mlx4_cmd_mailbox*,int ) ;
 int FUNC_5 (struct mlx4_dev*,int,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*,int,int) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_cmd_mailbox*,int ,int) ;

int FUNC_8(struct mlx4_dev *VAR_4, int VAR_5,
        struct mlx4_vhcr *VAR_6,
        struct mlx4_cmd_mailbox *VAR_7,
        struct mlx4_cmd_mailbox *VAR_8,
        struct mlx4_cmd_info *VAR_9)
{
 int VAR_10;
 struct mlx4_qp_context *VAR_11 = VAR_7->buf + 8;
 int VAR_12 = VAR_6->in_modifier & 0x7fffff;
 struct res_qp *VAR_13;
 u8 VAR_14;

 VAR_10 = FUNC_7(VAR_4, VAR_7, VAR_1, VAR_5);
 if (VAR_10)
  return VAR_10;

 FUNC_5(VAR_4, VAR_5, VAR_7);
 FUNC_4(VAR_4, VAR_7, (u8)VAR_5);
 FUNC_0(VAR_4, VAR_6, VAR_11);
 VAR_14 = VAR_11->pri_path.sched_queue;
 VAR_10 = FUNC_6(VAR_4, VAR_7, VAR_5, VAR_12);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_12, VAR_2, &VAR_13);
 if (VAR_10)
  return VAR_10;
 if (VAR_13->com.from_state != VAR_3) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
out:




 if (!VAR_10)
  VAR_13->sched_queue = VAR_14;

 FUNC_3(VAR_4, VAR_5, VAR_12, VAR_2);
 return VAR_10;
}
