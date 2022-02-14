
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;


 int FUNC_0 (char*,int ,char*,int ,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;

void FUNC_5(char *VAR_0, UINT VAR_1, void *VAR_2, UINT VAR_3, char VAR_4)
{
 char *VAR_5;
 UCHAR *VAR_6 = (UCHAR *)VAR_2;
 UINT VAR_7;
 UINT VAR_8;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 VAR_7 = VAR_3 * 3 + 1;

 VAR_5 = FUNC_4(VAR_7);

 for (VAR_8 = 0;VAR_8 < VAR_3;VAR_8++)
 {
  FUNC_0(&VAR_5[VAR_8 * 3], 0, "%02X%c", VAR_6[VAR_8], VAR_4);
 }
 if (FUNC_3(VAR_5) >= 1)
 {
  if (VAR_5[FUNC_3(VAR_5) - 1] == VAR_4)
  {
   VAR_5[FUNC_3(VAR_5) - 1] = 0;
  }
 }

 FUNC_2(VAR_0, VAR_1, VAR_5);

 FUNC_1(VAR_5);
}
