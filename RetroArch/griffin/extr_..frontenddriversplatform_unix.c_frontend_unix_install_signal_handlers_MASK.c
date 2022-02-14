
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_flags; int sa_handler; int * sa_sigaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void)
{
   struct sigaction VAR_4;

   VAR_4.sa_sigaction = ((void*)0);
   VAR_4.sa_handler = VAR_3;
   VAR_4.sa_flags = VAR_0;
   FUNC_1(&VAR_4.sa_mask);
   FUNC_0(VAR_1, &VAR_4, ((void*)0));
   FUNC_0(VAR_2, &VAR_4, ((void*)0));
}
