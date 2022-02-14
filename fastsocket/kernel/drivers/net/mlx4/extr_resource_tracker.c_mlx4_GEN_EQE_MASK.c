
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {scalar_t__ from_state; } ;
struct res_eq {TYPE_2__ com; } ;
struct mlx4_slave_event_eq_info {int eqn; int token; } ;
struct TYPE_11__ {int * gen_eqe_mutex; TYPE_1__* slave_state; } ;
struct TYPE_12__ {TYPE_5__ master; } ;
struct mlx4_priv {TYPE_6__ mfunc; } ;
struct TYPE_9__ {int token; } ;
struct TYPE_10__ {TYPE_3__ cmd; } ;
struct mlx4_eqe {size_t type; TYPE_4__ event; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int buf; } ;
struct TYPE_7__ {struct mlx4_slave_event_eq_info* event_eq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int ,struct res_eq**) ;
 int FUNC_4 (int ,int *,int) ;
 struct mlx4_cmd_mailbox* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 struct mlx4_priv* FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct mlx4_dev*,int,int,int ) ;

int FUNC_12(struct mlx4_dev *VAR_7, int VAR_8, struct mlx4_eqe *VAR_9)
{
 struct mlx4_priv *VAR_10 = FUNC_8(VAR_7);
 struct mlx4_slave_event_eq_info *VAR_11;
 struct mlx4_cmd_mailbox *VAR_12;
 u32 VAR_13 = 0;
 int VAR_14;
 int VAR_15;
 struct res_eq *VAR_16;

 if (!VAR_10->mfunc.master.slave_state)
  return -VAR_0;

 VAR_11 = &VAR_10->mfunc.master.slave_state[VAR_8].event_eq[VAR_9->type];


 if (VAR_11->eqn < 0)
  return 0;

 FUNC_9(&VAR_10->mfunc.master.gen_eqe_mutex[VAR_8]);
 VAR_15 = (VAR_8 << 8) | VAR_11->eqn;
 VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_15, VAR_5, &VAR_16);
 if (VAR_14)
  goto unlock;

 if (VAR_16->com.from_state != VAR_6) {
  VAR_14 = -VAR_0;
  goto put;
 }

 VAR_12 = FUNC_5(VAR_7);
 if (FUNC_0(VAR_12)) {
  VAR_14 = FUNC_1(VAR_12);
  goto put;
 }

 if (VAR_9->type == VAR_4) {
  ++VAR_11->token;
  VAR_9->event.cmd.token = FUNC_2(VAR_11->token);
 }

 FUNC_4(VAR_12->buf, (u8 *) VAR_9, 28);

 VAR_13 = (VAR_8 & 0xff) | ((VAR_11->eqn & 0xff) << 16);

 VAR_14 = FUNC_6(VAR_7, VAR_12->dma, VAR_13, 0,
         VAR_1, VAR_3,
         VAR_2);

 FUNC_11(VAR_7, VAR_8, VAR_15, VAR_5);
 FUNC_10(&VAR_10->mfunc.master.gen_eqe_mutex[VAR_8]);
 FUNC_7(VAR_7, VAR_12);
 return VAR_14;

put:
 FUNC_11(VAR_7, VAR_8, VAR_15, VAR_5);

unlock:
 FUNC_10(&VAR_10->mfunc.master.gen_eqe_mutex[VAR_8]);
 return VAR_14;
}
