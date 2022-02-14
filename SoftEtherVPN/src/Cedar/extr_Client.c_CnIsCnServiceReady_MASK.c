
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCK ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4()
{
 SOCK *VAR_1;

 if (FUNC_0(0) == 0)
 {

  return 0;
 }


 VAR_1 = FUNC_1("localhost", VAR_0, 500);
 if (VAR_1 == ((void*)0))
 {

  return 0;
 }

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);


 return 1;
}
