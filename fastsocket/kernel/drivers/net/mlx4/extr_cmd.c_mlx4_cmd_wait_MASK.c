
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_context {size_t next; int result; int out_param; int fw_status; int done; int token; } ;
struct mlx4_cmd {size_t free_head; int event_sem; int context_lock; struct mlx4_cmd_context* context; scalar_t__ token_mask; } ;
struct TYPE_2__ {struct mlx4_cmd cmd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct mlx4_dev*,char*,int ,int ) ;
 TYPE_1__* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,char*,int ) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct mlx4_dev *VAR_1, u64 VAR_2, u64 *VAR_3,
    int VAR_4, u32 VAR_5, u8 VAR_6,
    u16 VAR_7, unsigned long VAR_8)
{
 struct mlx4_cmd *VAR_9 = &FUNC_5(VAR_1)->cmd;
 struct mlx4_cmd_context *VAR_10;
 int VAR_11 = 0;

 FUNC_1(&VAR_9->event_sem);

 FUNC_8(&VAR_9->context_lock);
 FUNC_0(VAR_9->free_head < 0);
 VAR_10 = &VAR_9->context[VAR_9->free_head];
 VAR_10->token += VAR_9->token_mask + 1;
 VAR_9->free_head = VAR_10->next;
 FUNC_9(&VAR_9->context_lock);

 FUNC_2(&VAR_10->done);

 FUNC_3(VAR_1, VAR_2, VAR_3 ? *VAR_3 : 0,
        VAR_5, VAR_6, VAR_7, VAR_10->token, 1);

 if (!FUNC_11(&VAR_10->done,
      FUNC_7(VAR_8))) {
  FUNC_6(VAR_1, "command 0x%x timed out (go bit not cleared)\n",
     VAR_7);
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = VAR_10->result;
 if (VAR_11) {
  FUNC_4(VAR_1, "command 0x%x failed: fw status = 0x%x\n",
    VAR_7, VAR_10->fw_status);
  goto out;
 }

 if (VAR_4)
  *VAR_3 = VAR_10->out_param;

out:
 FUNC_8(&VAR_9->context_lock);
 VAR_10->next = VAR_9->free_head;
 VAR_9->free_head = VAR_10 - VAR_9->context;
 FUNC_9(&VAR_9->context_lock);

 FUNC_10(&VAR_9->event_sem);
 return VAR_11;
}
