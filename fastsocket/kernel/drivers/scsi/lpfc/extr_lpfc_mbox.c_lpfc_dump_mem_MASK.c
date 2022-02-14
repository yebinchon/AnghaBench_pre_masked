
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
typedef void* uint16_t ;
struct lpfc_hba {int dummy; } ;
struct TYPE_9__ {int cv; int word_cnt; scalar_t__ resp_offset; scalar_t__ co; void* region_id; void* entry_index; int type; } ;
struct TYPE_10__ {TYPE_2__ varDmp; } ;
struct TYPE_11__ {int mbxOwner; TYPE_3__ un; int mbxCommand; } ;
struct TYPE_8__ {TYPE_4__ mb; } ;
struct TYPE_12__ {void* context2; TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;

void
FUNC_1(struct lpfc_hba *VAR_4, LPFC_MBOXQ_t *VAR_5, uint16_t VAR_6,
  uint16_t VAR_7)
{
 MAILBOX_t *VAR_8;
 void *VAR_9;

 VAR_8 = &VAR_5->u.mb;
 VAR_9 = VAR_5->context2;


 FUNC_0(VAR_5, 0, sizeof (LPFC_MBOXQ_t));
 VAR_8->mbxCommand = VAR_2;
 VAR_8->un.varDmp.cv = 1;
 VAR_8->un.varDmp.type = VAR_0;
 VAR_8->un.varDmp.entry_index = VAR_6;
 VAR_8->un.varDmp.region_id = VAR_7;
 VAR_8->un.varDmp.word_cnt = (VAR_1 / sizeof (uint32_t));
 VAR_8->un.varDmp.co = 0;
 VAR_8->un.varDmp.resp_offset = 0;
 VAR_5->context2 = VAR_9;
 VAR_8->mbxOwner = VAR_3;
 return;
}
