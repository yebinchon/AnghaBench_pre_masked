
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; scalar_t__ nlp_state; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_5__ {int * context2; int * context1; struct lpfc_vport* vport; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,TYPE_1__*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct lpfc_hba *VAR_4, LPFC_MBOXQ_t *VAR_5)
{
 struct lpfc_vport *VAR_6 = VAR_5->vport;
 struct lpfc_dmabuf *VAR_7 = (struct lpfc_dmabuf *) (VAR_5->context1);
 struct lpfc_nodelist *VAR_8 = (struct lpfc_nodelist *) VAR_5->context2;
 struct Scsi_Host *VAR_9 = FUNC_4(VAR_6);

 VAR_5->context1 = ((void*)0);
 VAR_5->context2 = ((void*)0);

 if (VAR_8->nlp_flag & VAR_2)
  VAR_8->nlp_flag &= ~VAR_2;

 if (VAR_8->nlp_flag & VAR_1 ||
     VAR_8->nlp_state != VAR_3) {
  FUNC_6(VAR_9->host_lock);
  VAR_8->nlp_flag &= ~VAR_1;
  FUNC_7(VAR_9->host_lock);
 } else

  FUNC_1(VAR_6, VAR_8, VAR_5,
    VAR_0);

 FUNC_2(VAR_4, VAR_7->virt, VAR_7->phys);
 FUNC_0(VAR_7);
 FUNC_5(VAR_5, VAR_4->mbox_mem_pool);



 FUNC_3(VAR_8);

 return;
}
