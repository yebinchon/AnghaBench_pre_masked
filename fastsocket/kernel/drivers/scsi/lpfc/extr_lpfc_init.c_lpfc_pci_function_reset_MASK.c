
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct lpfc_register {int word0; } ;
union lpfc_sli4_cfg_shdr {struct lpfc_register response; } ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_18__ {int ERR2regaddr; int ERR1regaddr; int STATUSregaddr; int CTRLregaddr; } ;
struct TYPE_19__ {TYPE_6__ if_type2; } ;
struct TYPE_20__ {TYPE_7__ u; struct lpfc_register sli_intf; } ;
struct lpfc_hba {void** work_status; TYPE_8__ sli4_hba; int pcidev; int mbox_mem_pool; } ;
struct TYPE_13__ {int cfg_shdr; } ;
struct TYPE_14__ {TYPE_1__ header; } ;
struct TYPE_15__ {TYPE_2__ sli4_config; } ;
struct TYPE_16__ {TYPE_3__ un; } ;
struct TYPE_17__ {TYPE_4__ mqe; } ;
struct TYPE_21__ {TYPE_5__ u; } ;
typedef TYPE_9__ LPFC_MBOXQ_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,struct lpfc_register*) ;
 int FUNC_1 (int ,struct lpfc_register*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_9__*,int ,int ,int ,int ) ;
 int VAR_17 ;
 int FUNC_5 (struct lpfc_hba*,TYPE_9__*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_9__*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int *) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

int
FUNC_12(struct lpfc_hba *VAR_23)
{
 LPFC_MBOXQ_t *VAR_24;
 uint32_t VAR_25 = 0, VAR_26;
 uint32_t VAR_27, VAR_28;
 uint32_t VAR_29, VAR_30 = 0, VAR_31 = 0;
 union lpfc_sli4_cfg_shdr *VAR_32;
 struct lpfc_register VAR_33;
 uint16_t VAR_34;

 VAR_26 = FUNC_0(VAR_17, &VAR_23->sli4_hba.sli_intf);
 switch (VAR_26) {
 case 130:
  VAR_24 = (LPFC_MBOXQ_t *) FUNC_6(VAR_23->mbox_mem_pool,
             VAR_3);
  if (!VAR_24) {
   FUNC_2(VAR_23, VAR_4, VAR_5,
     "0494 Unable to allocate memory for "
     "issuing SLI_FUNCTION_RESET mailbox "
     "command\n");
   return -VAR_1;
  }


  FUNC_4(VAR_23, VAR_24, VAR_7,
     VAR_6, 0,
     VAR_8);
  VAR_25 = FUNC_5(VAR_23, VAR_24, VAR_12);
  VAR_32 = (union lpfc_sli4_cfg_shdr *)
   &VAR_24->u.mqe.un.sli4_config.header.cfg_shdr;
  VAR_27 = FUNC_0(VAR_16, &VAR_32->response);
  VAR_28 = FUNC_0(VAR_15,
      &VAR_32->response);
  if (VAR_25 != VAR_13)
   FUNC_7(VAR_24, VAR_23->mbox_mem_pool);
  if (VAR_27 || VAR_28 || VAR_25) {
   FUNC_2(VAR_23, VAR_4, VAR_5,
     "0495 SLI_FUNCTION_RESET mailbox "
     "failed with status x%x add_status x%x,"
     " mbx status x%x\n",
     VAR_27, VAR_28, VAR_25);
   VAR_25 = -VAR_2;
  }
  break;
 case 128:
  for (VAR_30 = 0;
       VAR_30 < VAR_11;
       VAR_30++) {
   VAR_33.word0 = 0;
   FUNC_1(VAR_18, &VAR_33,
          VAR_10);
   FUNC_1(VAR_19, &VAR_33,
          VAR_9);
   FUNC_11(VAR_33.word0, VAR_23->sli4_hba.u.if_type2.
          CTRLregaddr);

   FUNC_9(VAR_23->pcidev,
          VAR_14, &VAR_34);






   for (VAR_29 = 0; VAR_29 < 1000; VAR_29++) {
    FUNC_8(10);
    if (FUNC_3(VAR_23->sli4_hba.u.if_type2.
           STATUSregaddr, &VAR_33.word0)) {
     VAR_25 = -VAR_0;
     goto out;
    }
    if (FUNC_0(VAR_22, &VAR_33))
     VAR_31++;
    if (FUNC_0(VAR_21, &VAR_33))
     break;
   }





   if (VAR_31 && (VAR_29 < 1000)) {
    FUNC_8(10);
    VAR_31 = 0;
    continue;
   }


   if ((FUNC_0(VAR_20, &VAR_33)) ||
       (VAR_29 >= 1000)) {
    VAR_23->work_status[0] = FUNC_10(
     VAR_23->sli4_hba.u.if_type2.ERR1regaddr);
    VAR_23->work_status[1] = FUNC_10(
     VAR_23->sli4_hba.u.if_type2.ERR2regaddr);
    FUNC_2(VAR_23, VAR_4, VAR_5,
     "2890 Port error detected during port "
     "reset(%d): wait_tmo:%d ms, "
     "port status reg 0x%x, "
     "error 1=0x%x, error 2=0x%x\n",
     VAR_30, VAR_29*10,
     VAR_33.word0,
     VAR_23->work_status[0],
     VAR_23->work_status[1]);
    VAR_25 = -VAR_0;
   }





   if (VAR_29 < 1000)
    break;
  }

  FUNC_8(100);
  break;
 case 129:
 default:
  break;
 }

out:

 if (VAR_30 >= VAR_11) {
  FUNC_2(VAR_23, VAR_4, VAR_5,
    "3317 HBA not functional: IP Reset Failed "
    "after (%d) retries, try: "
    "echo fw_reset > board_mode\n", VAR_30);
  VAR_25 = -VAR_0;
 }

 return VAR_25;
}
