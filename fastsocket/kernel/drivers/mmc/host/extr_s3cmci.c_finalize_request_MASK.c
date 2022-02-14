
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct s3cmci_host {int cmd_is_stop; scalar_t__ complete_what; int prescaler; int mmc; struct mmc_request* mrq; scalar_t__ base; scalar_t__ is2440; int dma; int dma_complete; } ;
struct mmc_request {TYPE_2__* data; struct mmc_command* cmd; struct mmc_command* stop; } ;
struct mmc_command {scalar_t__ error; TYPE_1__* data; void** resp; } ;
struct TYPE_4__ {scalar_t__ error; int bytes_xfered; int blocks; int blksz; } ;
struct TYPE_3__ {scalar_t__ error; scalar_t__ stop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct s3cmci_host*) ;
 int FUNC_1 (struct s3cmci_host*,int ,char*,int ) ;
 int VAR_17 ;
 int FUNC_2 (struct s3cmci_host*,struct mmc_command*,int) ;
 int FUNC_3 (int ,struct mmc_request*) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct s3cmci_host*) ;
 scalar_t__ FUNC_7 (struct s3cmci_host*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct s3cmci_host *VAR_18)
{
 struct mmc_request *VAR_19 = VAR_18->mrq;
 struct mmc_command *VAR_20 = VAR_18->cmd_is_stop ? VAR_19->stop : VAR_19->cmd;
 int VAR_21 = 0;

 if (VAR_18->complete_what != VAR_0)
  return;

 if (!VAR_19)
  return;

 if (VAR_20->data && (VAR_20->error == 0) &&
     (VAR_20->data->error == 0)) {
  if (FUNC_7(VAR_18) && (!VAR_18->dma_complete)) {
   FUNC_1(VAR_18, VAR_17, "DMA Missing (%d)!\n",
       VAR_18->dma_complete);
   return;
  }
 }


 VAR_20->resp[0] = FUNC_4(VAR_18->base + VAR_11);
 VAR_20->resp[1] = FUNC_4(VAR_18->base + VAR_12);
 VAR_20->resp[2] = FUNC_4(VAR_18->base + VAR_13);
 VAR_20->resp[3] = FUNC_4(VAR_18->base + VAR_14);

 FUNC_9(VAR_18->prescaler, VAR_18->base + VAR_10);

 if (VAR_20->error)
  VAR_21 = 1;

 if (VAR_20->data && VAR_20->data->error)
  VAR_21 = 1;

 FUNC_2(VAR_18, VAR_20, VAR_21);


 FUNC_9(0, VAR_18->base + VAR_3);
 FUNC_9(VAR_8, VAR_18->base + VAR_7);
 FUNC_9(0, VAR_18->base + VAR_4);
 FUNC_0(VAR_18);

 if (VAR_20->data && VAR_20->error)
  VAR_20->data->error = VAR_20->error;

 if (VAR_20->data && VAR_20->data->stop && (!VAR_18->cmd_is_stop)) {
  VAR_18->cmd_is_stop = 1;
  FUNC_8(VAR_18->mmc);
  return;
 }


 if (!VAR_19->data)
  goto request_done;


 if (VAR_19->data->error == 0) {
  VAR_19->data->bytes_xfered =
   (VAR_19->data->blocks * VAR_19->data->blksz);
 } else {
  VAR_19->data->bytes_xfered = 0;
 }



 if (VAR_19->data->error != 0) {
  if (FUNC_7(VAR_18))
   FUNC_5(VAR_18->dma, VAR_2);

  if (VAR_18->is2440) {

   FUNC_9(VAR_16 |
          VAR_15,
          VAR_18->base + VAR_9);
  } else {
   u32 VAR_22;


   VAR_22 = FUNC_4(VAR_18->base + VAR_5);
   VAR_22 |= VAR_6;

   FUNC_9(VAR_22, VAR_18->base + VAR_5);
  }
 }

request_done:
 VAR_18->complete_what = VAR_1;
 VAR_18->mrq = ((void*)0);

 FUNC_6(VAR_18);
 FUNC_3(VAR_18->mmc, VAR_19);
}
