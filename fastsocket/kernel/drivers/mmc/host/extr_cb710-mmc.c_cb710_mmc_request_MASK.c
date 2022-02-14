
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* cmd; TYPE_1__* stop; } ;
struct mmc_host {int dummy; } ;
struct cb710_slot {int dummy; } ;
struct cb710_mmc_reader {int finish_req_tasklet; struct mmc_request* mrq; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*,TYPE_1__*) ;
 int FUNC_2 (struct cb710_slot*,int ,int ) ;
 scalar_t__ FUNC_3 (struct cb710_slot*) ;
 struct cb710_slot* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int) ;
 struct cb710_mmc_reader* FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 struct cb710_slot *VAR_4 = FUNC_4(VAR_2);
 struct cb710_mmc_reader *VAR_5 = FUNC_6(VAR_2);

 FUNC_0(VAR_5->mrq != ((void*)0));

 VAR_5->mrq = VAR_3;
 FUNC_2(VAR_4, VAR_0, 0);

 if (FUNC_3(VAR_4)) {
  if (!FUNC_1(VAR_2, VAR_3->cmd) && VAR_3->stop)
   FUNC_1(VAR_2, VAR_3->stop);
  FUNC_5(1);
 } else {
  VAR_3->cmd->error = -VAR_1;
 }

 FUNC_7(&VAR_5->finish_req_tasklet);
}
