
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int ,char*) ;
 size_t FUNC_3 (char*) ;

void FUNC_4(char *VAR_0)
{
 UINT VAR_1, VAR_2, VAR_3;
 char *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_3(VAR_0);
 VAR_4 = FUNC_1(VAR_2 + 1);
 VAR_3 = 0;
 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  if (VAR_0[VAR_1] == '\\')
  {
   VAR_1++;
   switch (VAR_0[VAR_1])
   {
   case 0:
    goto FINISH;
   case '\\':
    VAR_4[VAR_3++] = '\\';
    break;
   case ' ':
    VAR_4[VAR_3++] = ' ';
    break;
   case 'n':
   case 'N':
    VAR_4[VAR_3++] = '\n';
    break;
   case 'r':
   case 'R':
    VAR_4[VAR_3++] = '\r';
    break;
   case 't':
   case 'T':
    VAR_4[VAR_3++] = '\t';
    break;
   }
  }
  else
  {
   VAR_4[VAR_3++] = VAR_0[VAR_1];
  }
 }
FINISH:
 VAR_4[VAR_3++] = 0;
 FUNC_2(VAR_0, 0, VAR_4);
 FUNC_0(VAR_4);
}
