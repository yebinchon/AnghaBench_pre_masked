
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

int FUNC_4 (int VAR_0, char **VAR_1)
{
   if (VAR_0 < 2) {
      FUNC_2("Usage: %s <filename>\n", VAR_1[0]);
      FUNC_1(1);
   }
   FUNC_0();
   return FUNC_3(VAR_1[1]);
}
