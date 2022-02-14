
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; int finish_tasklet; int mmc; struct mmc_data* data; } ;
struct mmc_data {int flags; int bytes_xfered; int blksz; int blocks; scalar_t__ stop; scalar_t__ error; int sg_len; int sg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdhci_host*,struct mmc_data*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_7)
{
 struct mmc_data *VAR_8;

 FUNC_0(!VAR_7->data);

 VAR_8 = VAR_7->data;
 VAR_7->data = ((void*)0);

 if (VAR_7->flags & VAR_3) {
  if (VAR_7->flags & VAR_6)
   FUNC_3(VAR_7, VAR_8);
  else {
   FUNC_1(FUNC_2(VAR_7->mmc), VAR_8->sg,
    VAR_8->sg_len, (VAR_8->flags & VAR_2) ?
     VAR_0 : VAR_1);
  }
 }
 if (VAR_8->error)
  VAR_8->bytes_xfered = 0;
 else
  VAR_8->bytes_xfered = VAR_8->blksz * VAR_8->blocks;

 if (VAR_8->stop) {




  if (VAR_8->error) {
   FUNC_4(VAR_7, VAR_4);
   FUNC_4(VAR_7, VAR_5);
  }

  FUNC_5(VAR_7, VAR_8->stop);
 } else
  FUNC_6(&VAR_7->finish_tasklet);
}
