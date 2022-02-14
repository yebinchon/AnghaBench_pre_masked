
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int SOCK ;


 int * FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

bool FUNC_3(char *VAR_1, UINT VAR_2, UINT VAR_3)
{
 SOCK *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_2 >= 65536)
 {
  return 0;
 }

 if (VAR_3 == 0)
 {
  VAR_3 = VAR_0;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }
 else
 {
  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
  return 1;
 }
}
