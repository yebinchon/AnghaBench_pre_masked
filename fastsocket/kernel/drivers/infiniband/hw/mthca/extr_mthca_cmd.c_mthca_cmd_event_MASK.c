
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u16 ;
struct TYPE_2__ {size_t token_mask; struct mthca_cmd_context* context; } ;
struct mthca_dev {TYPE_1__ cmd; } ;
struct mthca_cmd_context {size_t token; int done; int out_param; int status; scalar_t__ result; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mthca_dev *VAR_0,
       u16 VAR_1,
       u8 VAR_2,
       u64 VAR_3)
{
 struct mthca_cmd_context *VAR_4 =
  &VAR_0->cmd.context[VAR_1 & VAR_0->cmd.token_mask];


 if (VAR_1 != VAR_4->token)
  return;

 VAR_4->result = 0;
 VAR_4->status = VAR_2;
 VAR_4->out_param = VAR_3;

 FUNC_0(&VAR_4->done);
}
