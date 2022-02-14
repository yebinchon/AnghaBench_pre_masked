
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int VCOS_LOG_LEVEL_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,char const**,char) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,int *) ;

__attribute__((used)) static int FUNC_3(VCOS_LOG_LEVEL_T *VAR_1, const char **VAR_2, char VAR_3)
{
   char VAR_4[16];
   int VAR_5 = 1;
   if (FUNC_0(VAR_4,sizeof(VAR_4),VAR_2,VAR_3))
   {
      if (FUNC_2(VAR_4,VAR_1) != VAR_0)
      {
         FUNC_1("Invalid trace level '%s'\n", VAR_4);
         VAR_5 = 0;
      }
   }
   else
   {
      VAR_5 = 0;
   }
   return VAR_5;
}
