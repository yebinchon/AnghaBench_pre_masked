
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibmvfc_target {int kref; int scsi_id; struct ibmvfc_host* vhost; } ;
struct TYPE_6__ {int service_parms; int flags; int type; } ;
struct TYPE_5__ {int version; int length; int opcode; } ;
struct ibmvfc_process_login {TYPE_3__ parms; int scsi_id; TYPE_2__ common; } ;
struct ibmvfc_host {scalar_t__ discovery_threads; } ;
struct TYPE_4__ {struct ibmvfc_process_login prli; } ;
struct ibmvfc_event {TYPE_1__ iu; struct ibmvfc_target* tgt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct ibmvfc_event* FUNC_0 (struct ibmvfc_host*) ;
 int FUNC_1 (struct ibmvfc_event*,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_3 (struct ibmvfc_target*,int ) ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct ibmvfc_process_login*,int ,int) ;
 int FUNC_7 (struct ibmvfc_target*,char*) ;

__attribute__((used)) static void FUNC_8(struct ibmvfc_target *VAR_11)
{
 struct ibmvfc_process_login *VAR_12;
 struct ibmvfc_host *VAR_13 = VAR_11->vhost;
 struct ibmvfc_event *VAR_14;

 if (VAR_13->discovery_threads >= VAR_8)
  return;

 FUNC_4(&VAR_11->kref);
 VAR_14 = FUNC_0(VAR_13);
 VAR_13->discovery_threads++;
 FUNC_1(VAR_14, VAR_10, VAR_0);
 VAR_14->tgt = VAR_11;
 VAR_12 = &VAR_14->iu.prli;
 FUNC_6(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->common.version = 1;
 VAR_12->common.opcode = VAR_3;
 VAR_12->common.length = sizeof(*VAR_12);
 VAR_12->scsi_id = VAR_11->scsi_id;

 VAR_12->parms.type = VAR_4;
 VAR_12->parms.flags = VAR_1;
 VAR_12->parms.service_parms = VAR_2;

 FUNC_3(VAR_11, VAR_5);
 if (FUNC_2(VAR_14, VAR_13, VAR_7)) {
  VAR_13->discovery_threads--;
  FUNC_3(VAR_11, VAR_6);
  FUNC_5(&VAR_11->kref, VAR_9);
 } else
  FUNC_7(VAR_11, "Sent process login\n");
}
