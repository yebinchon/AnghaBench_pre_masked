
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_hba {int hbalock; } ;
struct TYPE_5__ {int mbox_flag; int * context1; int mbox_cmpl; } ;
typedef int MAILBOX_t ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int,int ) ;

int
FUNC_7(struct lpfc_hba *VAR_8, LPFC_MBOXQ_t *VAR_9,
    uint32_t VAR_10)
{
 FUNC_0(VAR_5);
 MAILBOX_t *VAR_11 = ((void*)0);
 int VAR_12;
 unsigned long VAR_13;


 if (VAR_9->context1)
  VAR_11 = (MAILBOX_t *)VAR_9->context1;

 VAR_9->mbox_flag &= ~VAR_0;

 VAR_9->mbox_cmpl = VAR_7;

 VAR_9->context1 = &VAR_5;


 VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_2);
 if (VAR_12 == VAR_1 || VAR_12 == VAR_3) {
  FUNC_6(VAR_5,
    VAR_9->mbox_flag & VAR_0,
    FUNC_3(VAR_10 * 1000));

  FUNC_4(&VAR_8->hbalock, VAR_13);

  VAR_9->context1 = (uint8_t *)VAR_11;




  if (VAR_9->mbox_flag & VAR_0) {
   VAR_12 = VAR_3;
   FUNC_1(VAR_8, VAR_9);
  } else {
   VAR_12 = VAR_4;
   VAR_9->mbox_cmpl = VAR_6;
  }
  FUNC_5(&VAR_8->hbalock, VAR_13);
 } else {

  VAR_9->context1 = (uint8_t *)VAR_11;
 }

 return VAR_12;
}
