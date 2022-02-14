
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BOOL ;


 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(char *VAR_1)
{
 char *VAR_2, *VAR_3;
 UINT VAR_4, VAR_5, VAR_6, VAR_7;
 BOOL VAR_8;

 if (VAR_1 == ((void*)0))
 {
  return;
 }
 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4 == 0)
 {
  return;
 }
 if (VAR_1[VAR_4 - 1] != ' ' && VAR_1[VAR_4 - 1] != '\t')
 {
  return;
 }

 VAR_2 = FUNC_2(VAR_4 + 1);
 VAR_3 = FUNC_2(VAR_4 + 1);
 VAR_8 = VAR_0;
 VAR_6 = 0;
 VAR_7 = 0;
 for (VAR_5 = 0;VAR_5 < VAR_4;VAR_5++)
 {
  if (VAR_1[VAR_5] != ' ' && VAR_1[VAR_5] != '\t')
  {
   FUNC_0(VAR_2 + VAR_6, VAR_3, VAR_7);
   VAR_6 += VAR_7;
   VAR_7 = 0;
   VAR_2[VAR_6++] = VAR_1[VAR_5];
  }
  else
  {
   VAR_3[VAR_7++] = VAR_1[VAR_5];
  }
 }
 VAR_2[VAR_6] = 0;
 FUNC_3(VAR_1, 0, VAR_2);
 FUNC_1(VAR_2);
 FUNC_1(VAR_3);
}
