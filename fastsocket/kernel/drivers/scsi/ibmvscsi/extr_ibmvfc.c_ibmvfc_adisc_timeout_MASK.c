
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int version; int length; int opcode; } ;
struct ibmvfc_tmf {int cancel_key; int scsi_id; TYPE_2__ common; } ;
struct ibmvfc_target {scalar_t__ action; int kref; int cancel_key; int scsi_id; struct ibmvfc_host* vhost; } ;
struct ibmvfc_host {scalar_t__ abort_threads; scalar_t__ state; scalar_t__ action; TYPE_3__* host; } ;
struct TYPE_4__ {struct ibmvfc_tmf tmf; } ;
struct ibmvfc_event {TYPE_1__ iu; struct ibmvfc_target* tgt; } ;
struct TYPE_6__ {int host_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ibmvfc_host*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ibmvfc_event* FUNC_1 (struct ibmvfc_host*) ;
 int FUNC_2 (struct ibmvfc_event*,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct ibmvfc_tmf*,int ,int) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct ibmvfc_target*,char*) ;
 int FUNC_10 (struct ibmvfc_target*,char*,int) ;

__attribute__((used)) static void FUNC_11(struct ibmvfc_target *VAR_9)
{
 struct ibmvfc_host *VAR_10 = VAR_9->vhost;
 struct ibmvfc_event *VAR_11;
 struct ibmvfc_tmf *VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_9(VAR_9, "ADISC timeout\n");
 FUNC_7(VAR_10->host->host_lock, VAR_13);
 if (VAR_10->abort_threads >= VAR_6 ||
     VAR_9->action != VAR_3 ||
     VAR_10->state != VAR_1 ||
     VAR_10->action != VAR_0) {
  FUNC_8(VAR_10->host->host_lock, VAR_13);
  return;
 }

 VAR_10->abort_threads++;
 FUNC_4(&VAR_9->kref);
 VAR_11 = FUNC_1(VAR_10);
 FUNC_2(VAR_11, VAR_8, VAR_2);

 VAR_11->tgt = VAR_9;
 VAR_12 = &VAR_11->iu.tmf;
 FUNC_6(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->common.version = 1;
 VAR_12->common.opcode = VAR_4;
 VAR_12->common.length = sizeof(*VAR_12);
 VAR_12->scsi_id = VAR_9->scsi_id;
 VAR_12->cancel_key = VAR_9->cancel_key;

 VAR_14 = FUNC_3(VAR_11, VAR_10, VAR_5);

 if (VAR_14) {
  FUNC_10(VAR_9, "Failed to send cancel event for ADISC. rc=%d\n", VAR_14);
  VAR_10->abort_threads--;
  FUNC_5(&VAR_9->kref, VAR_7);
  FUNC_0(VAR_10);
 } else
  FUNC_9(VAR_9, "Attempting to cancel ADISC\n");
 FUNC_8(VAR_10->host->host_lock, VAR_13);
}
