
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int FUNC_2(char *VAR_3, char *VAR_4)
{
 if (FUNC_1(VAR_3, "RTIME") == 0) {
  int VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 < 0)
   return VAR_0;
  VAR_1 = VAR_5;
 }
 else return VAR_0;
 return VAR_2;
}
