
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct s3cmci_host {int dcnt; scalar_t__ base; scalar_t__ cmd_is_stop; int ccnt; struct mmc_request* mrq; } ;
struct mmc_request {struct mmc_command* cmd; struct mmc_command* stop; } ;
struct mmc_host {int dummy; } ;
struct mmc_command {int error; TYPE_1__* data; } ;
struct TYPE_4__ {int error; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct s3cmci_host*,int ,char*,int) ;
 int VAR_3 ;
 struct s3cmci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_3 (struct s3cmci_host*,struct mmc_command*,scalar_t__) ;
 int FUNC_4 (struct s3cmci_host*,int) ;
 scalar_t__ FUNC_5 (struct s3cmci_host*) ;
 int FUNC_6 (struct s3cmci_host*,TYPE_1__*) ;
 int FUNC_7 (struct s3cmci_host*,TYPE_1__*) ;
 int FUNC_8 (struct s3cmci_host*,struct mmc_command*) ;
 int FUNC_9 (struct s3cmci_host*,TYPE_1__*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct mmc_host *VAR_4)
{
 struct s3cmci_host *VAR_5 = FUNC_1(VAR_4);
 struct mmc_request *VAR_6 = VAR_5->mrq;
 struct mmc_command *VAR_7 = VAR_5->cmd_is_stop ? VAR_6->stop : VAR_6->cmd;

 VAR_5->ccnt++;
 FUNC_3(VAR_5, VAR_7, VAR_5->cmd_is_stop);




 FUNC_10(0xFFFFFFFF, VAR_5->base + VAR_0);
 FUNC_10(0xFFFFFFFF, VAR_5->base + VAR_1);
 FUNC_10(0xFFFFFFFF, VAR_5->base + VAR_2);

 if (VAR_7->data) {
  int VAR_8 = FUNC_9(VAR_5, VAR_7->data);

  VAR_5->dcnt++;

  if (VAR_8) {
   FUNC_0(VAR_5, VAR_3, "setup data error %d\n", VAR_8);
   VAR_7->error = VAR_8;
   VAR_7->data->error = VAR_8;

   FUNC_2(VAR_4, VAR_6);
   return;
  }

  if (FUNC_5(VAR_5))
   VAR_8 = FUNC_6(VAR_5, VAR_7->data);
  else
   VAR_8 = FUNC_7(VAR_5, VAR_7->data);

  if (VAR_8) {
   FUNC_0(VAR_5, VAR_3, "data prepare error %d\n", VAR_8);
   VAR_7->error = VAR_8;
   VAR_7->data->error = VAR_8;

   FUNC_2(VAR_4, VAR_6);
   return;
  }
 }


 FUNC_8(VAR_5, VAR_7);


 FUNC_4(VAR_5, 1);
}
