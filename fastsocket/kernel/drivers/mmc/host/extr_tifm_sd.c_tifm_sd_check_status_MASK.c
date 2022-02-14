
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tifm_sd {int cmd_flags; int finish_tasklet; TYPE_2__* req; scalar_t__ no_dma; struct tifm_dev* dev; } ;
struct tifm_dev {scalar_t__ addr; } ;
struct mmc_command {TYPE_1__* data; scalar_t__ error; } ;
struct TYPE_4__ {scalar_t__ stop; struct mmc_command* cmd; } ;
struct TYPE_3__ {int flags; scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tifm_sd*,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tifm_sd *VAR_9)
{
 struct tifm_dev *VAR_10 = VAR_9->dev;
 struct mmc_command *VAR_11 = VAR_9->req->cmd;

 if (VAR_11->error)
  goto finish_request;

 if (!(VAR_9->cmd_flags & VAR_2))
  return;

 if (VAR_11->data) {
  if (VAR_11->data->error) {
   if ((VAR_9->cmd_flags & VAR_5)
       && !(VAR_9->cmd_flags & VAR_6))
    return;

   goto finish_request;
  }

  if (!(VAR_9->cmd_flags & VAR_0))
   return;

  if (!(VAR_9->no_dma || (VAR_9->cmd_flags & VAR_3)))
   return;

  if (VAR_11->data->flags & VAR_4) {
   if (VAR_9->req->stop) {
    if (!(VAR_9->cmd_flags & VAR_5)) {
     VAR_9->cmd_flags |= VAR_5;
     FUNC_3(VAR_8
            | FUNC_0(VAR_10->addr
             + VAR_7),
            VAR_10->addr
            + VAR_7);
     FUNC_2(VAR_9, VAR_9->req->stop);
     return;
    } else {
     if (!(VAR_9->cmd_flags & VAR_6)
         || (VAR_9->cmd_flags & VAR_1))
      return;
     FUNC_3((~VAR_8)
            & FUNC_0(VAR_10->addr
             + VAR_7),
            VAR_10->addr
            + VAR_7);
    }
   } else {
    if (VAR_9->cmd_flags & VAR_1)
     return;
    FUNC_3((~VAR_8)
           & FUNC_0(VAR_10->addr
            + VAR_7),
           VAR_10->addr + VAR_7);
   }
  } else {
   if (VAR_9->req->stop) {
    if (!(VAR_9->cmd_flags & VAR_5)) {
     VAR_9->cmd_flags |= VAR_5;
     FUNC_2(VAR_9, VAR_9->req->stop);
     return;
    } else {
     if (!(VAR_9->cmd_flags & VAR_6))
      return;
    }
   }
  }
 }
finish_request:
 FUNC_1(&VAR_9->finish_tasklet);
}
