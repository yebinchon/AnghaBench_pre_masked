
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X ;
typedef int FOLDER ;
typedef int CLIENT ;
typedef int BUF ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;

void FUNC_3(CLIENT *VAR_0, FOLDER *VAR_1, X *VAR_2)
{
 BUF *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_2(VAR_2, 0);
 FUNC_0(VAR_1, "X509", VAR_3);
 FUNC_1(VAR_3);
}
