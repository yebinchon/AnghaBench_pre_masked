
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_request {int (* done ) (struct mmc_request*) ;TYPE_3__* stop; TYPE_2__* data; struct mmc_command* cmd; } ;
struct mmc_host {int led; TYPE_1__* ops; } ;
struct mmc_command {int error; int* resp; int opcode; scalar_t__ retries; } ;
struct TYPE_6__ {int error; int* resp; int opcode; } ;
struct TYPE_5__ {int error; int bytes_xfered; } ;
struct TYPE_4__ {int (* request ) (struct mmc_host*,struct mmc_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int ,int,...) ;
 int FUNC_4 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_5 (struct mmc_request*) ;

void FUNC_6(struct mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 struct mmc_command *VAR_4 = VAR_3->cmd;
 int VAR_5 = VAR_4->error;

 if (VAR_5 && VAR_4->retries && FUNC_1(VAR_2)) {
  if (VAR_4->resp[0] & VAR_1)
   VAR_4->retries = 0;
 }

 if (VAR_5 && VAR_4->retries) {
  FUNC_3("%s: req failed (CMD%u): %d, retrying...\n",
   FUNC_2(VAR_2), VAR_4->opcode, VAR_5);

  VAR_4->retries--;
  VAR_4->error = 0;
  VAR_2->ops->request(VAR_2, VAR_3);
 } else {
  FUNC_0(VAR_2->led, VAR_0);

  FUNC_3("%s: req done (CMD%u): %d: %08x %08x %08x %08x\n",
   FUNC_2(VAR_2), VAR_4->opcode, VAR_5,
   VAR_4->resp[0], VAR_4->resp[1],
   VAR_4->resp[2], VAR_4->resp[3]);

  if (VAR_3->data) {
   FUNC_3("%s:     %d bytes transferred: %d\n",
    FUNC_2(VAR_2),
    VAR_3->data->bytes_xfered, VAR_3->data->error);
  }

  if (VAR_3->stop) {
   FUNC_3("%s:     (CMD%u): %d: %08x %08x %08x %08x\n",
    FUNC_2(VAR_2), VAR_3->stop->opcode,
    VAR_3->stop->error,
    VAR_3->stop->resp[0], VAR_3->stop->resp[1],
    VAR_3->stop->resp[2], VAR_3->stop->resp[3]);
  }

  if (VAR_3->done)
   VAR_3->done(VAR_3);
 }
}
