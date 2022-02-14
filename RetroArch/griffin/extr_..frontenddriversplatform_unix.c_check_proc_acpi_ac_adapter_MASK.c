
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int path ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,void**,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char**,char**,char**) ;
 char* VAR_1 ;
 int FUNC_5 (char*,int,char*,char const*,char const*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(const char * VAR_2, bool *VAR_3)
{
   char VAR_4[1024];
   const char *VAR_5 = VAR_1;
   char *VAR_6 = ((void*)0);
   char *VAR_7 = ((void*)0);
   char *VAR_8 = ((void*)0);
   char *VAR_9 = ((void*)0);
   int64_t VAR_10 = 0;

   VAR_4[0] = '\0';

   FUNC_5(VAR_4, sizeof(VAR_4), "%s/%s/%s", VAR_5, VAR_2, "state");
   if (!FUNC_1(VAR_4))
      return;

   if (FUNC_2(VAR_4, (void**)&VAR_6, &VAR_10) != 1)
      return;

   VAR_7 = &VAR_6[0];
   while (FUNC_4(&VAR_7, &VAR_8, &VAR_9))
   {
      uint32_t VAR_11 = FUNC_0(VAR_9);

      if (FUNC_6(VAR_8, "state") &&
            VAR_11 == VAR_0)
         *VAR_3 = 1;
   }

   if (VAR_6)
      FUNC_3(VAR_6);
   VAR_6 = ((void*)0);
}
