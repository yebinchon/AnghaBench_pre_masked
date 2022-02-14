
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u64 ;
struct ibmvfc_host {int dev; int sent; } ;
struct TYPE_14__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct TYPE_10__ {scalar_t__ format; } ;
struct TYPE_11__ {int status; void* tag; } ;
struct TYPE_9__ {void* tag; } ;
struct TYPE_12__ {TYPE_3__ mad_common; TYPE_1__ cmd; } ;
struct ibmvfc_event {int (* done ) (struct ibmvfc_event*) ;TYPE_4__* xfer_iu; TYPE_5__* cmnd; TYPE_6__ timer; int queue; TYPE_2__ crq; TYPE_4__ iu; } ;
struct TYPE_13__ {int result; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ibmvfc_event*) ;
 int FUNC_6 (struct ibmvfc_event*) ;
 int FUNC_7 (struct ibmvfc_host*,void*,void*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (struct ibmvfc_event*) ;
 int FUNC_9 (TYPE_6__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (struct ibmvfc_event*) ;

__attribute__((used)) static int FUNC_16(struct ibmvfc_event *VAR_9,
        struct ibmvfc_host *VAR_10, unsigned long VAR_11)
{
 u64 *VAR_12 = (u64 *) &VAR_9->crq;
 int VAR_13;


 *VAR_9->xfer_iu = VAR_9->iu;
 if (VAR_9->crq.format == VAR_3)
  VAR_9->xfer_iu->cmd.tag = (u64)VAR_9;
 else if (VAR_9->crq.format == VAR_5)
  VAR_9->xfer_iu->mad_common.tag = (u64)VAR_9;
 else
  FUNC_0();

 FUNC_10(&VAR_9->queue, &VAR_10->sent);
 FUNC_9(&VAR_9->timer);

 if (VAR_11) {
  VAR_9->timer.data = (unsigned long) VAR_9;
  VAR_9->timer.expires = VAR_8 + (VAR_11 * VAR_1);
  VAR_9->timer.function = (void (*)(unsigned long))VAR_7;
  FUNC_1(&VAR_9->timer);
 }

 FUNC_12();

 if ((VAR_13 = FUNC_7(VAR_10, VAR_12[0], VAR_12[1]))) {
  FUNC_11(&VAR_9->queue);
  FUNC_2(&VAR_9->timer);






  if (VAR_13 == VAR_2) {
   if (FUNC_13())
    FUNC_4(VAR_10->dev, "Send warning. Receive queue closed, will retry.\n");
   if (VAR_9->cmnd)
    FUNC_14(VAR_9->cmnd);
   FUNC_5(VAR_9);
   return VAR_6;
  }

  FUNC_3(VAR_10->dev, "Send error (rc=%d)\n", VAR_13);
  if (VAR_9->cmnd) {
   VAR_9->cmnd->result = VAR_0 << 16;
   VAR_9->done = FUNC_6;
  } else
   VAR_9->xfer_iu->mad_common.status = VAR_4;

  VAR_9->done(VAR_9);
 } else
  FUNC_8(VAR_9);

 return 0;
}
