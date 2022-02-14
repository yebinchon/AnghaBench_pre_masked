
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* cmd; } ;
struct imxmci_host {int pending_events; int mmc; int * data; int * cmd; int * req; int prev_cmd_code; int lock; scalar_t__ base; int imask; } ;
struct TYPE_2__ {int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,struct mmc_request*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct imxmci_host *VAR_6, struct mmc_request *VAR_7)
{
 unsigned long VAR_8;

 FUNC_1(&VAR_6->lock, VAR_8);

 VAR_6->pending_events &= ~(VAR_4 | VAR_3 |
      VAR_2 | VAR_1);

 VAR_6->imask = VAR_0;
 FUNC_3(VAR_6->imask, VAR_6->base + VAR_5);

 FUNC_2(&VAR_6->lock, VAR_8);

 if (VAR_7 && VAR_7->cmd)
  VAR_6->prev_cmd_code = VAR_7->cmd->opcode;

 VAR_6->req = ((void*)0);
 VAR_6->cmd = ((void*)0);
 VAR_6->data = ((void*)0);
 FUNC_0(VAR_6->mmc, VAR_7);
}
