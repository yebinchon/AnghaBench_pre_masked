
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;

char *FUNC_6(char *VAR_0)
{
 char *VAR_1;
 char *VAR_2;
 char VAR_3[16];
 UINT VAR_4, VAR_5, VAR_6;
 UINT VAR_7;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_0);
 VAR_1 = FUNC_5(VAR_4 + 1);
 VAR_5 = 0;
 if (VAR_4 == 1 && VAR_0[0] == '$')
 {

  VAR_1[0] = 0;
 }
 else
 {
  for (VAR_6 = 0;VAR_6 < VAR_4;VAR_6++)
  {
   if (VAR_0[VAR_6] != '$')
   {
    VAR_1[VAR_5++] = VAR_0[VAR_6];
   }
   else
   {
    VAR_3[0] = '0';
    VAR_3[1] = 'x';
    VAR_3[2] = VAR_0[VAR_6 + 1];
    VAR_3[3] = VAR_0[VAR_6 + 2];
    VAR_6 += 2;
    VAR_3[4] = 0;
    VAR_7 = FUNC_4(VAR_3);
    VAR_1[VAR_5++] = (char)VAR_7;
   }
  }
 }
 VAR_2 = FUNC_1(FUNC_3(VAR_1) + 1);
 FUNC_2(VAR_2, FUNC_3(VAR_1) + 1, VAR_1);
 FUNC_0(VAR_1);
 return VAR_2;
}
