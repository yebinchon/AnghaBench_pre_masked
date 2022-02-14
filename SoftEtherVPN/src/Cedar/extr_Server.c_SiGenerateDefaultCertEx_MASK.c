
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp ;
typedef int cn ;
typedef int X ;
typedef int NAME ;
typedef int K ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_0 ;
 int * FUNC_5 (int *,int *,int *,char*,int *,int *) ;
 int * FUNC_6 (int *,int *,int *,int ,int *) ;
 int FUNC_7 (int **,int **,int) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (int *,int,char*) ;

void FUNC_10(X **VAR_1, K **VAR_2, char *VAR_3)
{
 X *VAR_4;
 K *VAR_5, *VAR_6;
 NAME *VAR_7;
 char VAR_8[VAR_0];
 wchar_t VAR_9[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_7(&VAR_5, &VAR_6, 2048);

 if (FUNC_4(VAR_3))
 {

  FUNC_8(VAR_8, sizeof(VAR_8), "server.softether.vpn");
  FUNC_3(VAR_8, sizeof(VAR_8));
  FUNC_9(VAR_9, sizeof(VAR_9), VAR_8);
 }
 else
 {
  FUNC_9(VAR_9, sizeof(VAR_9), VAR_3);
 }

 VAR_7 = FUNC_5(VAR_9, VAR_9, VAR_9,
  L"US", ((void*)0), ((void*)0));
 VAR_4 = FUNC_6(VAR_6, VAR_5, VAR_7, FUNC_2(), ((void*)0));

 *VAR_1 = VAR_4;
 *VAR_2 = VAR_5;

 FUNC_1(VAR_7);

 FUNC_0(VAR_6);
}
