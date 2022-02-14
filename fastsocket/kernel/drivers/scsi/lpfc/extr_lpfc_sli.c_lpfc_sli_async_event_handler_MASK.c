
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int temp_event_data ;
struct temp_event {int event_code; int event_type; int data; } ;
struct lpfc_sli_ring {int ringno; } ;
struct TYPE_4__ {int evt_code; } ;
struct TYPE_5__ {TYPE_1__ asyncstat; } ;
struct TYPE_6__ {TYPE_2__ un; int ulpContext; } ;
struct lpfc_iocbq {TYPE_3__ iocb; } ;
struct lpfc_hba {int pport; } ;
struct Scsi_Host {int dummy; } ;
typedef TYPE_3__ IOCB_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct Scsi_Host*,int ,int,char*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ,...) ;
 struct Scsi_Host* FUNC_3 (int ) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;

__attribute__((used)) static void
FUNC_5(struct lpfc_hba * VAR_7,
 struct lpfc_sli_ring * VAR_8, struct lpfc_iocbq * VAR_9)
{
 IOCB_t *VAR_10;
 uint16_t VAR_11;
 struct temp_event VAR_12;
 struct Scsi_Host *VAR_13;
 uint32_t *VAR_14;

 VAR_10 = &VAR_9->iocb;
 VAR_11 = VAR_10->un.asyncstat.evt_code;

 switch (VAR_11) {
 case 128:
 case 129:
  VAR_12.data = (uint32_t) VAR_10->ulpContext;
  VAR_12.event_type = VAR_0;
  if (VAR_11 == 128) {
   VAR_12.event_code = VAR_6;
   FUNC_2(VAR_7, VAR_1, VAR_3,
    "0347 Adapter is very hot, please take "
    "corrective action. temperature : %d Celsius\n",
    (uint32_t) VAR_10->ulpContext);
  } else {
   VAR_12.event_code = VAR_5;
   FUNC_2(VAR_7, VAR_1, VAR_3,
    "0340 Adapter temperature is OK now. "
    "temperature : %d Celsius\n",
    (uint32_t) VAR_10->ulpContext);
  }


  VAR_13 = FUNC_3(VAR_7->pport);
  FUNC_1(VAR_13, FUNC_0(),
   sizeof(VAR_12), (char *) &VAR_12,
   VAR_4);
  break;
 case 130:
  FUNC_4(VAR_7, VAR_9);
  break;
 default:
  VAR_14 = (uint32_t *) VAR_10;
  FUNC_2(VAR_7, VAR_1, VAR_2,
   "0346 Ring %d handler: unexpected ASYNC_STATUS"
   " evt_code 0x%x\n"
   "W0  0x%08x W1  0x%08x W2  0x%08x W3  0x%08x\n"
   "W4  0x%08x W5  0x%08x W6  0x%08x W7  0x%08x\n"
   "W8  0x%08x W9  0x%08x W10 0x%08x W11 0x%08x\n"
   "W12 0x%08x W13 0x%08x W14 0x%08x W15 0x%08x\n",
   VAR_8->ringno, VAR_10->un.asyncstat.evt_code,
   VAR_14[0], VAR_14[1], VAR_14[2], VAR_14[3],
   VAR_14[4], VAR_14[5], VAR_14[6], VAR_14[7],
   VAR_14[8], VAR_14[9], VAR_14[10], VAR_14[11],
   VAR_14[12], VAR_14[13], VAR_14[14], VAR_14[15]);

  break;
 }
}
