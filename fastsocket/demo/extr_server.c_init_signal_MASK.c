
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 sigset_t VAR_3;

 if(FUNC_4(&VAR_3) == -1) {
  FUNC_1("Unable to initialize signal list");
  FUNC_0();
 }

 if(FUNC_3(&VAR_3, VAR_0) == -1) {
  FUNC_1("Unable to add SIGALRM signal to signal list");
  FUNC_0();
 }

 if(FUNC_3(&VAR_3, VAR_1) == -1) {
  FUNC_1("Unable to add SIGINT signal to signal list");
  FUNC_0();
 }

 if(FUNC_2(VAR_2, &VAR_3, ((void*)0)) != 0) {
  FUNC_1("Unable to change signal mask");
  FUNC_0();
 }
}
