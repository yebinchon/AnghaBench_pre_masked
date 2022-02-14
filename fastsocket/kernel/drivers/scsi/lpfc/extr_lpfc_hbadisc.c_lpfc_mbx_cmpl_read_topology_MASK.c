
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; int port_state; } ;
struct lpfc_mbx_read_top {scalar_t__ eventTag; } ;
struct TYPE_16__ {int sli_flag; TYPE_1__* ring; } ;
struct TYPE_14__ {int LinkDown; int LinkUp; int LinkMultiEvent; } ;
struct lpfc_hba {scalar_t__ link_state; scalar_t__ fc_eventTag; scalar_t__ sli_rev; int link_flag; int mbox_mem_pool; TYPE_6__ sli; int wait_4_mlo_m_q; int wait_4_mlo_maint_flg; TYPE_5__* pport; TYPE_4__ fc_stat; int * alpa_map; int link_events; int hbalock; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_12__ {int varReadTop; } ;
struct TYPE_17__ {TYPE_2__ un; scalar_t__ mbxStatus; } ;
struct TYPE_13__ {TYPE_7__ mb; } ;
struct TYPE_18__ {TYPE_3__ u; scalar_t__ context1; struct lpfc_vport* vport; } ;
struct TYPE_15__ {int port_state; } ;
struct TYPE_11__ {int flag; } ;
typedef TYPE_7__ MAILBOX_t ;
typedef TYPE_8__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_mbx_read_top*) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_mbx_read_top*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (struct lpfc_hba*,int ,int ,char*,scalar_t__,...) ;
 struct Scsi_Host* FUNC_9 (struct lpfc_vport*) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (TYPE_8__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void
FUNC_15(struct lpfc_hba *VAR_19, LPFC_MBOXQ_t *VAR_20)
{
 struct lpfc_vport *VAR_21 = VAR_20->vport;
 struct Scsi_Host *VAR_22 = FUNC_9(VAR_21);
 struct lpfc_mbx_read_top *VAR_23;
 MAILBOX_t *VAR_24 = &VAR_20->u.mb;
 struct lpfc_dmabuf *VAR_25 = (struct lpfc_dmabuf *) (VAR_20->context1);


 VAR_19->sli.ring[VAR_6].flag &= ~VAR_11;

 if (VAR_24->mbxStatus) {
  FUNC_8(VAR_19, VAR_2, VAR_3,
    "1307 READ_LA mbox error x%x state x%x\n",
    VAR_24->mbxStatus, VAR_21->port_state);
  FUNC_6(VAR_19);
  VAR_19->link_state = VAR_7;
  goto lpfc_mbx_cmpl_read_topology_free_mbuf;
 }

 VAR_23 = (struct lpfc_mbx_read_top *) &VAR_20->u.mb.un.varReadTop;

 FUNC_10(&VAR_19->alpa_map[0], VAR_25->virt, 128);

 FUNC_12(VAR_22->host_lock);
 if (FUNC_0(VAR_18, VAR_23))
  VAR_21->fc_flag |= VAR_0;
 else
  VAR_21->fc_flag &= ~VAR_0;
 FUNC_13(VAR_22->host_lock);

 if (VAR_19->fc_eventTag <= VAR_23->eventTag) {
  VAR_19->fc_stat.LinkMultiEvent++;
  if (FUNC_0(VAR_14, VAR_23) == VAR_5)
   if (VAR_19->fc_eventTag != 0)
    FUNC_4(VAR_19);
 }

 VAR_19->fc_eventTag = VAR_23->eventTag;
 if (VAR_19->sli_rev < VAR_10) {
  FUNC_12(&VAR_19->hbalock);
  if (FUNC_0(VAR_17, VAR_23))
   VAR_19->sli.sli_flag |= VAR_9;
  else
   VAR_19->sli.sli_flag &= ~VAR_9;
  FUNC_13(&VAR_19->hbalock);
 }

 VAR_19->link_events++;
 if ((FUNC_0(VAR_14, VAR_23) == VAR_5) &&
     !(VAR_19->sli.sli_flag & VAR_9)) {
  VAR_19->fc_stat.LinkUp++;
  if (VAR_19->link_flag & VAR_12) {
   FUNC_8(VAR_19, VAR_1, VAR_3,
     "1306 Link Up Event in loop back mode "
     "x%x received Data: x%x x%x x%x x%x\n",
     VAR_23->eventTag, VAR_19->fc_eventTag,
     FUNC_0(VAR_13,
            VAR_23),
     FUNC_0(VAR_16, VAR_23),
     VAR_19->alpa_map[0]);
  } else {
   FUNC_8(VAR_19, VAR_1, VAR_3,
     "1303 Link Up Event x%x received "
     "Data: x%x x%x x%x x%x x%x x%x %d\n",
     VAR_23->eventTag, VAR_19->fc_eventTag,
     FUNC_0(VAR_13,
            VAR_23),
     FUNC_0(VAR_16, VAR_23),
     VAR_19->alpa_map[0],
     FUNC_0(VAR_17, VAR_23),
     FUNC_0(VAR_15, VAR_23),
     VAR_19->wait_4_mlo_maint_flg);
  }
  FUNC_7(VAR_19, VAR_23);
 } else if (FUNC_0(VAR_14, VAR_23) ==
     VAR_4) {
  VAR_19->fc_stat.LinkDown++;
  if (VAR_19->link_flag & VAR_12)
   FUNC_8(VAR_19, VAR_1, VAR_3,
    "1308 Link Down Event in loop back mode "
    "x%x received "
    "Data: x%x x%x x%x\n",
    VAR_23->eventTag, VAR_19->fc_eventTag,
    VAR_19->pport->port_state, VAR_21->fc_flag);
  else
   FUNC_8(VAR_19, VAR_1, VAR_3,
    "1305 Link Down Event x%x received "
    "Data: x%x x%x x%x x%x x%x\n",
    VAR_23->eventTag, VAR_19->fc_eventTag,
    VAR_19->pport->port_state, VAR_21->fc_flag,
    FUNC_0(VAR_17, VAR_23),
    FUNC_0(VAR_15, VAR_23));
  FUNC_6(VAR_19);
 }
 if ((VAR_19->sli.sli_flag & VAR_9) &&
     ((FUNC_0(VAR_14, VAR_23) == VAR_5))) {
  if (VAR_19->link_state != VAR_8) {
   VAR_19->fc_stat.LinkDown++;
   FUNC_8(VAR_19, VAR_1, VAR_3,
    "1312 Link Down Event x%x received "
    "Data: x%x x%x x%x\n",
    VAR_23->eventTag, VAR_19->fc_eventTag,
    VAR_19->pport->port_state, VAR_21->fc_flag);
   FUNC_6(VAR_19);
  } else
   FUNC_2(VAR_19);

  FUNC_8(VAR_19, VAR_1, VAR_3,
    "1310 Menlo Maint Mode Link up Event x%x rcvd "
    "Data: x%x x%x x%x\n",
    VAR_23->eventTag, VAR_19->fc_eventTag,
    VAR_19->pport->port_state, VAR_21->fc_flag);





  if (VAR_19->wait_4_mlo_maint_flg) {
   VAR_19->wait_4_mlo_maint_flg = 0;
   FUNC_14(&VAR_19->wait_4_mlo_m_q);
  }
 }

 if ((VAR_19->sli_rev < VAR_10) &&
     FUNC_0(VAR_15, VAR_23)) {
  if (VAR_19->sli.sli_flag & VAR_9)
   FUNC_3(VAR_19, VAR_21);
  FUNC_8(VAR_19, VAR_2, VAR_3,
    "1311 fa %d\n",
    FUNC_0(VAR_15, VAR_23));
 }

lpfc_mbx_cmpl_read_topology_free_mbuf:
 FUNC_5(VAR_19, VAR_25->virt, VAR_25->phys);
 FUNC_1(VAR_25);
 FUNC_11(VAR_20, VAR_19->mbox_mem_pool);
 return;
}
