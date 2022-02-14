
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_sli_ring {scalar_t__ ringno; } ;
struct TYPE_3__ {void** ulpWord; } ;
struct TYPE_4__ {scalar_t__ ulpCommand; int ulpContext; TYPE_1__ un; void* ulpStatus; int ulpIoTag; } ;
struct lpfc_iocbq {int iocb_flag; TYPE_2__ iocb; int (* iocb_cmpl ) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;} ;
struct lpfc_hba {scalar_t__ sli_rev; int hbalock; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,scalar_t__,int ,void*,void*,scalar_t__,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_hba *VAR_11, struct lpfc_sli_ring *VAR_12,
     struct lpfc_iocbq *VAR_13)
{
 struct lpfc_iocbq *VAR_14;
 int VAR_15 = 1;
 unsigned long VAR_16;


 FUNC_4(&VAR_11->hbalock, VAR_16);
 VAR_14 = FUNC_2(VAR_11, VAR_12, VAR_13);
 FUNC_5(&VAR_11->hbalock, VAR_16);

 if (VAR_14) {
  if (VAR_14->iocb_cmpl) {




   if (VAR_13->iocb.ulpStatus &&
        (VAR_12->ringno == VAR_8) &&
        (VAR_14->iocb.ulpCommand ==
    VAR_0))
    FUNC_1(VAR_11,
     VAR_14, VAR_13);





   if (VAR_12->ringno == VAR_8) {
    if ((VAR_11->sli_rev < VAR_10) &&
        (VAR_14->iocb_flag &
       VAR_7)) {
     FUNC_4(&VAR_11->hbalock,
         VAR_16);
     VAR_14->iocb_flag &=
      ~VAR_7;
     FUNC_5(&VAR_11->hbalock,
              VAR_16);
     VAR_13->iocb.ulpStatus =
      VAR_3;
     VAR_13->iocb.un.ulpWord[4] =
      VAR_2;





     FUNC_4(&VAR_11->hbalock,
         VAR_16);
     VAR_13->iocb_flag |= VAR_6;
     FUNC_5(&VAR_11->hbalock,
              VAR_16);
    }
    if (VAR_11->sli_rev == VAR_10) {
     if (VAR_13->iocb_flag &
         VAR_9) {






      FUNC_4(
       &VAR_11->hbalock, VAR_16);
      VAR_14->iocb_flag |=
       VAR_9;
      FUNC_5(
       &VAR_11->hbalock, VAR_16);
     }
     if (VAR_14->iocb_flag &
         VAR_7) {





      FUNC_4(
       &VAR_11->hbalock, VAR_16);
      VAR_14->iocb_flag &=
       ~VAR_7;
      FUNC_5(
       &VAR_11->hbalock, VAR_16);
      VAR_14->iocb.ulpStatus =
       VAR_3;
      VAR_14->iocb.un.ulpWord[4] =
       VAR_1;






      VAR_13->iocb.ulpStatus =
       VAR_3;
      VAR_13->iocb.un.ulpWord[4] =
       VAR_2;
      FUNC_4(
       &VAR_11->hbalock, VAR_16);
      VAR_13->iocb_flag |=
       VAR_6;
      FUNC_5(
       &VAR_11->hbalock, VAR_16);
     }
    }
   }
   (VAR_14->iocb_cmpl) (VAR_11, VAR_14, VAR_13);
  } else
   FUNC_3(VAR_11, VAR_14);
 } else {





  if (VAR_12->ringno != VAR_8) {




   FUNC_0(VAR_11, VAR_4, VAR_5,
      "0322 Ring %d handler: "
      "unexpected completion IoTag x%x "
      "Data: x%x x%x x%x x%x\n",
      VAR_12->ringno,
      VAR_13->iocb.ulpIoTag,
      VAR_13->iocb.ulpStatus,
      VAR_13->iocb.un.ulpWord[4],
      VAR_13->iocb.ulpCommand,
      VAR_13->iocb.ulpContext);
  }
 }

 return VAR_15;
}
