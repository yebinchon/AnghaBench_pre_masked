
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {TYPE_1__* cmd; int finish_tasklet; scalar_t__ data_early; scalar_t__ data; } ;
struct TYPE_2__ {int flags; int* resp; int data; scalar_t__ error; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,scalar_t__) ;
 int FUNC_3 (struct sdhci_host*,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->cmd == ((void*)0));

 if (VAR_3->cmd->flags & VAR_1) {
  if (VAR_3->cmd->flags & VAR_0) {

   for (VAR_4 = 0;VAR_4 < 4;VAR_4++) {
    VAR_3->cmd->resp[VAR_4] = FUNC_3(VAR_3,
     VAR_2 + (3-VAR_4)*4) << 8;
    if (VAR_4 != 3)
     VAR_3->cmd->resp[VAR_4] |=
      FUNC_2(VAR_3,
      VAR_2 + (3-VAR_4)*4-1);
   }
  } else {
   VAR_3->cmd->resp[0] = FUNC_3(VAR_3, VAR_2);
  }
 }

 VAR_3->cmd->error = 0;

 if (VAR_3->data && VAR_3->data_early)
  FUNC_1(VAR_3);

 if (!VAR_3->cmd->data)
  FUNC_4(&VAR_3->finish_tasklet);

 VAR_3->cmd = ((void*)0);
}
