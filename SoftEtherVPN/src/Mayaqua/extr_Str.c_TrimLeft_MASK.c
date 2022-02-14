
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;

void FUNC_4(char *VAR_2)
{
 char *VAR_3;
 UINT VAR_4, VAR_5, VAR_6;
 BOOL VAR_7;

 if (VAR_2 == ((void*)0))
 {
  return;
 }
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 == 0)
 {
  return;
 }
 if (VAR_2[0] != ' ' && VAR_2[0] != '\t')
 {
  return;
 }

 VAR_3 = FUNC_1(VAR_4 + 1);
 VAR_7 = VAR_0;
 VAR_6 = 0;
 for (VAR_5 = 0;VAR_5 < VAR_4;VAR_5++)
 {
  if (VAR_2[VAR_5] != ' ' && VAR_2[VAR_5] != '\t')
  {
   VAR_7 = VAR_1;
  }
  if (VAR_7)
  {
   VAR_3[VAR_6++] = VAR_2[VAR_5];
  }
 }
 VAR_3[VAR_6] = 0;
 FUNC_2(VAR_2, 0, VAR_3);
 FUNC_0(VAR_3);
}
