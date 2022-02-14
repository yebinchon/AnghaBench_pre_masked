
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
struct TYPE_9__ {int* init_port_ref; TYPE_3__* slave_state; TYPE_2__* qp0_state; } ;
struct TYPE_10__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_5__ mfunc; } ;
struct TYPE_6__ {scalar_t__* port_mask; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_8__ {int init_port_mask; } ;
struct TYPE_7__ {scalar_t__ port_active; int qp0_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int ,int,int ,int ,int,int ) ;
 int FUNC_1 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;

int FUNC_3(struct mlx4_dev *VAR_3, int VAR_4,
       struct mlx4_vhcr *VAR_5,
       struct mlx4_cmd_mailbox *VAR_6,
       struct mlx4_cmd_mailbox *VAR_7,
       struct mlx4_cmd_info *VAR_8)
{
 struct mlx4_priv *VAR_9 = FUNC_2(VAR_3);
 int VAR_10 = VAR_5->in_modifier;
 int VAR_11;

 if (!(VAR_9->mfunc.master.slave_state[VAR_4].init_port_mask &
     (1 << VAR_10)))
  return 0;

 if (VAR_3->caps.port_mask[VAR_10] != VAR_2) {
  if (VAR_9->mfunc.master.init_port_ref[VAR_10] == 1) {
   VAR_11 = FUNC_0(VAR_3, 0, VAR_10, 0, VAR_0,
           1000, VAR_1);
   if (VAR_11)
    return VAR_11;
  }
  VAR_9->mfunc.master.slave_state[VAR_4].init_port_mask &= ~(1 << VAR_10);
 } else {

  if (VAR_4 == FUNC_1(VAR_3)) {
   if (!VAR_9->mfunc.master.qp0_state[VAR_10].qp0_active &&
       VAR_9->mfunc.master.qp0_state[VAR_10].port_active) {
    VAR_11 = FUNC_0(VAR_3, 0, VAR_10, 0, VAR_0,
            1000, VAR_1);
    if (VAR_11)
     return VAR_11;
    VAR_9->mfunc.master.slave_state[VAR_4].init_port_mask &= ~(1 << VAR_10);
    VAR_9->mfunc.master.qp0_state[VAR_10].port_active = 0;
   }
  } else
   VAR_9->mfunc.master.slave_state[VAR_4].init_port_mask &= ~(1 << VAR_10);
 }
 --VAR_9->mfunc.master.init_port_ref[VAR_10];
 return 0;
}
