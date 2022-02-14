
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_state; } ;
struct lpfc_hba {TYPE_1__* pport; } ;
struct TYPE_7__ {int * varWords; } ;
struct TYPE_9__ {TYPE_2__ un; int mbxStatus; } ;
struct TYPE_8__ {TYPE_4__ mb; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct TYPE_6__ {int load_flag; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_vport*,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lpfc_vport *VAR_1,
 struct lpfc_nodelist *VAR_2, void *VAR_3, uint32_t VAR_4)
{
 struct lpfc_hba *VAR_5;
 LPFC_MBOXQ_t *VAR_6 = (LPFC_MBOXQ_t *) VAR_3;
 MAILBOX_t *VAR_7 = &VAR_6->u.mb;
 uint16_t VAR_8;

 VAR_5 = VAR_1->phba;

 if (!(VAR_5->pport->load_flag & VAR_0) &&
  !VAR_7->mbxStatus) {
  VAR_8 = VAR_6->u.mb.un.varWords[0];
  FUNC_0(VAR_5, VAR_1, VAR_8);
 }
 return VAR_2->nlp_state;
}
