
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct lpfc_sli4_cfg_mhdr {int dummy; } ;
struct TYPE_21__ {int rsp; } ;
struct TYPE_19__ {int response; } ;
struct TYPE_20__ {TYPE_5__ cfg_shdr; } ;
struct lpfc_mbx_get_rsrc_extent_info {TYPE_7__ u; TYPE_6__ header; } ;
struct TYPE_15__ {int intr_enable; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_1__ sli4_hba; } ;
struct TYPE_16__ {struct lpfc_mbx_get_rsrc_extent_info rsrc_extent_info; } ;
struct TYPE_17__ {TYPE_2__ un; } ;
struct TYPE_18__ {TYPE_3__ mqe; } ;
struct TYPE_22__ {TYPE_4__ u; } ;
typedef TYPE_8__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_8__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct lpfc_hba*,int ,int,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_8__*,int ,int ,int,int ) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_8__*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct lpfc_hba*,TYPE_8__*,int ) ;
 int FUNC_6 (struct lpfc_hba*,TYPE_8__*,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_9 (int) ;

int
FUNC_10(struct lpfc_hba *VAR_16, uint16_t VAR_17,
          uint16_t *VAR_18, uint16_t *VAR_19)
{
 int VAR_20 = 0;
 uint32_t VAR_21;
 uint32_t VAR_22;
 struct lpfc_mbx_get_rsrc_extent_info *VAR_23;
 LPFC_MBOXQ_t *VAR_24;

 VAR_24 = (LPFC_MBOXQ_t *) FUNC_7(VAR_16->mbox_mem_pool, VAR_2);
 if (!VAR_24)
  return -VAR_1;


 VAR_21 = (sizeof(struct lpfc_mbx_get_rsrc_extent_info) -
    sizeof(struct lpfc_sli4_cfg_mhdr));
 FUNC_3(VAR_16, VAR_24, VAR_9,
    VAR_8,
    VAR_21, VAR_10);


 VAR_20 = FUNC_4(VAR_16, VAR_24, 0, VAR_17,
     VAR_10);
 if (FUNC_9(VAR_20)) {
  VAR_20 = -VAR_0;
  goto err_exit;
 }

 if (!VAR_16->sli4_hba.intr_enable)
  VAR_20 = FUNC_5(VAR_16, VAR_24, VAR_11);
 else {
  VAR_22 = FUNC_1(VAR_16, VAR_24);
  VAR_20 = FUNC_6(VAR_16, VAR_24, VAR_22);
 }
 if (FUNC_9(VAR_20)) {
  VAR_20 = -VAR_0;
  goto err_exit;
 }

 VAR_23 = &VAR_24->u.mqe.un.rsrc_extent_info;
 if (FUNC_0(VAR_13,
     &VAR_23->header.cfg_shdr.response)) {
  FUNC_2(VAR_16, VAR_3, VAR_6 | VAR_5,
    "2930 Failed to get resource extents "
    "Status 0x%x Add'l Status 0x%x\n",
    FUNC_0(VAR_13,
           &VAR_23->header.cfg_shdr.response),
    FUNC_0(VAR_12,
           &VAR_23->header.cfg_shdr.response));
  VAR_20 = -VAR_0;
  goto err_exit;
 }

 *VAR_18 = FUNC_0(VAR_14,
         &VAR_23->u.rsp);
 *VAR_19 = FUNC_0(VAR_15,
        &VAR_23->u.rsp);

 FUNC_2(VAR_16, VAR_4, VAR_7,
   "3162 Retrieved extents type-%d from port: count:%d, "
   "size:%d\n", VAR_17, *VAR_18, *VAR_19);

err_exit:
 FUNC_8(VAR_24, VAR_16->mbox_mem_pool);
 return VAR_20;
}
