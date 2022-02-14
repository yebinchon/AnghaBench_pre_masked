
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {int lock; int mmc; int data_xfered; int * cmd; int * mrq; int data; scalar_t__ base; } ;
struct mmc_request {TYPE_1__* data; } ;
struct TYPE_2__ {int bytes_xfered; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,struct mmc_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct mmci_host *VAR_1, struct mmc_request *VAR_2)
{
 FUNC_4(0, VAR_1->base + VAR_0);

 FUNC_0(VAR_1->data);

 VAR_1->mrq = ((void*)0);
 VAR_1->cmd = ((void*)0);

 if (VAR_2->data)
  VAR_2->data->bytes_xfered = VAR_1->data_xfered;





 FUNC_3(&VAR_1->lock);
 FUNC_1(VAR_1->mmc, VAR_2);
 FUNC_2(&VAR_1->lock);
}
