
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_nodename; int nlp_portname; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_hba {int hbalock; int work_list; } ;
struct TYPE_8__ {int evt_listp; int evt; } ;
struct TYPE_5__ {int wwnn; int wwpn; void* lun; int subcategory; int event_type; } ;
struct TYPE_6__ {void* newval; void* oldval; TYPE_1__ scsi_event; } ;
struct TYPE_7__ {TYPE_2__ queue_depth_evt; } ;
struct lpfc_fast_path_event {TYPE_4__ work_evt; struct lpfc_vport* vport; TYPE_3__ un; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (int *,int *) ;
 struct lpfc_fast_path_event* FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_3,
  struct lpfc_vport *VAR_4,
  struct lpfc_nodelist *VAR_5,
  uint32_t VAR_6,
  uint32_t VAR_7,
  uint32_t VAR_8)
{
 struct lpfc_fast_path_event *VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_2(VAR_3);
 if (!VAR_9)
  return;

 VAR_9->un.queue_depth_evt.scsi_event.event_type =
  VAR_0;
 VAR_9->un.queue_depth_evt.scsi_event.subcategory =
  VAR_1;


 VAR_9->un.queue_depth_evt.scsi_event.lun = VAR_6;
 if (VAR_5 && FUNC_0(VAR_5)) {
  FUNC_4(&VAR_9->un.queue_depth_evt.scsi_event.wwpn,
   &VAR_5->nlp_portname, sizeof(struct lpfc_name));
  FUNC_4(&VAR_9->un.queue_depth_evt.scsi_event.wwnn,
   &VAR_5->nlp_nodename, sizeof(struct lpfc_name));
 }

 VAR_9->un.queue_depth_evt.oldval = VAR_7;
 VAR_9->un.queue_depth_evt.newval = VAR_8;
 VAR_9->vport = VAR_4;

 VAR_9->work_evt.evt = VAR_2;
 FUNC_5(&VAR_3->hbalock, VAR_10);
 FUNC_1(&VAR_9->work_evt.evt_listp, &VAR_3->work_list);
 FUNC_6(&VAR_3->hbalock, VAR_10);
 FUNC_3(VAR_3);

 return;
}
