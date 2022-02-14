
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigcontext {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sigcontext*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(int VAR_4, struct sigcontext *VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_2;
 if (!VAR_6 && (VAR_4 == VAR_0)) {
  VAR_3 |= VAR_1;
  return;
 }

 FUNC_0();

 FUNC_2(VAR_4, VAR_5);

 FUNC_1(VAR_6);
}
