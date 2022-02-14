
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bank_task {int dummy; } ;
struct bank_account {int dummy; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int,int,int,char*) ;

void
FUNC_11()
{
 kern_return_t VAR_18 = VAR_0;

 VAR_14 = FUNC_10(sizeof(struct bank_task),
                        VAR_3 * sizeof(struct bank_task),
                        sizeof(struct bank_task),
                        "bank_task");

 VAR_4 = FUNC_10(sizeof(struct bank_account),
                        VAR_2 * sizeof(struct bank_account),
                        sizeof(struct bank_account),
                        "bank_account");

 FUNC_1();


 FUNC_5(&VAR_12);
 FUNC_6(&VAR_11, "bank_lock", &VAR_12);
 FUNC_4(&VAR_10);
 FUNC_0();
 VAR_18 = FUNC_2(
                 &VAR_13,
                 0,
                 VAR_1,
                 &VAR_17);
 if (VAR_18 != VAR_0 )
  FUNC_8("BANK subsystem initialization failed");

 FUNC_3("BANK subsystem is initialized\n");
 return ;
}
