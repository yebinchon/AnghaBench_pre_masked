
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

void FUNC_4(char *VAR_1, char *VAR_2)
{
 char VAR_3[VAR_0];
 int VAR_4,VAR_5;
 char VAR_6;
 char VAR_7[VAR_0];
 int VAR_8;
 if (VAR_2)
 {
  FUNC_2(VAR_3, VAR_2);
 }
 else
 {
  FUNC_2(VAR_3, VAR_1);
 }
 FUNC_0(VAR_3, ((void*)0));
 VAR_8 = 0;
 VAR_5 = FUNC_3(VAR_3);
 VAR_1[0] = 0;
 for (VAR_4 = 0;VAR_4 < VAR_5;VAR_4++)
 {
  VAR_6 = VAR_3[VAR_4];
  switch (VAR_6)
  {
  case '\\':
   VAR_7[VAR_8] = 0;
   VAR_8 = 0;
   FUNC_1(VAR_1, VAR_7);
   FUNC_1(VAR_1, "\\");
   break;
  default:
   VAR_7[VAR_8] = VAR_6;
   VAR_8++;
   break;
  }
 }
 FUNC_0(VAR_1, ((void*)0));
}
