
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint16_t ;
struct lpfc_vport {int vpi; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; size_t nlp_rpi; } ;
struct TYPE_7__ {size_t* rpi_ids; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; TYPE_1__ sli4_hba; } ;
struct TYPE_8__ {int mbox_cmpl; struct lpfc_nodelist* context1; struct lpfc_vport* vport; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int VAR_8 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_2__*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,size_t,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

int
FUNC_5(struct lpfc_vport *VAR_9, struct lpfc_nodelist *VAR_10)
{
 struct lpfc_hba *VAR_11 = VAR_9->phba;
 LPFC_MBOXQ_t *VAR_12;
 int VAR_13;
 uint16_t VAR_14;

 if (VAR_10->nlp_flag & VAR_6) {
  VAR_12 = FUNC_3(VAR_11->mbox_mem_pool, VAR_0);
  if (VAR_12) {

   VAR_14 = VAR_10->nlp_rpi;
   if (VAR_11->sli_rev == VAR_1)
    VAR_14 = VAR_11->sli4_hba.rpi_ids[VAR_10->nlp_rpi];

   FUNC_2(VAR_11, VAR_9->vpi, VAR_14, VAR_12);
   VAR_12->vport = VAR_9;
   if (VAR_10->nlp_flag & VAR_4) {
    VAR_12->context1 = VAR_10;
    VAR_12->mbox_cmpl = VAR_7;
   } else {
    VAR_12->mbox_cmpl = VAR_8;
   }

   VAR_13 = FUNC_1(VAR_11, VAR_12, VAR_3);
   if (VAR_13 == VAR_2)
    FUNC_4(VAR_12, VAR_11->mbox_mem_pool);
  }
  FUNC_0(VAR_11, VAR_10);

  if (VAR_11->sli_rev != VAR_1)
   VAR_10->nlp_rpi = 0;
  VAR_10->nlp_flag &= ~VAR_6;
  VAR_10->nlp_flag &= ~VAR_5;
  return 1;
 }
 return 0;
}
