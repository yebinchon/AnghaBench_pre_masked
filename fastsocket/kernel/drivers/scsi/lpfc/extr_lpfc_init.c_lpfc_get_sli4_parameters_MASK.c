
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_sli4_parameters {scalar_t__ sge_supp_len; } ;
struct lpfc_sli4_cfg_mhdr {int dummy; } ;
struct lpfc_pc_sli4_params {scalar_t__ sge_supp_len; void* sgl_pp_align; void* sgl_pages_max; void* rqv; void* wqv; void* mqv; void* cqv; void* loopbk_scope; void* featurelevel_2; void* featurelevel_1; void* sli_family; void* sli_rev; void* if_type; } ;
struct TYPE_12__ {struct lpfc_sli4_parameters sli4_parameters; } ;
struct TYPE_13__ {TYPE_2__ get_sli4_parameters; } ;
struct lpfc_mqe {TYPE_3__ un; } ;
struct lpfc_mbx_get_sli4_parameters {int dummy; } ;
struct TYPE_14__ {int rpi_hdrs_in_use; void* extents_in_use; struct lpfc_pc_sli4_params pc_sli4_params; int intr_enable; } ;
struct lpfc_hba {TYPE_4__ sli4_hba; int sli3_options; } ;
struct TYPE_11__ {struct lpfc_mqe mqe; } ;
struct TYPE_15__ {TYPE_1__ u; } ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,struct lpfc_sli4_parameters*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_5__*) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_5__*,int ,int ,int,int ) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_5__*,int ) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(struct lpfc_hba *VAR_21, LPFC_MBOXQ_t *VAR_22)
{
 int VAR_23;
 struct lpfc_mqe *VAR_24 = &VAR_22->u.mqe;
 struct lpfc_pc_sli4_params *VAR_25;
 uint32_t VAR_26;
 int VAR_27;
 struct lpfc_sli4_parameters *VAR_28;






 VAR_21->sli4_hba.rpi_hdrs_in_use = 1;


 VAR_27 = (sizeof(struct lpfc_mbx_get_sli4_parameters) -
    sizeof(struct lpfc_sli4_cfg_mhdr));
 FUNC_2(VAR_21, VAR_22, VAR_2,
    VAR_1,
    VAR_27, VAR_3);
 if (!VAR_21->sli4_hba.intr_enable)
  VAR_23 = FUNC_3(VAR_21, VAR_22, VAR_5);
 else {
  VAR_26 = FUNC_1(VAR_21, VAR_22);
  VAR_23 = FUNC_4(VAR_21, VAR_22, VAR_26);
 }
 if (FUNC_5(VAR_23))
  return VAR_23;
 VAR_25 = &VAR_21->sli4_hba.pc_sli4_params;
 VAR_28 = &VAR_24->un.get_sli4_parameters.sli4_parameters;
 VAR_25->if_type = FUNC_0(VAR_9, VAR_28);
 VAR_25->sli_rev = FUNC_0(VAR_18, VAR_28);
 VAR_25->sli_family = FUNC_0(VAR_15, VAR_28);
 VAR_25->featurelevel_1 = FUNC_0(VAR_16,
          VAR_28);
 VAR_25->featurelevel_2 = FUNC_0(VAR_17,
          VAR_28);
 if (FUNC_0(VAR_11, VAR_28))
  VAR_21->sli3_options |= VAR_4;
 else
  VAR_21->sli3_options &= ~VAR_4;
 VAR_25->sge_supp_len = VAR_28->sge_supp_len;
 VAR_25->loopbk_scope = FUNC_0(VAR_20, VAR_28);
 VAR_25->cqv = FUNC_0(VAR_6, VAR_28);
 VAR_25->mqv = FUNC_0(VAR_10, VAR_28);
 VAR_25->wqv = FUNC_0(VAR_19, VAR_28);
 VAR_25->rqv = FUNC_0(VAR_12, VAR_28);
 VAR_25->sgl_pages_max = FUNC_0(VAR_13,
         VAR_28);
 VAR_25->sgl_pp_align = FUNC_0(VAR_14,
        VAR_28);
 VAR_21->sli4_hba.extents_in_use = FUNC_0(VAR_7, VAR_28);
 VAR_21->sli4_hba.rpi_hdrs_in_use = FUNC_0(VAR_8, VAR_28);


 if (VAR_25->sge_supp_len > VAR_0)
  VAR_25->sge_supp_len = VAR_0;

 return 0;
}
