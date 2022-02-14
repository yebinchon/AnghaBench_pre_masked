
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int name ;
typedef int UINT ;


 int FUNC_0 (char*,int,char*,int ) ;
 int * FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;

wchar_t *FUNC_4(UINT VAR_1)
{
 wchar_t *VAR_2;
 char VAR_3[VAR_0];
 FUNC_0(VAR_3, sizeof(VAR_3), "ERR_%u", VAR_1);

 VAR_2 = FUNC_1(VAR_3);
 if (FUNC_2(VAR_2) != 0)
 {
  return VAR_2;
 }
 else
 {
  return FUNC_3("ERR_UNKNOWN");
 }
}
