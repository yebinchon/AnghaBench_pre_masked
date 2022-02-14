
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


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {scalar_t__ numRiocb; scalar_t__ rspidx; scalar_t__ local_getidx; } ;
struct TYPE_12__ {TYPE_3__ sli3; } ;
struct TYPE_13__ {int iocb_cmd_empty; int iocb_rsp_full; int iocb_rsp; int iocb_event; } ;
struct lpfc_sli_ring {size_t ringno; int flag; int (* lpfc_sli_cmd_available ) (struct lpfc_hba*,struct lpfc_sli_ring*) ;TYPE_4__ sli; TYPE_5__ stats; } ;
struct lpfc_pgp {int cmdGetInx; int rspPutInx; } ;
struct TYPE_14__ {int* ulpWord; } ;
struct TYPE_15__ {int ulpCommand; int ulpStatus; int ulpContext; int ulpIoTag; int un1; TYPE_6__ un; } ;
struct lpfc_iocbq {int iocb_flag; int (* iocb_cmpl ) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;TYPE_7__ iocb; int list; } ;
struct lpfc_hba {int fcp_ring_in_use; int hbalock; int * CAregaddr; TYPE_2__* host_gp; int brd_no; TYPE_1__* pcidev; int (* lpfc_rampdown_queue_depth ) (struct lpfc_hba*) ;int iocb_rsp_size; int last_completion_time; struct lpfc_pgp* port_gp; } ;
typedef int lpfc_iocb_type ;
struct TYPE_10__ {int rspGetInx; } ;
struct TYPE_9__ {int dev; } ;
typedef TYPE_7__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
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
 int FUNC_1 (int *,char*,int ,char*) ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 TYPE_7__* FUNC_4 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_5 (int) ;
 struct lpfc_iocbq* FUNC_6 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int FUNC_9 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_10 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_11 (char*,int *,int ) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (struct lpfc_hba*) ;
 int FUNC_18 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 int FUNC_19 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (scalar_t__,int *) ;

int
FUNC_22(struct lpfc_hba *VAR_19,
    struct lpfc_sli_ring *VAR_20, uint32_t VAR_21)
{
 struct lpfc_pgp *VAR_22 = &VAR_19->port_gp[VAR_20->ringno];
 IOCB_t *VAR_23 = ((void*)0);
 IOCB_t *VAR_24 = ((void*)0);
 struct lpfc_iocbq *VAR_25 = ((void*)0);
 struct lpfc_iocbq VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28, VAR_29;
 int VAR_30 = 1;
 lpfc_iocb_type VAR_31;
 unsigned long VAR_32;
 uint32_t VAR_33 = 0;

 FUNC_15(&VAR_19->hbalock, VAR_32);
 VAR_20->stats.iocb_event++;





 VAR_29 = VAR_20->sli.sli3.numRiocb;
 VAR_28 = FUNC_2(VAR_22->rspPutInx);
 if (FUNC_20(VAR_28 >= VAR_29)) {
  FUNC_10(VAR_19, VAR_20);
  FUNC_16(&VAR_19->hbalock, VAR_32);
  return 1;
 }
 if (VAR_19->fcp_ring_in_use) {
  FUNC_16(&VAR_19->hbalock, VAR_32);
  return 1;
 } else
  VAR_19->fcp_ring_in_use = 1;

 FUNC_14();
 while (VAR_20->sli.sli3.rspidx != VAR_28) {





  VAR_24 = FUNC_4(VAR_19, VAR_20);
  VAR_19->last_completion_time = VAR_18;

  if (++VAR_20->sli.sli3.rspidx >= VAR_29)
   VAR_20->sli.sli3.rspidx = 0;

  FUNC_7((uint32_t *) VAR_24,
          (uint32_t *) &VAR_26.iocb,
          VAR_19->iocb_rsp_size);
  FUNC_0(&(VAR_26.list));
  VAR_23 = &VAR_26.iocb;

  VAR_31 = FUNC_5(VAR_23->ulpCommand & VAR_3);
  VAR_20->stats.iocb_rsp++;
  VAR_33++;

  if (FUNC_20(VAR_23->ulpStatus)) {




   if ((VAR_23->ulpStatus == VAR_9) &&
       ((VAR_23->un.ulpWord[4] & VAR_8) ==
        VAR_7)) {
    FUNC_16(&VAR_19->hbalock, VAR_32);
    VAR_19->lpfc_rampdown_queue_depth(VAR_19);
    FUNC_15(&VAR_19->hbalock, VAR_32);
   }


   FUNC_3(VAR_19, VAR_12, VAR_13,
     "0336 Rsp Ring %d error: IOCB Data: "
     "x%x x%x x%x x%x x%x x%x x%x x%x\n",
     VAR_20->ringno,
     VAR_23->un.ulpWord[0],
     VAR_23->un.ulpWord[1],
     VAR_23->un.ulpWord[2],
     VAR_23->un.ulpWord[3],
     VAR_23->un.ulpWord[4],
     VAR_23->un.ulpWord[5],
     *(uint32_t *)&VAR_23->un1,
     *((uint32_t *)&VAR_23->un1 + 1));
  }

  switch (VAR_31) {
  case 130:
  case 129:




   if (FUNC_20(VAR_23->ulpCommand == VAR_4)) {
    FUNC_3(VAR_19, VAR_11, VAR_13,
      "0333 IOCB cmd 0x%x"
      " processed. Skipping"
      " completion\n",
      VAR_23->ulpCommand);
    break;
   }

   VAR_25 = FUNC_6(VAR_19, VAR_20,
        &VAR_26);
   if (FUNC_20(!VAR_25))
    break;
   if (VAR_25->iocb_flag & VAR_15)
    VAR_25->iocb_flag &= ~VAR_15;
   if (VAR_25->iocb_cmpl) {
    FUNC_16(&VAR_19->hbalock, VAR_32);
    (VAR_25->iocb_cmpl)(VAR_19, VAR_25,
            &VAR_26);
    FUNC_15(&VAR_19->hbalock, VAR_32);
   }
   break;
  case 128:
   FUNC_16(&VAR_19->hbalock, VAR_32);
   FUNC_8(VAR_19, VAR_20, &VAR_26);
   FUNC_15(&VAR_19->hbalock, VAR_32);
   break;
  default:
   if (VAR_23->ulpCommand == VAR_2) {
    char VAR_34[VAR_16];
    FUNC_12(VAR_34, 0, VAR_16);
    FUNC_11(&VAR_34[0], (uint8_t *) VAR_23,
           VAR_17);
    FUNC_1(&((VAR_19->pcidev)->dev),
      "lpfc%d: %s\n",
      VAR_19->brd_no, VAR_34);
   } else {

    FUNC_3(VAR_19, VAR_10, VAR_13,
      "0334 Unknown IOCB command "
      "Data: x%x, x%x x%x x%x x%x\n",
      VAR_31, VAR_23->ulpCommand,
      VAR_23->ulpStatus,
      VAR_23->ulpIoTag,
      VAR_23->ulpContext);
   }
   break;
  }







  FUNC_21(VAR_20->sli.sli3.rspidx,
   &VAR_19->host_gp[VAR_20->ringno].rspGetInx);

  if (VAR_20->sli.sli3.rspidx == VAR_28)
   VAR_28 = FUNC_2(VAR_22->rspPutInx);
 }

 if ((VAR_33 > 0) && (VAR_21 & VAR_6)) {
  VAR_20->stats.iocb_rsp_full++;
  VAR_27 = ((VAR_0 | VAR_1) << (VAR_20->ringno * 4));
  FUNC_21(VAR_27, VAR_19->CAregaddr);
  FUNC_13(VAR_19->CAregaddr);
 }
 if ((VAR_21 & VAR_5) && (VAR_20->flag & VAR_14)) {
  VAR_20->flag &= ~VAR_14;
  VAR_20->stats.iocb_cmd_empty++;


  VAR_20->sli.sli3.local_getidx = FUNC_2(VAR_22->cmdGetInx);
  FUNC_9(VAR_19, VAR_20);

  if ((VAR_20->lpfc_sli_cmd_available))
   (VAR_20->lpfc_sli_cmd_available) (VAR_19, VAR_20);

 }

 VAR_19->fcp_ring_in_use = 0;
 FUNC_16(&VAR_19->hbalock, VAR_32);
 return VAR_30;
}
