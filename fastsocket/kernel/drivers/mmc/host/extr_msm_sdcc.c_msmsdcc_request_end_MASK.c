
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data_xfered; int * cmd; int * mrq; int data; } ;
struct msmsdcc_host {int lock; int mmc; TYPE_2__ curr; scalar_t__ base; } ;
struct mmc_request {TYPE_3__* cmd; TYPE_1__* data; } ;
struct TYPE_6__ {int error; } ;
struct TYPE_4__ {int bytes_xfered; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct mmc_request*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct msmsdcc_host *VAR_2, struct mmc_request *VAR_3)
{
 FUNC_5(0, VAR_2->base + VAR_1);

 FUNC_0(VAR_2->curr.data);

 VAR_2->curr.mrq = ((void*)0);
 VAR_2->curr.cmd = ((void*)0);

 if (VAR_3->data)
  VAR_3->data->bytes_xfered = VAR_2->curr.data_xfered;
 if (VAR_3->cmd->error == -VAR_0)
  FUNC_1(5);





 FUNC_4(&VAR_2->lock);
 FUNC_2(VAR_2->mmc, VAR_3);
 FUNC_3(&VAR_2->lock);
}
