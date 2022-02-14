
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int roles; } ;
struct ibmvfc_target {int add_rport; int kref; int logo_rcvd; TYPE_3__ ids; int need_login; } ;
struct TYPE_6__ {int status; } ;
struct ibmvfc_prli_svc_parms {int flags; int service_parms; int type; } ;
struct ibmvfc_process_login {int status; int error; TYPE_2__ common; struct ibmvfc_prli_svc_parms parms; } ;
struct ibmvfc_host {int work_wait_q; int discovery_threads; } ;
struct ibmvfc_event {TYPE_1__* xfer_iu; struct ibmvfc_host* vhost; struct ibmvfc_target* tgt; } ;
struct TYPE_8__ {int retry; int logged_in; } ;
struct TYPE_5__ {struct ibmvfc_process_login prli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ibmvfc_event*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct ibmvfc_target*,int ) ;
 int FUNC_5 (struct ibmvfc_target*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *,int ) ;
 TYPE_4__* VAR_14 ;
 int FUNC_7 (struct ibmvfc_target*,char*,int ,int,int) ;
 int FUNC_8 (struct ibmvfc_target*,int,char*,int ,int,int ,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ibmvfc_event *VAR_15)
{
 struct ibmvfc_target *VAR_16 = VAR_15->tgt;
 struct ibmvfc_host *VAR_17 = VAR_15->vhost;
 struct ibmvfc_process_login *VAR_18 = &VAR_15->xfer_iu->prli;
 struct ibmvfc_prli_svc_parms *VAR_19 = &VAR_18->parms;
 u32 VAR_20 = VAR_18->common.status;
 int VAR_21, VAR_22 = VAR_2;

 VAR_17->discovery_threads--;
 FUNC_5(VAR_16, VAR_9);
 switch (VAR_20) {
 case 128:
  FUNC_7(VAR_16, "Process Login succeeded: %X %02X %04X\n",
   VAR_19->type, VAR_19->flags, VAR_19->service_parms);

  if (VAR_19->type == VAR_7) {
   VAR_21 = FUNC_2(VAR_19->flags);
   if (VAR_14[VAR_21].logged_in) {
    if (VAR_19->flags & VAR_4) {
     VAR_16->need_login = 0;
     VAR_16->ids.roles = 0;
     if (VAR_19->service_parms & VAR_6)
      VAR_16->ids.roles |= VAR_1;
     if (VAR_19->service_parms & VAR_5)
      VAR_16->ids.roles |= VAR_0;
     VAR_16->add_rport = 1;
    } else
     FUNC_5(VAR_16, VAR_8);
   } else if (VAR_14[VAR_21].retry)
    FUNC_4(VAR_16, VAR_13);
   else
    FUNC_5(VAR_16, VAR_8);
  } else
   FUNC_5(VAR_16, VAR_8);
  break;
 case 130:
  break;
 case 131:
  FUNC_4(VAR_16, VAR_13);
  break;
 case 129:
 default:
  if ((VAR_18->status & VAR_10) && VAR_18->error == VAR_3)
   VAR_22 += FUNC_4(VAR_16, VAR_12);
  else if (VAR_16->logo_rcvd)
   VAR_22 += FUNC_4(VAR_16, VAR_12);
  else if (FUNC_3(VAR_18->status, VAR_18->error))
   VAR_22 += FUNC_4(VAR_16, VAR_13);
  else
   FUNC_5(VAR_16, VAR_8);

  FUNC_8(VAR_16, VAR_22, "Process Login failed: %s (%x:%x) rc=0x%02X\n",
   FUNC_1(VAR_18->status, VAR_18->error),
   VAR_18->status, VAR_18->error, VAR_20);
  break;
 };

 FUNC_6(&VAR_16->kref, VAR_11);
 FUNC_0(VAR_15);
 FUNC_9(&VAR_17->work_wait_q);
}
