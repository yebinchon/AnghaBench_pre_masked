
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_11__ {size_t* rpi_ids; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; TYPE_2__ sli4_hba; TYPE_1__* pport; } ;
struct TYPE_12__ {scalar_t__ mbxStatus; } ;
struct TYPE_13__ {TYPE_3__ mb; } ;
struct TYPE_14__ {TYPE_4__ u; } ;
struct TYPE_10__ {int vpi; } ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,size_t) ;
 int FUNC_1 (struct lpfc_hba*,TYPE_5__*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,size_t,TYPE_5__*) ;
 TYPE_5__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_5(struct lpfc_hba *VAR_7, uint16_t VAR_8)
{
 LPFC_MBOXQ_t *VAR_9;
 int VAR_10;


 VAR_9 = FUNC_3(VAR_7->mbox_mem_pool, VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 if (VAR_7->sli_rev < VAR_4)
  FUNC_2(VAR_7, 0, VAR_8, VAR_9);
 else
  FUNC_2(VAR_7, VAR_7->pport->vpi,
     VAR_7->sli4_hba.rpi_ids[VAR_8], VAR_9);

 VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_3);

 if ((VAR_10 != VAR_5) || (VAR_9->u.mb.mbxStatus)) {
  if (VAR_10 != VAR_6)
   FUNC_4(VAR_9, VAR_7->mbox_mem_pool);
  return -VAR_0;
 }
 FUNC_4(VAR_9, VAR_7->mbox_mem_pool);
 if (VAR_7->sli_rev == VAR_4)
  FUNC_0(VAR_7, VAR_8);
 return 0;
}
