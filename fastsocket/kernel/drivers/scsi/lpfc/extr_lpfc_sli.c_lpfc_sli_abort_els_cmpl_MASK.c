
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_5__ {size_t abortContextTag; size_t abortIoTag; } ;
struct TYPE_7__ {int * ulpWord; TYPE_1__ acxri; } ;
struct TYPE_8__ {TYPE_3__ un; scalar_t__ ulpStatus; } ;
struct lpfc_iocbq {TYPE_4__ iocb; } ;
struct TYPE_6__ {size_t last_iotag; struct lpfc_iocbq** iocbq_lookup; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hbalock; TYPE_2__ sli; } ;
typedef TYPE_4__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,struct lpfc_iocbq*,size_t,size_t,scalar_t__,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_4, struct lpfc_iocbq *VAR_5,
   struct lpfc_iocbq *VAR_6)
{
 IOCB_t *VAR_7 = &VAR_6->iocb;
 uint16_t VAR_8, VAR_9;
 struct lpfc_iocbq *VAR_10 = ((void*)0);

 if (VAR_7->ulpStatus) {





  VAR_9 = VAR_5->iocb.un.acxri.abortContextTag;
  VAR_8 = VAR_5->iocb.un.acxri.abortIoTag;

  FUNC_2(&VAR_4->hbalock);
  if (VAR_4->sli_rev < VAR_3) {
   if (VAR_8 != 0 &&
    VAR_8 <= VAR_4->sli.last_iotag)
    VAR_10 =
     VAR_4->sli.iocbq_lookup[VAR_8];
  } else





   VAR_10 = VAR_4->sli.iocbq_lookup[VAR_9];

  FUNC_0(VAR_4, VAR_0, VAR_1 | VAR_2,
    "0327 Cannot abort els iocb %p "
    "with tag %x context %x, abort status %x, "
    "abort code %x\n",
    VAR_10, VAR_8, VAR_9,
    VAR_7->ulpStatus, VAR_7->un.ulpWord[4]);

  FUNC_3(&VAR_4->hbalock);
 }
 FUNC_1(VAR_4, VAR_5);
 return;
}
