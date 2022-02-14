
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_context {size_t next; int result; scalar_t__ fw_status; int done; int token; } ;
struct mlx4_cmd {size_t free_head; int event_sem; int context_lock; struct mlx4_cmd_context* context; scalar_t__ token_mask; } ;
struct TYPE_2__ {struct mlx4_cmd cmd; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long VAR_2 ;
 int FUNC_5 (struct mlx4_dev*,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,char*,int ,scalar_t__) ;
 TYPE_1__* FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*,char*,int ) ;
 unsigned long FUNC_9 (unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_15(struct mlx4_dev *VAR_3, u8 VAR_4,
         u16 VAR_5, unsigned long VAR_6)
{
 struct mlx4_cmd *VAR_7 = &FUNC_7(VAR_3)->cmd;
 struct mlx4_cmd_context *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_3(&VAR_7->event_sem);

 FUNC_10(&VAR_7->context_lock);
 FUNC_0(VAR_7->free_head < 0);
 VAR_8 = &VAR_7->context[VAR_7->free_head];
 VAR_8->token += VAR_7->token_mask + 1;
 VAR_7->free_head = VAR_8->next;
 FUNC_11(&VAR_7->context_lock);

 FUNC_4(&VAR_8->done);

 FUNC_5(VAR_3, VAR_4, VAR_5);

 if (!FUNC_14(&VAR_8->done,
      FUNC_9(VAR_6))) {
  FUNC_8(VAR_3, "communication channel command 0x%x timed out\n",
     VAR_4);
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_10 = VAR_8->result;
 if (VAR_10 && VAR_8->fw_status != VAR_0) {
  FUNC_6(VAR_3, "command 0x%x failed: fw status = 0x%x\n",
    VAR_4, VAR_8->fw_status);
  goto out;
 }

out:




 VAR_9 = FUNC_9(VAR_6) + VAR_2;
 while (FUNC_1(VAR_3) && FUNC_12(VAR_2, VAR_9))
  FUNC_2();

 FUNC_10(&VAR_7->context_lock);
 VAR_8->next = VAR_7->free_head;
 VAR_7->free_head = VAR_8 - VAR_7->context;
 FUNC_11(&VAR_7->context_lock);

 FUNC_13(&VAR_7->event_sem);
 return VAR_10;
}
