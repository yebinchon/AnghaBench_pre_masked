
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_handler; int * sa_restorer; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(int VAR_4)
{
 struct sigaction VAR_5;


 FUNC_3(&VAR_5.sa_mask);







 VAR_5.sa_flags = VAR_1 | VAR_0;
 VAR_5.sa_restorer = ((void*)0);
 VAR_5.sa_handler = VAR_3;
 if (FUNC_2(VAR_4, &VAR_5, ((void*)0)) < 0) {
  FUNC_1("failed to install handler for signal %d - errno = %d\n",
         VAR_4, VAR_2);
  FUNC_0(1);
 }
}
