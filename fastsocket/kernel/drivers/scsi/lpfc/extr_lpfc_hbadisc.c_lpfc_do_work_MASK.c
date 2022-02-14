
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int * worker_thread; scalar_t__ data_flags; int work_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,int) ;

int
FUNC_6(void *VAR_5)
{
 struct lpfc_hba *VAR_6 = VAR_5;
 int VAR_7;

 FUNC_3(VAR_4, -20);
 VAR_6->data_flags = 0;

 while (!FUNC_0()) {

  VAR_7 = FUNC_5(VAR_6->work_waitq,
     (FUNC_4(VAR_3,
           &VAR_6->data_flags)
      || FUNC_0()));

  if (VAR_7) {
   FUNC_1(VAR_6, VAR_0, VAR_2,
     "0433 Wakeup on signal: rc=x%x\n", VAR_7);
   break;
  }


  FUNC_2(VAR_6);
 }
 VAR_6->worker_thread = ((void*)0);
 FUNC_1(VAR_6, VAR_1, VAR_2,
   "0432 Worker thread stopped.\n");
 return 0;
}
