
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ibmvfc_target {scalar_t__ scsi_id; scalar_t__ new_scsi_id; int kref; } ;
struct TYPE_4__ {int status; } ;
struct ibmvfc_implicit_logout {TYPE_2__ common; } ;
struct ibmvfc_host {scalar_t__ action; int work_wait_q; int discovery_threads; } ;
struct ibmvfc_event {TYPE_1__* xfer_iu; struct ibmvfc_host* vhost; struct ibmvfc_target* tgt; } ;
struct TYPE_3__ {struct ibmvfc_implicit_logout implicit_logout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ibmvfc_event*) ;
 int FUNC_1 (struct ibmvfc_target*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct ibmvfc_target*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ibmvfc_target*,char*) ;
 int FUNC_5 (struct ibmvfc_target*,char*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ibmvfc_event *VAR_6)
{
 struct ibmvfc_target *VAR_7 = VAR_6->tgt;
 struct ibmvfc_host *VAR_8 = VAR_6->vhost;
 struct ibmvfc_implicit_logout *VAR_9 = &VAR_6->xfer_iu->implicit_logout;
 u32 VAR_10 = VAR_9->common.status;

 VAR_8->discovery_threads--;
 FUNC_0(VAR_6);
 FUNC_2(VAR_7, VAR_3);

 switch (VAR_10) {
 case 128:
  FUNC_4(VAR_7, "Implicit Logout succeeded\n");
  break;
 case 130:
  FUNC_3(&VAR_7->kref, VAR_4);
  FUNC_6(&VAR_8->work_wait_q);
  return;
 case 129:
 default:
  FUNC_5(VAR_7, "Implicit Logout failed: rc=0x%02X\n", VAR_10);
  break;
 };

 if (VAR_8->action == VAR_1)
  FUNC_1(VAR_7, VAR_5);
 else if (VAR_8->action == VAR_0 &&
   VAR_7->scsi_id != VAR_7->new_scsi_id)
  FUNC_2(VAR_7, VAR_2);
 FUNC_3(&VAR_7->kref, VAR_4);
 FUNC_6(&VAR_8->work_wait_q);
}
