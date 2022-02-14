
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

bool
FUNC_3(char *VAR_0, char *VAR_1)
{
 const char VAR_2 = '-';

 char *VAR_3 = FUNC_0(VAR_0, VAR_2);
 char *VAR_4 = FUNC_0(VAR_1, VAR_2);
 int VAR_5 = 0;
 int VAR_6 = 0;

 if (VAR_3 != ((void*)0))
 {
  VAR_5 = VAR_3 - VAR_0;
 }
 else
 {
  VAR_5 = FUNC_1(VAR_0);
 }

 if (VAR_4 != ((void*)0))
 {
  VAR_6 = VAR_4 - VAR_1;
 }
 else
 {
  VAR_6 = FUNC_1(VAR_0);
 }


 if (VAR_5 != VAR_6)
 {
  return 0;
 }

 return FUNC_2(VAR_0, VAR_1, VAR_5) == 0;
}
