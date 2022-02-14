
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int mtu; } ;
struct mlx4_ib_iboe {int lock; struct net_device** netdevs; } ;
struct mlx4_ib_dev {TYPE_2__* dev; struct mlx4_ib_iboe iboe; } ;
struct mlx4_cmd_mailbox {scalar_t__ buf; int dma; } ;
struct ib_port_attr {int pkey_tbl_len; int max_vl_num; void* state; void* phys_state; int max_mtu; void* active_mtu; int max_msg_sz; int gid_tbl_len; int port_cap_flags; int active_speed; int active_width; } ;
struct ib_device {int dummy; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;
struct TYPE_5__ {int max_msg_sz; int * gid_table_len; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (void*) ;
 struct mlx4_ib_dev* FUNC_12 (struct ib_device*) ;

__attribute__((used)) static int FUNC_13(struct ib_device *VAR_11, u8 VAR_12,
          struct ib_port_attr *VAR_13, int VAR_14)
{

 struct mlx4_ib_dev *VAR_15 = FUNC_12(VAR_11);
 struct mlx4_ib_iboe *VAR_16 = &VAR_15->iboe;
 struct net_device *VAR_17;
 enum ib_mtu VAR_18;
 struct mlx4_cmd_mailbox *VAR_19;
 int VAR_20 = 0;

 VAR_19 = FUNC_4(VAR_15->dev);
 if (FUNC_0(VAR_19))
  return FUNC_1(VAR_19);

 VAR_20 = FUNC_5(VAR_15->dev, 0, VAR_19->dma, VAR_12, 0,
      VAR_8, VAR_9,
      VAR_10);
 if (VAR_20)
  goto out;

 VAR_13->active_width = (((u8 *)VAR_19->buf)[5] == 0x40) ?
      VAR_7 : VAR_6;
 VAR_13->active_speed = VAR_5;
 VAR_13->port_cap_flags = VAR_3;
 VAR_13->gid_tbl_len = VAR_15->dev->caps.gid_table_len[VAR_12];
 VAR_13->max_msg_sz = VAR_15->dev->caps.max_msg_sz;
 VAR_13->pkey_tbl_len = 1;
 VAR_13->max_mtu = VAR_1;
 VAR_13->max_vl_num = 2;
 VAR_13->state = VAR_4;
 VAR_13->phys_state = FUNC_11(VAR_13->state);
 VAR_13->active_mtu = VAR_0;
 FUNC_9(&VAR_16->lock);
 VAR_17 = VAR_16->netdevs[VAR_12 - 1];
 if (!VAR_17)
  goto out_unlock;

 VAR_18 = FUNC_2(VAR_17->mtu);
 VAR_13->active_mtu = VAR_18 ? FUNC_3(VAR_13->max_mtu, VAR_18) : VAR_0;

 VAR_13->state = (FUNC_8(VAR_17) && FUNC_7(VAR_17)) ?
     VAR_2 : VAR_4;
 VAR_13->phys_state = FUNC_11(VAR_13->state);
out_unlock:
 FUNC_10(&VAR_16->lock);
out:
 FUNC_6(VAR_15->dev, VAR_19);
 return VAR_20;
}
