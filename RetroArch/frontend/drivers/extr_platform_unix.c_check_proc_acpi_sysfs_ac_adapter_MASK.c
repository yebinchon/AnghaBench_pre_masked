
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int int64_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,void**,int *) ;
 int FUNC_2 (char*) ;
 char* VAR_0 ;
 int FUNC_3 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(const char * VAR_1, bool *VAR_2)
{
   char VAR_3[1024];
   int64_t VAR_4 = 0;
   char *VAR_5 = ((void*)0);
   const char *VAR_6 = VAR_0;

   VAR_3[0] = '\0';

   FUNC_3(VAR_3, sizeof(VAR_3), "%s/%s", VAR_6, "online");
   if (!FUNC_0(VAR_3))
      return;

   if (FUNC_1(VAR_3, (void**)&VAR_5, &VAR_4) != 1)
      return;

   if (FUNC_4((char*)VAR_5, "1"))
      *VAR_2 = 1;

   FUNC_2(VAR_5);
}
