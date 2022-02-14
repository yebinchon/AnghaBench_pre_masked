
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


union lpfc_sli4_cfg_shdr {int request; } ;
typedef scalar_t__ uint8_t ;
struct TYPE_10__ {union lpfc_sli4_cfg_shdr cfg_shdr; int cfg_mhdr; } ;
struct lpfc_mbx_sli4_config {TYPE_2__ header; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_11__ {struct lpfc_mbx_sli4_config sli4_config; } ;
struct TYPE_12__ {TYPE_3__ un; } ;
struct TYPE_9__ {scalar_t__ mbxCommand; } ;
struct TYPE_13__ {TYPE_4__ mqe; TYPE_1__ mb; } ;
struct TYPE_15__ {TYPE_6__* sge_array; TYPE_5__ u; } ;
struct TYPE_14__ {scalar_t__* addr; } ;
typedef TYPE_7__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

uint8_t
FUNC_2(struct lpfc_hba *VAR_4, LPFC_MBOXQ_t *VAR_5)
{
 struct lpfc_mbx_sli4_config *VAR_6;
 union lpfc_sli4_cfg_shdr *VAR_7;

 if (VAR_5->u.mb.mbxCommand != VAR_1)
  return VAR_0;
 VAR_6 = &VAR_5->u.mqe.un.sli4_config;


 if (FUNC_0(VAR_2, &VAR_6->header.cfg_mhdr)) {
  VAR_7 = &VAR_5->u.mqe.un.sli4_config.header.cfg_shdr;
  return FUNC_0(VAR_3, &VAR_7->request);
 }


 if (FUNC_1(!VAR_5->sge_array))
  return VAR_0;
 VAR_7 = (union lpfc_sli4_cfg_shdr *)VAR_5->sge_array->addr[0];
 return FUNC_0(VAR_3, &VAR_7->request);
}
