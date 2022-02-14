
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int BUF ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*) ;
 char* VAR_0 ;

void FUNC_6(BUF *VAR_1, char *VAR_2, UINT VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 UINT VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_1(VAR_2);

 VAR_6 = FUNC_5(VAR_5) + 2 + FUNC_5(VAR_0);
 VAR_4 = FUNC_4(VAR_6);

 FUNC_2(VAR_4, 0, "%s %s", VAR_0, VAR_5);
 FUNC_0(VAR_1, VAR_4, VAR_3);
 FUNC_0(VAR_1, "{", VAR_3);
 FUNC_3(VAR_4);
 FUNC_3(VAR_5);
}
