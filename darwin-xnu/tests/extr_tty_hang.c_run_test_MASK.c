
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int*,int*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int) ;
 char* FUNC_13 (int) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;

void
FUNC_17(int VAR_8)
{
 int VAR_9;
 char *VAR_10;
 pid_t VAR_11;

 VAR_7;
 VAR_4;

 VAR_5;

 VAR_10= ((void*)0);
 FUNC_1(VAR_9 = FUNC_12(VAR_3 | VAR_1),
     ((void*)0));
 (void)FUNC_8(VAR_9, VAR_0, VAR_2);
 FUNC_1(FUNC_11(VAR_9), ((void*)0));
 FUNC_1(FUNC_16(VAR_9), ((void*)0));
 VAR_10= FUNC_13(VAR_9);
 FUNC_0(VAR_10, ((void*)0));
 FUNC_3("slave pty is %s\n", VAR_10);

 VAR_6;







 FUNC_1(VAR_11 = FUNC_9(), ((void*)0));

 if (VAR_11 == 0) {
  FUNC_1(FUNC_5(VAR_9), ((void*)0));
  FUNC_10(VAR_10);
  if (VAR_8) {

   FUNC_1(FUNC_14(VAR_10), ((void*)0));
  }
  FUNC_7(0);
 }

 int VAR_12;
 int VAR_13;

 FUNC_6(VAR_11, &VAR_12, &VAR_13, 0);
 if (VAR_13) {
  FUNC_2("Test failed because child received signal %s\n",
         FUNC_15(VAR_13));
 } else if (VAR_12) {
  FUNC_2("Test failed because child exited with status %d\n",
         VAR_12);
 } else {
  FUNC_4("test_passed\n");
 }




}
