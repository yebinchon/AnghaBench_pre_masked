
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(char *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1);
 VAR_0 = (char*)FUNC_0(VAR_2+5);
 FUNC_1(VAR_0,VAR_1);
 if(VAR_0[VAR_2-2]=='.'){
  FUNC_1(VAR_0+VAR_2-1,"$O: ");
 }else{
  FUNC_1(VAR_0+VAR_2,"$O: ");
 }
}
