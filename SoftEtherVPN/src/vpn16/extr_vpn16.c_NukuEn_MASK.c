
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

void FUNC_2(char *VAR_1, char *VAR_2)
{
 char VAR_3[VAR_0];
 int VAR_4;
 if (VAR_2)
 {
  FUNC_0(VAR_3, VAR_2);
 }
 else
 {
  FUNC_0(VAR_3, VAR_1);
 }
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_3[VAR_4 - 1] == '\\')
 {
  VAR_3[VAR_4 - 1] = 0;
 }
 FUNC_0(VAR_1, VAR_3);
}
