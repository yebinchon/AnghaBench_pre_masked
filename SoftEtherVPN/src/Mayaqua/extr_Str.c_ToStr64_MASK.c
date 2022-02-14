
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int UINT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*) ;

void FUNC_2(char *VAR_1, UINT64 VAR_2)
{
 char VAR_3[VAR_0];
 UINT VAR_4 = 0;
 UINT VAR_5, VAR_6;

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 FUNC_0(VAR_3, 0, "");


 while (1)
 {
  UINT VAR_7 = (UINT)(VAR_2 % (UINT64)10);
  VAR_2 = VAR_2 / (UINT64)10;
  VAR_3[VAR_4++] = (char)('0' + VAR_7);
  if (VAR_2 == 0)
  {
   VAR_3[VAR_4++] = 0;
   break;
  }
 }


 VAR_5 = FUNC_1(VAR_3);
 for (VAR_6 = 0;VAR_6 < VAR_5;VAR_6++)
 {
  VAR_1[VAR_5 - VAR_6 - 1] = VAR_3[VAR_6];
 }
 VAR_1[VAR_5] = 0;
}
