
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int abortIoTag; int abortContextTag; } ;
struct TYPE_5__ {int * ulpWord; TYPE_1__ acxri; } ;
struct TYPE_6__ {TYPE_2__ un; int ulpStatus; } ;
struct lpfc_iocbq {TYPE_3__ iocb; int iotag; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;

void
FUNC_2(struct lpfc_hba *VAR_2, struct lpfc_iocbq *VAR_3,
   struct lpfc_iocbq *VAR_4)
{
 FUNC_0(VAR_2, VAR_0, VAR_1,
   "3096 ABORT_XRI_CN completing on rpi x%x "
   "original iotag x%x, abort cmd iotag x%x "
   "status 0x%x, reason 0x%x\n",
   VAR_3->iocb.un.acxri.abortContextTag,
   VAR_3->iocb.un.acxri.abortIoTag,
   VAR_3->iotag, VAR_4->iocb.ulpStatus,
   VAR_4->iocb.un.ulpWord[4]);
 FUNC_1(VAR_2, VAR_3);
 return;
}
