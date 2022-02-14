
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef size_t UINT ;


 int FUNC_0 (char*,char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 size_t VAR_1 ;

void FUNC_4(char *VAR_2, char *VAR_3)
{
 UINT VAR_4, VAR_5;
 char VAR_6[VAR_0];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_6, sizeof(VAR_6), VAR_3);
 FUNC_3(VAR_6);
 VAR_5 = FUNC_2(VAR_6);

 for (VAR_4 = 0;VAR_4 < VAR_1;VAR_4++)
 {
  VAR_2[VAR_4] = ' ';
 }

 if (VAR_5 <= VAR_1)
 {
  FUNC_0(VAR_2, VAR_6, VAR_5);
 }
 else
 {
  FUNC_0(VAR_2, VAR_6, VAR_1);
 }
}
