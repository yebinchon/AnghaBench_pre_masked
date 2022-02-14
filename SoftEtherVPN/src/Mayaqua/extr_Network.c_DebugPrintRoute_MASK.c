
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int ROUTE_ENTRY ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int *) ;

void FUNC_3(ROUTE_ENTRY *VAR_1)
{
 char VAR_2[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (FUNC_1() == 0)
 {
  return;
 }

 FUNC_2(VAR_2, sizeof(VAR_2), VAR_1);

 FUNC_0("%s\n", VAR_2);
}
