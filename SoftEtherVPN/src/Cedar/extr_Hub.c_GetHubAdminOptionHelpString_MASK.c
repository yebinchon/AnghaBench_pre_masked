
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int tmp ;


 int FUNC_0 (char*,int,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

wchar_t *FUNC_3(char *VAR_1)
{
 char VAR_2[VAR_0];
 wchar_t *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return L"";
 }

 FUNC_0(VAR_2, sizeof(VAR_2), "HUB_AO_%s", VAR_1);

 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_1(VAR_3))
 {
  VAR_3 = FUNC_2("HUB_AO_UNKNOWN");
 }

 return VAR_3;
}
