
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int cmdpoll_misses; int cmdpoll_hits; int reqs; } ;
struct TYPE_5__ {struct mmc_request* mrq; } ;
struct msmsdcc_host {scalar_t__ pwr; int lock; int command_timer; TYPE_2__ stats; scalar_t__ base; scalar_t__ cmdpoll; TYPE_1__ curr; scalar_t__ eject; } ;
struct mmc_request {TYPE_4__* cmd; TYPE_3__* data; } ;
struct mmc_host {int dummy; } ;
struct TYPE_8__ {int error; } ;
struct TYPE_7__ {int flags; int bytes_xfered; int blksz; int blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 struct msmsdcc_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct msmsdcc_host*,int ) ;
 int FUNC_5 (struct msmsdcc_host*,int,int ) ;
 int FUNC_6 (struct msmsdcc_host*,TYPE_4__*,int ) ;
 int FUNC_7 (struct msmsdcc_host*,TYPE_3__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct mmc_host *VAR_10, struct mmc_request *VAR_11)
{
 struct msmsdcc_host *VAR_12 = FUNC_1(VAR_10);
 unsigned long VAR_13;

 FUNC_0(VAR_12->curr.mrq != ((void*)0));
 FUNC_0(VAR_12->pwr == 0);

 FUNC_9(&VAR_12->lock, VAR_13);

 VAR_12->stats.reqs++;

 if (VAR_12->eject) {
  if (VAR_11->data && !(VAR_11->data->flags & VAR_8)) {
   VAR_11->cmd->error = 0;
   VAR_11->data->bytes_xfered = VAR_11->data->blksz *
        VAR_11->data->blocks;
  } else
   VAR_11->cmd->error = -VAR_1;

  FUNC_10(&VAR_12->lock, VAR_13);
  FUNC_2(VAR_10, VAR_11);
  return;
 }

 VAR_12->curr.mrq = VAR_11;

 if (VAR_11->data && VAR_11->data->flags & VAR_8)
  FUNC_7(VAR_12, VAR_11->data);

 FUNC_6(VAR_12, VAR_11->cmd, 0);

 if (VAR_12->cmdpoll && !FUNC_5(VAR_12,
    VAR_4|VAR_3|VAR_5,
    VAR_0)) {
  uint32_t VAR_14 = FUNC_8(VAR_12->base + VAR_7);
  FUNC_4(VAR_12, VAR_14);
  FUNC_11(VAR_4 | VAR_3 | VAR_5,
         VAR_12->base + VAR_6);
  VAR_12->stats.cmdpoll_hits++;
 } else {
  VAR_12->stats.cmdpoll_misses++;
  FUNC_3(&VAR_12->command_timer, VAR_9 + VAR_2);
 }
 FUNC_10(&VAR_12->lock, VAR_13);
}
