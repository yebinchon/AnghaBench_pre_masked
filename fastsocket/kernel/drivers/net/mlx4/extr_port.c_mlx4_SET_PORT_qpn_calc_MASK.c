
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_set_port_rqp_calc_context {int vlan_miss; scalar_t__ intra_vlan_miss; int no_vlan; scalar_t__ intra_no_vlan; void* mcast; void* promisc; int n_mac; void* base_qpn; } ;
struct TYPE_2__ {int flags; scalar_t__ steering_mode; int log_num_macs; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_port_rqp_calc_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct mlx4_set_port_rqp_calc_context*,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int,int,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_12, u8 VAR_13, u32 VAR_14,
      u8 VAR_15)
{
 struct mlx4_cmd_mailbox *VAR_16;
 struct mlx4_set_port_rqp_calc_context *VAR_17;
 int VAR_18;
 u32 VAR_19;
 u32 VAR_20 = (VAR_12->caps.flags & VAR_5) ?
  VAR_1 : VAR_0;

 if (VAR_12->caps.steering_mode != VAR_8)
  return 0;

 VAR_16 = FUNC_4(VAR_12);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);
 VAR_17 = VAR_16->buf;
 FUNC_3(VAR_17, 0, sizeof *VAR_17);

 VAR_17->base_qpn = FUNC_2(VAR_14);
 VAR_17->n_mac = VAR_12->caps.log_num_macs;
 VAR_17->promisc = FUNC_2(VAR_15 << VAR_11 |
           VAR_14);
 VAR_17->mcast = FUNC_2(VAR_20 << VAR_10 |
         VAR_14);
 VAR_17->intra_no_vlan = 0;
 VAR_17->no_vlan = VAR_6;
 VAR_17->intra_vlan_miss = 0;
 VAR_17->vlan_miss = VAR_9;

 VAR_19 = VAR_7 << 8 | VAR_13;
 VAR_18 = FUNC_5(VAR_12, VAR_16->dma, VAR_19, 1, VAR_2,
         VAR_3, VAR_4);

 FUNC_6(VAR_12, VAR_16);
 return VAR_18;
}
