
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_host {int quirks; int flags; int lock; struct mmc_request* mrq; int finish_tasklet; } ;
struct mmc_request {TYPE_1__* cmd; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,TYPE_1__*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_8, struct mmc_request *VAR_9)
{
 struct sdhci_host *VAR_10;
 bool VAR_11;
 unsigned long VAR_12;

 VAR_10 = FUNC_1(VAR_8);

 FUNC_7(&VAR_10->lock, VAR_12);

 FUNC_0(VAR_10->mrq != ((void*)0));


 FUNC_3(VAR_10);


 VAR_10->mrq = VAR_9;


 if (VAR_10->quirks & VAR_7)
  VAR_11 = 1;
 else
  VAR_11 = FUNC_5(VAR_10, VAR_6) &
    VAR_1;

 if (!VAR_11 || VAR_10->flags & VAR_2) {
  VAR_10->mrq->cmd->error = -VAR_0;
  FUNC_9(&VAR_10->finish_tasklet);
 } else {
  u32 VAR_13;

  VAR_13 = FUNC_5(VAR_10, VAR_6);





  if ((VAR_10->flags & VAR_5) &&
      !(VAR_13 & (VAR_4 | VAR_3))) {
   FUNC_8(&VAR_10->lock, VAR_12);
   FUNC_4(VAR_8);
   FUNC_7(&VAR_10->lock, VAR_12);


   VAR_10->mrq = VAR_9;
  }

  FUNC_6(VAR_10, VAR_9->cmd);
 }

 FUNC_2();
 FUNC_8(&VAR_10->lock, VAR_12);
}
