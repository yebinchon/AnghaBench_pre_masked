
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int version; int length; int opcode; } ;
struct ibmvfc_tmf {unsigned long scsi_id; int my_cancel_key; int cancel_key; TYPE_2__ common; } ;
struct ibmvfc_host {int aborting_passthru; scalar_t__ state; TYPE_3__* host; int dev; } ;
struct TYPE_4__ {struct ibmvfc_tmf tmf; } ;
struct ibmvfc_event {TYPE_1__ iu; } ;
struct fc_bsg_job {scalar_t__ dd_data; int shost; } ;
struct TYPE_6__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ibmvfc_host*) ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,unsigned long) ;
 int VAR_9 ;
 struct ibmvfc_event* FUNC_3 (struct ibmvfc_host*) ;
 int FUNC_4 (struct ibmvfc_event*,int ,int ) ;
 int FUNC_5 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_6 (struct ibmvfc_tmf*,int ,int) ;
 struct ibmvfc_host* FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct fc_bsg_job *VAR_10)
{
 struct ibmvfc_host *VAR_11 = FUNC_7(VAR_10->shost);
 unsigned long VAR_12 = (unsigned long)VAR_10->dd_data;
 struct ibmvfc_event *VAR_13;
 struct ibmvfc_tmf *VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_1;
 FUNC_8(VAR_11->host->host_lock, VAR_15);
 if (VAR_11->aborting_passthru || VAR_11->state != VAR_2) {
  FUNC_0(VAR_11);
  FUNC_9(VAR_11->host->host_lock, VAR_15);
  return 0;
 }

 VAR_11->aborting_passthru = 1;
 VAR_13 = FUNC_3(VAR_11);
 FUNC_4(VAR_13, VAR_9, VAR_4);

 VAR_14 = &VAR_13->iu.tmf;
 FUNC_6(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->common.version = 1;
 VAR_14->common.opcode = VAR_6;
 VAR_14->common.length = sizeof(*VAR_14);
 VAR_14->scsi_id = VAR_12;
 VAR_14->cancel_key = VAR_5;
 VAR_14->my_cancel_key = VAR_3;
 VAR_16 = FUNC_5(VAR_13, VAR_11, VAR_8);

 if (VAR_16 != 0) {
  VAR_11->aborting_passthru = 0;
  FUNC_1(VAR_11->dev, "Failed to send cancel event. rc=%d\n", VAR_16);
  VAR_16 = -VAR_0;
 } else
  FUNC_2(VAR_11->dev, "Cancelling passthru command to port id 0x%lx\n",
    VAR_12);

 FUNC_9(VAR_11->host->host_lock, VAR_15);

 VAR_7;
 return VAR_16;
}
