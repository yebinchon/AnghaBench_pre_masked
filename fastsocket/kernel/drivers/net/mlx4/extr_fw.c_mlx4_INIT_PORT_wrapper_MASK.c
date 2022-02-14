
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mlx4_vhcr {int in_modifier; } ;
struct TYPE_9__ {int * init_port_ref; TYPE_3__* slave_state; TYPE_2__* qp0_state; } ;
struct TYPE_10__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_5__ mfunc; } ;
struct TYPE_6__ {scalar_t__* port_mask; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_8__ {int init_port_mask; } ;
struct TYPE_7__ {int port_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct mlx4_dev*,int,int) ;
 int FUNC_1 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;

int FUNC_4(struct mlx4_dev *VAR_4, int VAR_5,
      struct mlx4_vhcr *VAR_6,
      struct mlx4_cmd_mailbox *VAR_7,
      struct mlx4_cmd_mailbox *VAR_8,
      struct mlx4_cmd_info *VAR_9)
{
 struct mlx4_priv *VAR_10 = FUNC_3(VAR_4);
 int VAR_11 = VAR_6->in_modifier;
 int VAR_12;

 if (VAR_10->mfunc.master.slave_state[VAR_5].init_port_mask & (1 << VAR_11))
  return 0;

 if (VAR_4->caps.port_mask[VAR_11] != VAR_3) {

  if (!VAR_10->mfunc.master.init_port_ref[VAR_11]) {
   VAR_12 = FUNC_1(VAR_4, 0, VAR_11, 0, VAR_0,
           VAR_2, VAR_1);
   if (VAR_12)
    return VAR_12;
  }
  VAR_10->mfunc.master.slave_state[VAR_5].init_port_mask |= (1 << VAR_11);
 } else {
  if (VAR_5 == FUNC_2(VAR_4)) {
   if (FUNC_0(VAR_4, VAR_5, VAR_11) &&
       !VAR_10->mfunc.master.qp0_state[VAR_11].port_active) {
    VAR_12 = FUNC_1(VAR_4, 0, VAR_11, 0, VAR_0,
            VAR_2, VAR_1);
    if (VAR_12)
     return VAR_12;
    VAR_10->mfunc.master.qp0_state[VAR_11].port_active = 1;
    VAR_10->mfunc.master.slave_state[VAR_5].init_port_mask |= (1 << VAR_11);
   }
  } else
   VAR_10->mfunc.master.slave_state[VAR_5].init_port_mask |= (1 << VAR_11);
 }
 ++VAR_10->mfunc.master.init_port_ref[VAR_11];
 return 0;
}
