
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct lpfc_hba {int dummy; } ;
struct TYPE_9__ {int cv; scalar_t__ resp_offset; scalar_t__ co; int word_cnt; int region_id; scalar_t__ entry_index; int type; } ;
struct TYPE_10__ {TYPE_2__ varDmp; } ;
struct TYPE_11__ {TYPE_3__ un; int mbxOwner; int mbxCommand; } ;
struct TYPE_8__ {TYPE_4__ mb; } ;
struct TYPE_12__ {void* context2; TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;

void
FUNC_1(struct lpfc_hba *VAR_5, LPFC_MBOXQ_t *VAR_6)
{
 MAILBOX_t *VAR_7;
 void *VAR_8;

 VAR_7 = &VAR_6->u.mb;

 VAR_8 = VAR_6->context2;


 FUNC_0(VAR_6, 0, sizeof(LPFC_MBOXQ_t));
 VAR_7->mbxCommand = VAR_1;
 VAR_7->mbxOwner = VAR_2;
 VAR_7->un.varDmp.cv = 1;
 VAR_7->un.varDmp.type = VAR_0;
 VAR_7->un.varDmp.entry_index = 0;
 VAR_7->un.varDmp.region_id = VAR_3;
 VAR_7->un.varDmp.word_cnt = VAR_4;
 VAR_7->un.varDmp.co = 0;
 VAR_7->un.varDmp.resp_offset = 0;
 VAR_6->context2 = VAR_8;
 return;
}
