
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int format ;


 int FUNC_0 (char*,char const*,char*,char const*,size_t) ;
 int FUNC_1 (char*,char const*,char*,size_t) ;
 struct tm* FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,struct tm const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;

void FUNC_6(char *VAR_0,
      const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
   char VAR_4[256];
   time_t VAR_5 = FUNC_5(((void*)0));
   const struct tm* VAR_6 = FUNC_2(&VAR_5);

   VAR_4[0] = '\0';

   if (FUNC_4(VAR_2))
   {
      FUNC_3(VAR_4, sizeof(VAR_4), "-%y%m%d-%H%M%S", VAR_6);
      FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3);
   }
   else
   {
      FUNC_3(VAR_4, sizeof(VAR_4), "-%y%m%d-%H%M%S.", VAR_6);

      FUNC_0(VAR_0,
            VAR_1, VAR_4, VAR_2,
            VAR_3);
   }
}
