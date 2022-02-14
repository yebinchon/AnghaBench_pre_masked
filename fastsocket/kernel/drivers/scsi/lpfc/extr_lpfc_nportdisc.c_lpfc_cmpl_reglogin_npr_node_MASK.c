
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
struct lpfc_vport {TYPE_3__* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_rpi; } ;
struct TYPE_6__ {int * varWords; } ;
struct TYPE_9__ {TYPE_1__ un; int mbxStatus; } ;
struct TYPE_7__ {TYPE_4__ mb; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_8__ {scalar_t__ sli_rev; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lpfc_vport *VAR_4,
       struct lpfc_nodelist *VAR_5,
       void *VAR_6, uint32_t VAR_7)
{
 LPFC_MBOXQ_t *VAR_8 = (LPFC_MBOXQ_t *) VAR_6;
 MAILBOX_t *VAR_9 = &VAR_8->u.mb;

 if (!VAR_9->mbxStatus) {

  if (VAR_4->phba->sli_rev < VAR_0)
   VAR_5->nlp_rpi = VAR_9->un.varWords[0];
  VAR_5->nlp_flag |= VAR_2;
 } else {
  if (VAR_5->nlp_flag & VAR_1) {
   FUNC_0(VAR_4, VAR_5);
   return VAR_3;
  }
 }
 return VAR_5->nlp_state;
}
