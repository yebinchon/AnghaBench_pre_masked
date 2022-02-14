
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct res_qp {int ref_count; } ;
struct mlx4_vhcr {int in_modifier; int out_param; } ;
struct mlx4_resource_tracker {TYPE_3__* slave_list; } ;
struct TYPE_5__ {struct mlx4_resource_tracker res_tracker; } ;
struct TYPE_6__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_net_trans_rule_hw_eth {int dummy; } ;
struct mlx4_net_trans_rule_hw_ctrl {int qpn; } ;
struct TYPE_8__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_4__ caps; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
struct mlx4_cmd_info {int dummy; } ;
struct list_head {int dummy; } ;
struct _rule_hw {int id; } ;
struct TYPE_7__ {struct list_head* res_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mlx4_dev*,int,struct mlx4_cmd_mailbox*,struct list_head*,int) ;
 int FUNC_1 (struct mlx4_dev*,int,int ,int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int ,struct res_qp**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,int ) ;
 int FUNC_9 (struct mlx4_dev*,char*) ;
 struct mlx4_priv* FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct mlx4_dev*,int,int,int ) ;
 int FUNC_14 (int,struct _rule_hw*,struct list_head*) ;

int FUNC_15(struct mlx4_dev *VAR_10, int VAR_11,
      struct mlx4_vhcr *VAR_12,
      struct mlx4_cmd_mailbox *VAR_13,
      struct mlx4_cmd_mailbox *VAR_14,
      struct mlx4_cmd_info *VAR_15)
{

 struct mlx4_priv *VAR_16 = FUNC_10(VAR_10);
 struct mlx4_resource_tracker *VAR_17 = &VAR_16->mfunc.master.res_tracker;
 struct list_head *VAR_18 = &VAR_17->slave_list[VAR_11].res_list[VAR_8];
 int VAR_19;
 int VAR_20;
 struct res_qp *VAR_21;
 struct mlx4_net_trans_rule_hw_ctrl *VAR_22;
 struct _rule_hw *VAR_23;
 int VAR_24;

 if (VAR_10->caps.steering_mode !=
     VAR_6)
  return -VAR_1;

 VAR_22 = (struct mlx4_net_trans_rule_hw_ctrl *)VAR_13->buf;
 VAR_20 = FUNC_4(VAR_22->qpn) & 0xffffff;
 VAR_19 = FUNC_5(VAR_10, VAR_11, VAR_20, VAR_9, &VAR_21);
 if (VAR_19) {
  FUNC_11("Steering rule with qpn 0x%x rejected.\n", VAR_20);
  return VAR_19;
 }
 VAR_23 = (struct _rule_hw *)(VAR_22 + 1);
 VAR_24 = FUNC_6(FUNC_3(VAR_23->id));

 switch (VAR_24) {
 case 132:
  if (FUNC_14(VAR_11, VAR_23, VAR_18)) {
   VAR_19 = -VAR_0;
   goto err_put;
  }
  break;
 case 131:
  break;
 case 130:
 case 129:
 case 128:
  FUNC_12("Can't attach FS rule without L2 headers, adding L2 header.\n");
  if (FUNC_0(VAR_10, VAR_11, VAR_13, VAR_18, VAR_24)) {
   VAR_19 = -VAR_0;
   goto err_put;
  }
  VAR_12->in_modifier +=
   sizeof(struct mlx4_net_trans_rule_hw_eth) >> 2;
  break;
 default:
  FUNC_11("Corrupted mailbox.\n");
  VAR_19 = -VAR_0;
  goto err_put;
 }

 VAR_19 = FUNC_8(VAR_10, VAR_13->dma, &VAR_12->out_param,
      VAR_12->in_modifier, 0,
      VAR_4, VAR_3,
      VAR_2);
 if (VAR_19)
  goto err_put;

 VAR_19 = FUNC_1(VAR_10, VAR_11, VAR_12->out_param, 1, VAR_7, VAR_20);
 if (VAR_19) {
  FUNC_9(VAR_10, "Fail to add flow steering resources.\n ");

  FUNC_7(VAR_10, VAR_12->out_param, 0, 0,
    VAR_5, VAR_3,
    VAR_2);
  goto err_put;
 }
 FUNC_2(&VAR_21->ref_count);
err_put:
 FUNC_13(VAR_10, VAR_11, VAR_20, VAR_9);
 return VAR_19;
}
