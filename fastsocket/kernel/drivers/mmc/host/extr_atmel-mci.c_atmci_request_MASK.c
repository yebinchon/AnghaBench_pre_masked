
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {TYPE_1__* cmd; struct mmc_data* data; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int blocks; int blksz; } ;
struct atmel_mci_slot {int flags; int mrq; struct atmel_mci* host; } ;
struct atmel_mci {int dummy; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct atmel_mci*,struct atmel_mci_slot*,struct mmc_request*) ;
 struct atmel_mci_slot* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_3, struct mmc_request *VAR_4)
{
 struct atmel_mci_slot *VAR_5 = FUNC_2(VAR_3);
 struct atmel_mci *VAR_6 = VAR_5->host;
 struct mmc_data *VAR_7;

 FUNC_0(VAR_5->mrq);
 if (!FUNC_4(VAR_0, &VAR_5->flags)) {
  VAR_4->cmd->error = -VAR_2;
  FUNC_3(VAR_3, VAR_4);
  return;
 }


 VAR_7 = VAR_4->data;
 if (VAR_7 && VAR_7->blocks > 1 && VAR_7->blksz & 3) {
  VAR_4->cmd->error = -VAR_1;
  FUNC_3(VAR_3, VAR_4);
 }

 FUNC_1(VAR_6, VAR_5, VAR_4);
}
