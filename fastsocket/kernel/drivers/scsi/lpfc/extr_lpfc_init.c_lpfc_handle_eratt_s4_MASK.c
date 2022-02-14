
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_register {int word0; int member_0; } ;
struct TYPE_6__ {int ERR2regaddr; int ERR1regaddr; int STATUSregaddr; } ;
struct TYPE_5__ {int UEMASKLOregaddr; int UERRLOregaddr; } ;
struct TYPE_7__ {TYPE_2__ if_type2; TYPE_1__ if_type0; } ;
struct TYPE_8__ {TYPE_3__ u; struct lpfc_register sli_intf; } ;
struct lpfc_hba {int hbalock; int over_temp_state; TYPE_4__ sli4_hba; int cfg_enable_hba_reset; int pcidev; struct lpfc_vport* pport; } ;
struct Scsi_Host {int dummy; } ;
typedef int event_data ;


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
 int FUNC_0 (int ,struct lpfc_register*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct Scsi_Host*,int ,int,char*,int) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_5 (int ,int*) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct lpfc_hba *VAR_15)
{
 struct lpfc_vport *VAR_16 = VAR_15->pport;
 uint32_t VAR_17;
 struct Scsi_Host *VAR_18;
 uint32_t VAR_19;
 struct lpfc_register VAR_20 = {0};
 uint32_t VAR_21, VAR_22;
 uint32_t VAR_23, VAR_24;
 uint32_t VAR_25, VAR_26;
 int VAR_27;




 if (FUNC_9(VAR_15->pcidev))
  return;

 if (!VAR_15->cfg_enable_hba_reset)
  return;

 VAR_19 = FUNC_0(VAR_13, &VAR_15->sli4_hba.sli_intf);
 switch (VAR_19) {
 case 130:
  VAR_25 = FUNC_5(
    VAR_15->sli4_hba.u.if_type0.UERRLOregaddr,
    &VAR_23);
  VAR_26 = FUNC_5(
    VAR_15->sli4_hba.u.if_type0.UEMASKLOregaddr,
    &VAR_24);

  if (VAR_25 == -VAR_0 && VAR_26 == -VAR_0)
   return;
  FUNC_7(VAR_15);
  break;
 case 128:
  VAR_25 = FUNC_5(
    VAR_15->sli4_hba.u.if_type2.STATUSregaddr,
    &VAR_20.word0);

  if (VAR_25 == -VAR_0) {
   FUNC_4(VAR_15, VAR_3, VAR_5,
    "3151 PCI bus read access failure: x%x\n",
    FUNC_10(VAR_15->sli4_hba.u.if_type2.STATUSregaddr));
   return;
  }
  VAR_21 = FUNC_10(VAR_15->sli4_hba.u.if_type2.ERR1regaddr);
  VAR_22 = FUNC_10(VAR_15->sli4_hba.u.if_type2.ERR2regaddr);
  if (FUNC_0(VAR_14, &VAR_20)) {

   FUNC_4(VAR_15, VAR_3, VAR_5,
    "2889 Port Overtemperature event, "
    "taking port offline\n");
   FUNC_11(&VAR_15->hbalock);
   VAR_15->over_temp_state = VAR_2;
   FUNC_12(&VAR_15->hbalock);
   FUNC_7(VAR_15);
   break;
  }
  if (VAR_21 == VAR_9 &&
      VAR_22 == VAR_12)
   FUNC_4(VAR_15, VAR_3, VAR_5,
     "3143 Port Down: Firmware Restarted\n");
  else if (VAR_21 == VAR_9 &&
    VAR_22 == VAR_10)
   FUNC_4(VAR_15, VAR_3, VAR_5,
     "3144 Port Down: Debug Dump\n");
  else if (VAR_21 == VAR_9 &&
    VAR_22 == VAR_11)
   FUNC_4(VAR_15, VAR_3, VAR_5,
     "3145 Port Down: Provisioning\n");


  VAR_27 = FUNC_8(VAR_15, VAR_6);
  if (VAR_27 == 0) {

   if (VAR_21 == VAR_9 &&
       VAR_22 == VAR_10)
    return;
   else
    break;
  }

  FUNC_4(VAR_15, VAR_3, VAR_5,
    "3152 Unrecoverable error, bring the port "
    "offline\n");
  FUNC_7(VAR_15);
  break;
 case 129:
 default:
  break;
 }
 FUNC_4(VAR_15, VAR_4, VAR_5,
   "3123 Report dump event to upper layer\n");

 FUNC_3(VAR_15);

 VAR_17 = VAR_1;
 VAR_18 = FUNC_6(VAR_16);
 FUNC_2(VAR_18, FUNC_1(),
      sizeof(VAR_17), (char *) &VAR_17,
      VAR_8 | VAR_7);
}
