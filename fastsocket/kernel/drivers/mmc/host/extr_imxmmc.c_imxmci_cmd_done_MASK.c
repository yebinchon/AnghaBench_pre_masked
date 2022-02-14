
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_request {TYPE_1__* data; } ;
struct mmc_data {int dummy; } ;
struct mmc_command {int flags; int* resp; int error; } ;
struct imxmci_host {int mmc; struct mmc_request* req; int dma; int pending_events; scalar_t__ base; struct mmc_command* cmd; struct mmc_data* data; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct imxmci_host*,unsigned int*,int ,int,char*) ;
 int FUNC_4 (struct imxmci_host*,unsigned int) ;
 int FUNC_5 (struct imxmci_host*,struct mmc_request*) ;
 int FUNC_6 (struct imxmci_host*) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct imxmci_host *VAR_14, unsigned int VAR_15)
{
 struct mmc_command *VAR_16 = VAR_14->cmd;
 int VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 struct mmc_data *VAR_21 = VAR_14->data;

 if (!VAR_16)
  return 0;

 VAR_14->cmd = ((void*)0);

 if (VAR_15 & VAR_13) {
  FUNC_0(FUNC_7(VAR_14->mmc), "CMD TIMEOUT\n");
  VAR_16->error = -VAR_2;
 } else if (VAR_15 & VAR_12 && VAR_16->flags & VAR_8) {
  FUNC_0(FUNC_7(VAR_14->mmc), "cmd crc error\n");
  VAR_16->error = -VAR_0;
 }

 if (VAR_16->flags & VAR_9) {
  if (VAR_16->flags & VAR_7) {
   for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
    VAR_18 = FUNC_8(VAR_14->base + VAR_5);
    VAR_19 = FUNC_8(VAR_14->base + VAR_5);
    VAR_16->resp[VAR_17] = VAR_18 << 16 | VAR_19;
   }
  } else {
   VAR_18 = FUNC_8(VAR_14->base + VAR_5);
   VAR_19 = FUNC_8(VAR_14->base + VAR_5);
   VAR_20 = FUNC_8(VAR_14->base + VAR_5);
   VAR_16->resp[0] = VAR_18 << 24 | VAR_19 << 8 | VAR_20 >> 8;
  }
 }

 FUNC_0(FUNC_7(VAR_14->mmc), "RESP 0x%08x, 0x%08x, 0x%08x, 0x%08x, error %d\n",
  VAR_16->resp[0], VAR_16->resp[1], VAR_16->resp[2], VAR_16->resp[3], VAR_16->error);

 if (VAR_21 && !VAR_16->error && !(VAR_15 & VAR_11)) {
  if (VAR_14->req->data->flags & VAR_4) {



   VAR_15 = FUNC_8(VAR_14->base + VAR_6);
   if (FUNC_3(VAR_14, &VAR_15,
       VAR_10,
       40, "imxmci_cmd_done DMA WR") < 0) {
    VAR_16->error = -VAR_1;
    FUNC_4(VAR_14, VAR_15);
    if (VAR_14->req)
     FUNC_5(VAR_14, VAR_14->req);
    FUNC_1(FUNC_7(VAR_14->mmc), "STATUS = 0x%04x\n",
      VAR_15);
    return 0;
   }

   if (FUNC_9(VAR_3, &VAR_14->pending_events))
    FUNC_2(VAR_14->dma);
  }
 } else {
  struct mmc_request *VAR_22;
  FUNC_6(VAR_14);
  VAR_22 = VAR_14->req;

  if (VAR_21)
   FUNC_4(VAR_14, VAR_15);

  if (VAR_22)
   FUNC_5(VAR_14, VAR_22);
  else
   FUNC_1(FUNC_7(VAR_14->mmc), "imxmci_cmd_done: no request to finish\n");
 }

 return 1;
}
