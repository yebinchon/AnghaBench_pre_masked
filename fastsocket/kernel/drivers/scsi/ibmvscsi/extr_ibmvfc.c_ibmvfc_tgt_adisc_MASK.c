
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct ibmvfc_target {int kref; TYPE_6__ timer; int cancel_key; int scsi_id; struct ibmvfc_host* vhost; } ;
struct TYPE_12__ {int* payload; } ;
struct TYPE_11__ {int cancel_key; int scsi_id; int flags; } ;
struct ibmvfc_passthru_mad {TYPE_3__ fc_iu; TYPE_2__ iu; } ;
struct ibmvfc_host {scalar_t__ discovery_threads; TYPE_5__* login_buf; } ;
struct TYPE_10__ {struct ibmvfc_passthru_mad passthru; } ;
struct ibmvfc_event {TYPE_1__ iu; struct ibmvfc_target* tgt; } ;
struct TYPE_13__ {int scsi_id; int node_name; int port_name; } ;
struct TYPE_14__ {TYPE_4__ resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct ibmvfc_event* FUNC_2 (struct ibmvfc_host*) ;
 int FUNC_3 (struct ibmvfc_event*,int ,int ) ;
 int FUNC_4 (struct ibmvfc_event*) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_6 (struct ibmvfc_target*,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int*,int *,int) ;
 int FUNC_10 (TYPE_6__*,scalar_t__) ;
 int FUNC_11 (struct ibmvfc_target*,char*) ;
 scalar_t__ FUNC_12 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_13(struct ibmvfc_target *VAR_13)
{
 struct ibmvfc_passthru_mad *VAR_14;
 struct ibmvfc_host *VAR_15 = VAR_13->vhost;
 struct ibmvfc_event *VAR_16;

 if (VAR_15->discovery_threads >= VAR_8)
  return;

 FUNC_7(&VAR_13->kref);
 VAR_16 = FUNC_2(VAR_15);
 VAR_15->discovery_threads++;
 FUNC_3(VAR_16, VAR_11, VAR_5);
 VAR_16->tgt = VAR_13;

 FUNC_4(VAR_16);
 VAR_14 = &VAR_16->iu.passthru;
 VAR_14->iu.flags = VAR_4;
 VAR_14->iu.scsi_id = VAR_13->scsi_id;
 VAR_14->iu.cancel_key = VAR_13->cancel_key;

 VAR_14->fc_iu.payload[0] = VAR_1;
 FUNC_9(&VAR_14->fc_iu.payload[2], &VAR_15->login_buf->resp.port_name,
        sizeof(VAR_15->login_buf->resp.port_name));
 FUNC_9(&VAR_14->fc_iu.payload[4], &VAR_15->login_buf->resp.node_name,
        sizeof(VAR_15->login_buf->resp.node_name));
 VAR_14->fc_iu.payload[6] = VAR_15->login_buf->resp.scsi_id & 0x00ffffff;

 if (FUNC_12(&VAR_13->timer))
  FUNC_10(&VAR_13->timer, VAR_12 + (VAR_3 * VAR_0));
 else {
  VAR_13->timer.data = (unsigned long) VAR_13;
  VAR_13->timer.expires = VAR_12 + (VAR_3 * VAR_0);
  VAR_13->timer.function = (void (*)(unsigned long))VAR_9;
  FUNC_0(&VAR_13->timer);
 }

 FUNC_6(VAR_13, VAR_6);
 if (FUNC_5(VAR_16, VAR_15, VAR_2)) {
  VAR_15->discovery_threads--;
  FUNC_1(&VAR_13->timer);
  FUNC_6(VAR_13, VAR_7);
  FUNC_8(&VAR_13->kref, VAR_10);
 } else
  FUNC_11(VAR_13, "Sent ADISC\n");
}
