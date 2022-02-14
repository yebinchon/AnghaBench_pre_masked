
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef size_t UINT ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,size_t,char*) ;
 int FUNC_2 (char*,size_t,char*) ;
 int FUNC_3 (char*,size_t,char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(char *VAR_1, UINT VAR_2, char *VAR_3)
{
 char VAR_4[VAR_0];
 UINT VAR_5;
 UINT VAR_6;
 UINT VAR_7;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_4, sizeof(VAR_4), VAR_3);
 if (FUNC_0(VAR_4, "\\") || FUNC_0(VAR_4, "/"))
 {
  VAR_4[FUNC_4(VAR_4) - 1] = 0;
 }

 VAR_7 = FUNC_4(VAR_4);

 FUNC_3(VAR_1, VAR_2, "");

 VAR_5 = 0;

 for (VAR_6 = 0;VAR_6 < VAR_7;VAR_6++)
 {
  char VAR_8 = VAR_4[VAR_6];
  if (VAR_8 == '/' || VAR_8 == '\\')
  {
   VAR_4[VAR_5++] = 0;
   VAR_5 = 0;
   FUNC_2(VAR_1, VAR_2, VAR_4);
   VAR_4[VAR_5++] = VAR_8;
  }
  else
  {
   VAR_4[VAR_5++] = VAR_8;
  }
 }

 if (FUNC_4(VAR_1) == 0)
 {
  FUNC_3(VAR_1, VAR_2, "/");
 }

 FUNC_1(VAR_1, VAR_2, VAR_1);
}
