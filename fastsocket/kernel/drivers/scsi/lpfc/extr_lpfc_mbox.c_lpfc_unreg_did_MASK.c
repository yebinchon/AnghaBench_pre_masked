
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_hba {scalar_t__ sli_rev; int* vpi_ids; } ;
struct TYPE_8__ {int vpi; int did; } ;
struct TYPE_9__ {TYPE_1__ varUnregDID; } ;
struct TYPE_11__ {int mbxOwner; int mbxCommand; TYPE_2__ un; } ;
struct TYPE_10__ {TYPE_4__ mb; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;

void
FUNC_1(struct lpfc_hba * VAR_3, uint16_t VAR_4, uint32_t VAR_5,
        LPFC_MBOXQ_t * VAR_6)
{
 MAILBOX_t *VAR_7;

 VAR_7 = &VAR_6->u.mb;
 FUNC_0(VAR_6, 0, sizeof (LPFC_MBOXQ_t));

 VAR_7->un.varUnregDID.did = VAR_5;
 VAR_7->un.varUnregDID.vpi = VAR_4;
 if ((VAR_4 != 0xffff) &&
     (VAR_3->sli_rev == VAR_0))
  VAR_7->un.varUnregDID.vpi = VAR_3->vpi_ids[VAR_4];

 VAR_7->mbxCommand = VAR_1;
 VAR_7->mbxOwner = VAR_2;
 return;
}
