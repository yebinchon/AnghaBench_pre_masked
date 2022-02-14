
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; int list; struct lpfcMboxq* virt; } ;
struct TYPE_6__ {int sli4_length; int region_id; int type; } ;
struct TYPE_7__ {int * varWords; TYPE_2__ varDmp; } ;
struct TYPE_8__ {TYPE_3__ un; int mbxCommand; } ;
struct TYPE_5__ {TYPE_4__ mb; } ;
struct lpfcMboxq {int * context1; TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 struct lpfcMboxq* FUNC_3 (struct lpfc_hba*,int ,int *) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_5 (struct lpfcMboxq*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct lpfc_hba *VAR_8, struct lpfcMboxq *VAR_9)
{
 struct lpfc_dmabuf *VAR_10 = ((void*)0);
 MAILBOX_t *VAR_11;

 FUNC_5(VAR_9, 0, sizeof(*VAR_9));
 VAR_11 = &VAR_9->u.mb;

 VAR_10 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_3);
 if (VAR_10)
  VAR_10->virt = FUNC_3(VAR_8, 0, &VAR_10->phys);

 if (!VAR_10 || !VAR_10->virt) {
  FUNC_1(VAR_10);

  FUNC_4(VAR_8, VAR_4, VAR_5,
   "2569 lpfc dump config region 23: memory"
   " allocation failed\n");
  return 1;
 }

 FUNC_5(VAR_10->virt, 0, VAR_6);
 FUNC_0(&VAR_10->list);


 VAR_9->context1 = (uint8_t *) VAR_10;

 VAR_11->mbxCommand = VAR_7;
 VAR_11->un.varDmp.type = VAR_0;
 VAR_11->un.varDmp.region_id = VAR_1;
 VAR_11->un.varDmp.sli4_length = VAR_2;
 VAR_11->un.varWords[3] = FUNC_7(VAR_10->phys);
 VAR_11->un.varWords[4] = FUNC_6(VAR_10->phys);
 return 0;
}
