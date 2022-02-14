
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int int64_t ;


 unsigned int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,void**,int *) ;
 int FUNC_3 (char*) ;
 char* VAR_0 ;
 int FUNC_4 (char*,int,char*,char const*,char const*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1,
      bool *VAR_2, bool *VAR_3,
      int *VAR_4, int *VAR_5)
{
   char VAR_6[1024];
   const char *VAR_7 = VAR_0;
   char *VAR_8 = ((void*)0);
   char *VAR_9 = ((void*)0);
   char *VAR_10 = ((void*)0);
   char *VAR_11 = ((void*)0);
   bool VAR_12 = 0;
   bool VAR_13 = 0;
   unsigned VAR_14 = 0;
   int64_t VAR_15 = 0;
   int VAR_16 = -1;
   int VAR_17 = -1;
   int VAR_18 = -1;
   int VAR_19 = -1;

   VAR_6[0] = '\0';

   FUNC_4(VAR_6, sizeof(VAR_6), "%s/%s/%s", VAR_7, VAR_1, "status");

   if (!FUNC_1(VAR_6))
      return;

   if (FUNC_2(VAR_6, (void**)&VAR_8, &VAR_15) != 1)
      return;

   if (VAR_8)
   {
      if (FUNC_5((char*)VAR_8, "Discharging"))
         *VAR_2 = 1;
      else if (FUNC_5((char*)VAR_8, "Charging"))
      {
         *VAR_2 = 1;
         *VAR_3 = 1;
      }
      else if (FUNC_5((char*)VAR_8, "Full"))
         *VAR_2 = 1;
      FUNC_3(VAR_8);
   }

   VAR_8 = ((void*)0);

   FUNC_4(VAR_6, sizeof(VAR_6), "%s/%s/%s", VAR_7, VAR_1, "capacity");
   if (FUNC_2(VAR_6, (void**)&VAR_8, &VAR_15) != 1)
      goto end;

   VAR_14 = FUNC_0(VAR_8);

   *VAR_5 = VAR_14;

end:
   FUNC_3(VAR_8);
   VAR_8 = ((void*)0);
}
