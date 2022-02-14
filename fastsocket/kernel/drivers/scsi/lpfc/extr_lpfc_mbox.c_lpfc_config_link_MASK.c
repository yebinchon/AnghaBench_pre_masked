
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct lpfc_vport {int fc_myDID; } ;
struct lpfc_hba {scalar_t__ cfg_ack0; int fc_citov; int fc_crtov; int fc_altov; int fc_rttov; int fc_ratov; int fc_arbtov; int fc_edtov; int cfg_cr_count; scalar_t__ cfg_cr_delay; struct lpfc_vport* pport; } ;
struct TYPE_9__ {int cr; int ci; int ack0_enable; int citov; int crtov; int altov; int rttov; int ratov; int arbtov; int edtov; int myId; int cr_count; scalar_t__ cr_delay; } ;
struct TYPE_10__ {TYPE_2__ varCfgLnk; } ;
struct TYPE_11__ {int mbxOwner; int mbxCommand; TYPE_3__ un; } ;
struct TYPE_8__ {TYPE_4__ mb; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;

void
FUNC_1(struct lpfc_hba * VAR_2, LPFC_MBOXQ_t * VAR_3)
{
 struct lpfc_vport *VAR_4 = VAR_2->pport;
 MAILBOX_t *VAR_5 = &VAR_3->u.mb;
 FUNC_0(VAR_3, 0, sizeof (LPFC_MBOXQ_t));




 if (VAR_2->cfg_cr_delay) {
  VAR_5->un.varCfgLnk.cr = 1;
  VAR_5->un.varCfgLnk.ci = 1;
  VAR_5->un.varCfgLnk.cr_delay = VAR_2->cfg_cr_delay;
  VAR_5->un.varCfgLnk.cr_count = VAR_2->cfg_cr_count;
 }

 VAR_5->un.varCfgLnk.myId = VAR_4->fc_myDID;
 VAR_5->un.varCfgLnk.edtov = VAR_2->fc_edtov;
 VAR_5->un.varCfgLnk.arbtov = VAR_2->fc_arbtov;
 VAR_5->un.varCfgLnk.ratov = VAR_2->fc_ratov;
 VAR_5->un.varCfgLnk.rttov = VAR_2->fc_rttov;
 VAR_5->un.varCfgLnk.altov = VAR_2->fc_altov;
 VAR_5->un.varCfgLnk.crtov = VAR_2->fc_crtov;
 VAR_5->un.varCfgLnk.citov = VAR_2->fc_citov;

 if (VAR_2->cfg_ack0)
  VAR_5->un.varCfgLnk.ack0_enable = 1;

 VAR_5->mbxCommand = VAR_0;
 VAR_5->mbxOwner = VAR_1;
 return;
}
