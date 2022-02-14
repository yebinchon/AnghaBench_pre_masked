
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct via_crdr_mmc_host {int finish_tasklet; TYPE_1__* cmd; int mmc; } ;
struct TYPE_2__ {int error; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct via_crdr_mmc_host*) ;

__attribute__((used)) static void FUNC_5(struct via_crdr_mmc_host *VAR_5, u16 VAR_6)
{
 FUNC_0(VAR_6 == 0);

 if (!VAR_5->cmd) {
  FUNC_2("%s: Got command interrupt 0x%x even "
         "though no command operation was in progress.\n",
         FUNC_1(VAR_5->mmc), VAR_6);
  return;
 }

 if (VAR_6 & VAR_3)
  VAR_5->cmd->error = -VAR_1;
 else if (VAR_6 & VAR_4)
  VAR_5->cmd->error = -VAR_0;

 if (VAR_5->cmd->error)
  FUNC_3(&VAR_5->finish_tasklet);
 else if (VAR_6 & VAR_2)
  FUNC_4(VAR_5);
}
