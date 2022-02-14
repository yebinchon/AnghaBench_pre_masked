
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (char*,size_t,char*,struct tm const*) ;
 size_t FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (int *) ;

size_t FUNC_4(char *VAR_0,
      const char *VAR_1, size_t VAR_2)
{
   time_t VAR_3 = FUNC_3(((void*)0));
   const struct tm* VAR_4 = FUNC_0(&VAR_3);

   FUNC_1(VAR_0, VAR_2,
         "RetroArch-%m%d-%H%M%S", VAR_4);
   return FUNC_2(VAR_0, VAR_1, VAR_2);
}
