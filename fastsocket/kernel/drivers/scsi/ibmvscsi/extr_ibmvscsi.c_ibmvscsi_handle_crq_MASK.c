
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct viosrp_crq {int valid; int format; scalar_t__ status; scalar_t__ IU_data_ptr; } ;
struct srp_event_struct {TYPE_6__* hostdata; int list; int (* done ) (struct srp_event_struct*) ;TYPE_4__* cmnd; int timer; TYPE_3__* xfer_iu; int free; } ;
struct ibmvscsi_host_data {int client_migrated; int reenable_crq; int dev; int request_limit; int pool; int work_wait_q; int host; } ;
struct TYPE_14__ {long (* send_crq ) (struct ibmvscsi_host_data*,int ,int ) ;} ;
struct TYPE_13__ {TYPE_5__* host; int pool; } ;
struct TYPE_12__ {int host_lock; } ;
struct TYPE_11__ {int result; } ;
struct TYPE_8__ {int req_lim_delta; } ;
struct TYPE_9__ {TYPE_1__ rsp; } ;
struct TYPE_10__ {TYPE_2__ srp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,struct srp_event_struct*) ;
 TYPE_7__* VAR_6 ;
 int FUNC_7 (struct ibmvscsi_host_data*) ;
 int FUNC_8 (struct ibmvscsi_host_data*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ibmvscsi_host_data*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (int ,unsigned long) ;
 long FUNC_14 (struct ibmvscsi_host_data*,int ,int ) ;
 int FUNC_15 (struct srp_event_struct*) ;
 int FUNC_16 (int *,struct srp_event_struct*) ;
 int FUNC_17 (int *) ;

void FUNC_18(struct viosrp_crq *VAR_7,
    struct ibmvscsi_host_data *VAR_8)
{
 long VAR_9;
 unsigned long VAR_10;
 struct srp_event_struct *VAR_11 =
     (struct srp_event_struct *)VAR_7->IU_data_ptr;
 switch (VAR_7->valid) {
 case 0xC0:
  switch (VAR_7->format) {
  case 0x01:
   FUNC_5(VAR_8->dev, "partner initialized\n");

   if ((VAR_9 = VAR_6->send_crq(VAR_8,
        VAR_2, 0)) == 0) {

    FUNC_8(VAR_8);
   } else {
    FUNC_4(VAR_8->dev, "Unable to send init rsp. rc=%ld\n", VAR_9);
   }

   break;
  case 0x02:
   FUNC_5(VAR_8->dev, "partner initialization complete\n");


   FUNC_8(VAR_8);
   break;
  default:
   FUNC_4(VAR_8->dev, "unknown crq message type: %d\n", VAR_7->format);
  }
  return;
 case 0xFF:
  FUNC_11(VAR_8->host);
  FUNC_2(&VAR_8->request_limit, 0);
  if (VAR_7->format == 0x06) {

   FUNC_5(VAR_8->dev, "Re-enabling adapter!\n");
   VAR_8->client_migrated = 1;
   VAR_8->reenable_crq = 1;
   FUNC_10(VAR_8, VAR_1);
   FUNC_17(&VAR_8->work_wait_q);
  } else {
   FUNC_4(VAR_8->dev, "Virtual adapter failed rc %d!\n",
    VAR_7->format);
   FUNC_7(VAR_8);
  }
  return;
 case 0x80:
  break;
 default:
  FUNC_4(VAR_8->dev, "got an invalid message type 0x%02x\n",
   VAR_7->valid);
  return;
 }





 if (!FUNC_16(&VAR_8->pool, VAR_11)) {
  FUNC_4(VAR_8->dev, "returned correlation_token 0x%p is invalid!\n",
         (void *)VAR_7->IU_data_ptr);
  return;
 }

 if (FUNC_1(&VAR_11->free)) {
  FUNC_4(VAR_8->dev, "received duplicate correlation_token 0x%p!\n",
   (void *)VAR_7->IU_data_ptr);
  return;
 }

 if (VAR_7->format == VAR_5)
  FUNC_0(VAR_11->xfer_iu->srp.rsp.req_lim_delta,
      &VAR_8->request_limit);

 FUNC_3(&VAR_11->timer);

 if ((VAR_7->status != VAR_3 && VAR_7->status != VAR_4) && VAR_11->cmnd)
  VAR_11->cmnd->result = VAR_0 << 16;
 if (VAR_11->done)
  VAR_11->done(VAR_11);
 else
  FUNC_4(VAR_8->dev, "returned done() is NULL; not running it!\n");





 FUNC_12(VAR_11->hostdata->host->host_lock, VAR_10);
 FUNC_9(&VAR_11->list);
 FUNC_6(&VAR_11->hostdata->pool, VAR_11);
 FUNC_13(VAR_11->hostdata->host->host_lock, VAR_10);
}
