
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_host {int flags; int quirks; unsigned int clock; int mmc; int lock; int * data; int * cmd; struct mmc_request* mrq; int timer; } ;
struct mmc_request {TYPE_3__* data; TYPE_1__* cmd; } ;
struct TYPE_6__ {TYPE_2__* stop; scalar_t__ error; } ;
struct TYPE_5__ {scalar_t__ error; } ;
struct TYPE_4__ {scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct mmc_request*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_5)
{
 struct sdhci_host *VAR_6;
 unsigned long VAR_7;
 struct mmc_request *VAR_8;

 VAR_6 = (struct sdhci_host*)VAR_5;

 FUNC_6(&VAR_6->lock, VAR_7);

 FUNC_0(&VAR_6->timer);

 VAR_8 = VAR_6->mrq;





 if (!(VAR_6->flags & VAR_0) &&
  (VAR_8->cmd->error ||
   (VAR_8->data && (VAR_8->data->error ||
    (VAR_8->data->stop && VAR_8->data->stop->error))) ||
     (VAR_6->quirks & VAR_2))) {


  if (VAR_6->quirks & VAR_1) {
   unsigned int VAR_9;


   VAR_9 = VAR_6->clock;
   VAR_6->clock = 0;
   FUNC_5(VAR_6, VAR_9);
  }



  FUNC_4(VAR_6, VAR_3);
  FUNC_4(VAR_6, VAR_4);
 }

 VAR_6->mrq = ((void*)0);
 VAR_6->cmd = ((void*)0);
 VAR_6->data = ((void*)0);


 FUNC_3(VAR_6);


 FUNC_2();
 FUNC_7(&VAR_6->lock, VAR_7);

 FUNC_1(VAR_6->mmc, VAR_8);
}
