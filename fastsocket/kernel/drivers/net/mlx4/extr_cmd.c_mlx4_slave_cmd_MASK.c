
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_vhcr_cmd {int flags; void* status; void* out_param; void* token; void* opcode; int in_modifier; void* in_param; } ;
struct TYPE_6__ {int slave_cmd_mutex; int use_events; } ;
struct TYPE_4__ {struct mlx4_vhcr_cmd* vhcr; } ;
struct mlx4_priv {TYPE_3__ cmd; TYPE_1__ mfunc; } ;
struct TYPE_5__ {int function; } ;
struct mlx4_dev {TYPE_2__ caps; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,scalar_t__) ;
 int FUNC_5 (struct mlx4_dev*,char*,int) ;
 scalar_t__ FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*,int ,struct mlx4_vhcr_cmd*) ;
 struct mlx4_priv* FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct mlx4_dev *VAR_4, u64 VAR_5, u64 *VAR_6,
     int VAR_7, u32 VAR_8, u8 VAR_9,
     u16 VAR_10, unsigned long VAR_11)
{
 struct mlx4_priv *VAR_12 = FUNC_8(VAR_4);
 struct mlx4_vhcr_cmd *VAR_13 = VAR_12->mfunc.vhcr;
 int VAR_14;

 FUNC_10(&VAR_12->cmd.slave_cmd_mutex);

 VAR_13->in_param = FUNC_3(VAR_5);
 VAR_13->out_param = VAR_6 ? FUNC_3(*VAR_6) : 0;
 VAR_13->in_modifier = FUNC_2(VAR_8);
 VAR_13->opcode = FUNC_1((((u16) VAR_9) << 12) | (VAR_10 & 0xfff));
 VAR_13->token = FUNC_1(VAR_0);
 VAR_13->status = 0;
 VAR_13->flags = !!(VAR_12->cmd.use_events) << 6;

 if (FUNC_6(VAR_4)) {
  VAR_14 = FUNC_7(VAR_4, VAR_4->caps.function, VAR_13);
  if (!VAR_14) {
   if (VAR_7) {
    if (VAR_6)
     *VAR_6 =
      FUNC_0(VAR_13->out_param);
    else {
     FUNC_5(VAR_4, "response expected while"
       "output mailbox is NULL for "
       "command 0x%x\n", VAR_10);
     VAR_13->status = VAR_1;
    }
   }
   VAR_14 = FUNC_9(VAR_13->status);
  }
 } else {
  VAR_14 = FUNC_4(VAR_4, VAR_2, 0,
        VAR_3 + VAR_11);
  if (!VAR_14) {
   if (VAR_7) {
    if (VAR_6)
     *VAR_6 =
      FUNC_0(VAR_13->out_param);
    else {
     FUNC_5(VAR_4, "response expected while"
       "output mailbox is NULL for "
       "command 0x%x\n", VAR_10);
     VAR_13->status = VAR_1;
    }
   }
   VAR_14 = FUNC_9(VAR_13->status);
  } else
   FUNC_5(VAR_4, "failed execution of VHCR_POST command"
     "opcode 0x%x\n", VAR_10);
 }

 FUNC_11(&VAR_12->cmd.slave_cmd_mutex);
 return VAR_14;
}
