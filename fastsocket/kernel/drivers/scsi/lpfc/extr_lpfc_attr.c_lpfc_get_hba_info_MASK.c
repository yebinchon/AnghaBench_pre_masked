
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_mbx_read_config {int dummy; } ;
struct TYPE_23__ {scalar_t__ rpi_used; scalar_t__ xri_used; scalar_t__ vpi_used; } ;
struct TYPE_24__ {TYPE_6__ max_cfg_param; } ;
struct TYPE_18__ {int sli_flag; } ;
struct lpfc_hba {scalar_t__ link_state; int fc_ratov; scalar_t__ sli_rev; int mbox_mem_pool; TYPE_7__ sli4_hba; TYPE_2__* pport; TYPE_1__ sli; } ;
struct TYPE_25__ {scalar_t__ avail_vpi; scalar_t__ max_vpi; scalar_t__ avail_xri; scalar_t__ max_xri; scalar_t__ avail_rpi; scalar_t__ max_rpi; } ;
struct TYPE_26__ {TYPE_8__ varRdConfig; } ;
struct TYPE_20__ {struct lpfc_mbx_read_config rd_config; } ;
struct TYPE_21__ {TYPE_3__ un; } ;
struct TYPE_16__ {TYPE_9__ un; int mbxOwner; int mbxCommand; } ;
struct TYPE_22__ {TYPE_4__ mqe; TYPE_10__ mb; } ;
struct TYPE_19__ {int fc_flag; } ;
struct TYPE_17__ {TYPE_5__ u; int * context1; } ;
typedef TYPE_10__ MAILBOX_t ;
typedef TYPE_11__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_mbx_read_config*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_11__*,int) ;
 TYPE_11__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_11__*,int ) ;
 int FUNC_4 (TYPE_11__*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_14,
    uint32_t *VAR_15, uint32_t *VAR_16,
    uint32_t *VAR_17, uint32_t *VAR_18,
    uint32_t *VAR_19, uint32_t *VAR_20)
{
 struct lpfc_mbx_read_config *VAR_21;
 LPFC_MBOXQ_t *VAR_22;
 MAILBOX_t *VAR_23;
 int VAR_24 = 0;
 uint32_t VAR_25;





 if (VAR_14->link_state < VAR_3 ||
     !VAR_14->mbox_mem_pool ||
     (VAR_14->sli.sli_flag & VAR_4) == 0)
  return 0;

 if (VAR_14->sli.sli_flag & VAR_2)
  return 0;

 VAR_22 = FUNC_2(VAR_14->mbox_mem_pool, VAR_1);
 if (!VAR_22)
  return 0;
 FUNC_4(VAR_22, 0, sizeof (LPFC_MBOXQ_t));

 VAR_23 = &VAR_22->u.mb;
 VAR_23->mbxCommand = VAR_7;
 VAR_23->mbxOwner = VAR_10;
 VAR_22->context1 = ((void*)0);

 if (VAR_14->pport->fc_flag & VAR_0)
  VAR_24 = VAR_6;
 else
  VAR_24 = FUNC_1(VAR_14, VAR_22, VAR_14->fc_ratov * 2);

 if (VAR_24 != VAR_8) {
  if (VAR_24 != VAR_9)
   FUNC_3(VAR_22, VAR_14->mbox_mem_pool);
  return 0;
 }

 if (VAR_14->sli_rev == VAR_5) {
  VAR_21 = &VAR_22->u.mqe.un.rd_config;
  if (VAR_17)
   *VAR_17 = FUNC_0(VAR_11, VAR_21);
  if (VAR_18)
   *VAR_18 = FUNC_0(VAR_11, VAR_21) -
     VAR_14->sli4_hba.max_cfg_param.rpi_used;
  if (VAR_15)
   *VAR_15 = FUNC_0(VAR_13, VAR_21);
  if (VAR_16)
   *VAR_16 = FUNC_0(VAR_13, VAR_21) -
     VAR_14->sli4_hba.max_cfg_param.xri_used;




  VAR_25 = (FUNC_0(VAR_12, VAR_21) > 0) ?
   (FUNC_0(VAR_12, VAR_21) - 1) : 0;

  if (VAR_19)
   *VAR_19 = VAR_25;
  if (VAR_20)
   *VAR_20 = VAR_25 - VAR_14->sli4_hba.max_cfg_param.vpi_used;
 } else {
  if (VAR_17)
   *VAR_17 = VAR_23->un.varRdConfig.max_rpi;
  if (VAR_18)
   *VAR_18 = VAR_23->un.varRdConfig.avail_rpi;
  if (VAR_15)
   *VAR_15 = VAR_23->un.varRdConfig.max_xri;
  if (VAR_16)
   *VAR_16 = VAR_23->un.varRdConfig.avail_xri;
  if (VAR_19)
   *VAR_19 = VAR_23->un.varRdConfig.max_vpi;
  if (VAR_20)
   *VAR_20 = VAR_23->un.varRdConfig.avail_vpi;
 }

 FUNC_3(VAR_22, VAR_14->mbox_mem_pool);
 return 1;
}
