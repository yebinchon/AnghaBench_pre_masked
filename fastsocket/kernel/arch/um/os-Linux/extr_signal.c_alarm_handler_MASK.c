
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigcontext {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sigcontext*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(int VAR_3, struct sigcontext *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_1;
 if (!VAR_1) {
  VAR_2 |= VAR_0;
  return;
 }

 FUNC_0();

 FUNC_1(VAR_4);
 FUNC_2(VAR_5);
}
