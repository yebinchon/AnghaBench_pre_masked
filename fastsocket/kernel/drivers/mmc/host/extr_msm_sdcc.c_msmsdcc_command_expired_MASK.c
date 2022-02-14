
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * cmd; struct mmc_request* mrq; } ;
struct TYPE_4__ {int sg; } ;
struct msmsdcc_host {int mmc; int lock; TYPE_2__ curr; scalar_t__ base; TYPE_1__ dma; } ;
struct mmc_request {TYPE_3__* cmd; int data; } ;
struct TYPE_6__ {int error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct mmc_request*) ;
 int FUNC_2 (struct msmsdcc_host*) ;
 int FUNC_3 (char*,int ,struct mmc_request*,TYPE_3__*,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(unsigned long VAR_2)
{
 struct msmsdcc_host *VAR_3 = (struct msmsdcc_host *) VAR_2;
 struct mmc_request *VAR_4;
 unsigned long VAR_5;

 FUNC_5(&VAR_3->lock, VAR_5);
 VAR_4 = VAR_3->curr.mrq;

 if (!VAR_4) {
  FUNC_4("%s: Command expiry misfire\n",
   FUNC_0(VAR_3->mmc));
  FUNC_6(&VAR_3->lock, VAR_5);
  return;
 }

 FUNC_3("%s: Command timeout (%p %p %p %p)\n",
        FUNC_0(VAR_3->mmc), VAR_4, VAR_4->cmd,
        VAR_4->data, VAR_3->dma.sg);

 VAR_4->cmd->error = -VAR_0;
 FUNC_2(VAR_3);

 FUNC_7(0, VAR_3->base + VAR_1);

 VAR_3->curr.mrq = ((void*)0);
 VAR_3->curr.cmd = ((void*)0);

 FUNC_6(&VAR_3->lock, VAR_5);
 FUNC_1(VAR_3->mmc, VAR_4);
}
