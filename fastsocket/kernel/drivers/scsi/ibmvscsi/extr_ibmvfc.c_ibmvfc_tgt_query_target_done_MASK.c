
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ibmvfc_target {int kref; int scsi_id; int new_scsi_id; } ;
struct TYPE_4__ {int status; } ;
struct ibmvfc_query_tgt {int status; int fc_explain; int fc_type; int error; int scsi_id; TYPE_2__ common; } ;
struct ibmvfc_host {int work_wait_q; int discovery_threads; } ;
struct ibmvfc_event {TYPE_1__* xfer_iu; struct ibmvfc_host* vhost; struct ibmvfc_target* tgt; } ;
struct TYPE_3__ {struct ibmvfc_query_tgt query_tgt; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ibmvfc_event*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ibmvfc_target*,int ) ;
 int VAR_6 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct ibmvfc_target*,int ) ;
 int FUNC_7 (struct ibmvfc_target*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct ibmvfc_target*,char*) ;
 int FUNC_10 (struct ibmvfc_target*,int,char*,int ,int,int ,int ,int ,int ,int ,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct ibmvfc_event *VAR_10)
{
 struct ibmvfc_target *VAR_11 = VAR_10->tgt;
 struct ibmvfc_host *VAR_12 = VAR_10->vhost;
 struct ibmvfc_query_tgt *VAR_13 = &VAR_10->xfer_iu->query_tgt;
 u32 VAR_14 = VAR_13->common.status;
 int VAR_15 = VAR_0;

 VAR_12->discovery_threads--;
 FUNC_7(VAR_11, VAR_4);
 switch (VAR_14) {
 case 128:
  FUNC_9(VAR_11, "Query Target succeeded\n");
  VAR_11->new_scsi_id = VAR_13->scsi_id;
  if (VAR_13->scsi_id != VAR_11->scsi_id)
   FUNC_4(VAR_11, VAR_8);
  else
   FUNC_4(VAR_11, VAR_7);
  break;
 case 130:
  break;
 case 131:
  FUNC_6(VAR_11, VAR_9);
  break;
 case 129:
 default:
  if ((VAR_13->status & VAR_1) == VAR_1 &&
      VAR_13->error == VAR_5 &&
      VAR_13->fc_explain == VAR_2)
   FUNC_7(VAR_11, VAR_3);
  else if (FUNC_5(VAR_13->status, VAR_13->error))
   VAR_15 += FUNC_6(VAR_11, VAR_9);
  else
   FUNC_7(VAR_11, VAR_3);

  FUNC_10(VAR_11, VAR_15, "Query Target failed: %s (%x:%x) %s (%x) %s (%x) rc=0x%02X\n",
   FUNC_1(VAR_13->status, VAR_13->error), VAR_13->status, VAR_13->error,
   FUNC_2(VAR_13->fc_type), VAR_13->fc_type,
   FUNC_3(VAR_13->fc_explain), VAR_13->fc_explain, VAR_14);
  break;
 };

 FUNC_8(&VAR_11->kref, VAR_6);
 FUNC_0(VAR_10);
 FUNC_11(&VAR_12->work_wait_q);
}
