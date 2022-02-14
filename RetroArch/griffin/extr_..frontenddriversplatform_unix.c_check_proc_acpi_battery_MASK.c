
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int path ;
typedef int int64_t ;



 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,void**,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char**,char**,char**) ;
 char* VAR_0 ;
 int FUNC_5 (char*,int,char*,char const*,char const*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char**,int) ;

__attribute__((used)) static void FUNC_8(const char * VAR_1, bool * VAR_2,
      bool * VAR_3, int *VAR_4, int *VAR_5)
{
   char VAR_6[1024];
   const char *VAR_7 = VAR_0;
   int64_t VAR_8 = 0;
   char *VAR_9 = ((void*)0);
   char *VAR_10 = ((void*)0);
   char *VAR_11 = ((void*)0);
   char *VAR_12 = ((void*)0);
   char *VAR_13 = ((void*)0);
   bool VAR_14 = 0;
   bool VAR_15 = 0;
   int VAR_16 = -1;
   int VAR_17 = -1;
   int VAR_18 = -1;
   int VAR_19 = -1;

   VAR_6[0] = '\0';

   FUNC_5(VAR_6, sizeof(VAR_6), "%s/%s/%s", VAR_7, VAR_1, "state");

   if (!FUNC_1(VAR_6))
      goto end;

   if (!FUNC_2(VAR_6, (void**)&VAR_10, &VAR_8))
      goto end;

   FUNC_5(VAR_6, sizeof(VAR_6), "%s/%s/%s", VAR_7, VAR_1, "info");
   if (!FUNC_2(VAR_6, (void**)&VAR_11, &VAR_8))
      goto end;

   VAR_9 = &VAR_10[0];

   while (FUNC_4(&VAR_9, &VAR_12, &VAR_13))
   {
      if (FUNC_6(VAR_12, "present"))
      {
         if (FUNC_6(VAR_13, "yes"))
            *VAR_2 = 1;
      }
      else if (FUNC_6(VAR_12, "charging state"))
      {
         if (FUNC_6(VAR_13, "charging"))
            VAR_14 = 1;
         else
         {
            uint32_t VAR_20 = FUNC_0(VAR_13);

            switch (VAR_20)
            {
               case 128:
                  VAR_14 = 1;
                  break;
               default:
                  break;
            }
         }
      }
      else if (FUNC_6(VAR_12, "remaining capacity"))
      {
         char *VAR_21 = ((void*)0);

         if (VAR_21 && *VAR_21 == ' ')
            VAR_17 = (int)FUNC_7(VAR_13, &VAR_21, 10);
      }
   }

   VAR_9 = &VAR_11[0];

   while (FUNC_4(&VAR_9, &VAR_12, &VAR_13))
   {
      char *VAR_22 = ((void*)0);

      if (FUNC_6(VAR_12, "design capacity"))
         if (VAR_22 && *VAR_22 == ' ')
            VAR_16 = (int)FUNC_7(VAR_13, &VAR_22, 10);
   }

   if ((VAR_16 >= 0) && (VAR_17 >= 0))
   {
      VAR_19 = (int) ((((float) VAR_17) / ((float) VAR_16)) * 100.0f);
      if (VAR_19 < 0)
         VAR_19 = 0;
      if (VAR_19 > 100)
         VAR_19 = 100;
   }







   if ((VAR_18 < 0) && (*VAR_4 < 0))
   {
      if ((VAR_19 < 0) && (*VAR_5 < 0))
         VAR_15 = 1;
      if (VAR_19 > *VAR_5)
         VAR_15 = 1;
   }
   else if (VAR_18 > *VAR_4)
      VAR_15 = 1;

   if (VAR_15)
   {
      *VAR_4 = VAR_18;
      *VAR_5 = VAR_19;
      *VAR_3 = VAR_14;
   }

end:
   if (VAR_11)
      FUNC_3(VAR_11);
   if (VAR_10)
      FUNC_3(VAR_10);
   VAR_10 = ((void*)0);
   VAR_11 = ((void*)0);
}
