
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_crdr_mmc_host {TYPE_1__* cmd; int finish_tasklet; } ;
struct TYPE_2__ {int data; scalar_t__ error; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct via_crdr_mmc_host*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct via_crdr_mmc_host *VAR_0)
{
 FUNC_1(VAR_0, VAR_0->cmd);

 VAR_0->cmd->error = 0;

 if (!VAR_0->cmd->data)
  FUNC_0(&VAR_0->finish_tasklet);

 VAR_0->cmd = ((void*)0);
}
