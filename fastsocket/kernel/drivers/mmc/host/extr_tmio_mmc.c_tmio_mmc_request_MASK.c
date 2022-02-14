
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {struct mmc_request* mrq; } ;
struct mmc_request {TYPE_1__* cmd; int data; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int error; } ;


 struct tmio_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct tmio_mmc_host*,TYPE_1__*) ;
 int FUNC_4 (struct tmio_mmc_host*,int ) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 struct tmio_mmc_host *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 if (VAR_2->mrq)
  FUNC_2("request not null\n");

 VAR_2->mrq = VAR_1;

 if (VAR_1->data) {
  VAR_3 = FUNC_4(VAR_2, VAR_1->data);
  if (VAR_3)
   goto fail;
 }

 VAR_3 = FUNC_3(VAR_2, VAR_1->cmd);

 if (!VAR_3)
  return;

fail:
 VAR_1->cmd->error = VAR_3;
 FUNC_1(VAR_0, VAR_1);
}
