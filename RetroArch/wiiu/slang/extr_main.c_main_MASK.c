
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*,int,size_t,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (char const*,int,int ,int *) ;
 scalar_t__ FUNC_8 (char) ;
 char* FUNC_9 (size_t) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*,char*,int) ;
 char* FUNC_14 (char const*,char*) ;

int FUNC_15(int VAR_2, const char** VAR_3)
{

   const char* VAR_4 = ((void*)0);
   const char* VAR_5 = ((void*)0);
   const char* VAR_6 = ((void*)0);
   const char* VAR_7 = ((void*)0);
   const char* VAR_8 = ((void*)0);

   for(int VAR_9 = 1; VAR_9 < VAR_2 - 1; VAR_9+=2)
   {
      if(!FUNC_11(VAR_3[VAR_9], "--slang"))
         VAR_4 = VAR_3[VAR_9 + 1];
      else if(!FUNC_11(VAR_3[VAR_9], "--vsource"))
         VAR_5 = VAR_3[VAR_9 + 1];
      else if(!FUNC_11(VAR_3[VAR_9], "--psource"))
         VAR_6 = VAR_3[VAR_9 + 1];
      else if(!FUNC_11(VAR_3[VAR_9], "--vsh"))
         VAR_7 = VAR_3[VAR_9 + 1];
      else if(!FUNC_11(VAR_3[VAR_9], "--psh"))
         VAR_8 = VAR_3[VAR_9 + 1];
   }

   if(!VAR_4 || !VAR_7 || !VAR_8 || (!VAR_5 && VAR_6) || (VAR_5 && !VAR_6))
   {
      FUNC_10("Usage :\n");
      FUNC_10("%s --slang <slang input> --vsh <vsh output> --psh <psh output>\n", VAR_3[0]);
      FUNC_10("%s --slang <slang input> --vsource <vsh asm input> --psource <psh asm input> --vsh <vsh output> --psh <psh output>\n", VAR_3[0]);
   }

   char* VAR_10;
   size_t VAR_11;
   {
      FILE* VAR_12 = FUNC_1(VAR_4, "rb");
      FUNC_5(VAR_12, 0, VAR_0);
      VAR_11 = FUNC_6(VAR_12);
      FUNC_5(VAR_12, 0, VAR_1);
      VAR_10 = FUNC_9(VAR_11 + 1);
      FUNC_3(VAR_10, 1, VAR_11, VAR_12);
      FUNC_0(VAR_12);
   }

   VAR_10[VAR_11] = '\0';

   FILE* VAR_13 = FUNC_1(VAR_7, "wb");
   FILE* VAR_14 = FUNC_1(VAR_8, "wb");

   const char* VAR_15 = "#version 150\n";
   FUNC_7(VAR_15, 1, FUNC_12(VAR_15),VAR_13);
   FUNC_7(VAR_15, 1, FUNC_12(VAR_15),VAR_14);

   char* VAR_16 = VAR_10;

   bool VAR_17 = 1;
   bool VAR_18 = 1;

   while(*VAR_16)
   {
      const char* VAR_19 = VAR_16;

      while(*VAR_16 && *VAR_16 != '\n' && *VAR_16 != '\r')
         VAR_16++;

      if (*VAR_16 == '\r')
         *VAR_16++ = '\0';

      *VAR_16++ = '\0';




      if(FUNC_14(VAR_19, "#version"))
         continue;

      if(FUNC_14(VAR_19, "#pragma"))
      {
         if(FUNC_14(VAR_19, "#pragma stage vertex"))
         {
            VAR_17 = 1;
            VAR_18 = 0;
         }
         else if(FUNC_14(VAR_19, "#pragma stage fragment"))
         {
            VAR_17 = 0;
            VAR_18 = 1;
         }

         continue;
      }

      char* VAR_20 = FUNC_14(VAR_19, "layout(");
      if(VAR_20)
      {
         while(*VAR_20 != ')')
            VAR_20++;

         VAR_20++;

         while(*VAR_20 && FUNC_8(*VAR_20))
            VAR_20++;

         if(!FUNC_13(VAR_20, "uniform", 7))
            VAR_19 = VAR_20;
      }

      if(VAR_17)
      {
         FUNC_7(VAR_19, 1, FUNC_12(VAR_19),VAR_13);
         FUNC_2('\n', VAR_13);
      }

      if(VAR_18)
      {
         FUNC_7(VAR_19, 1, FUNC_12(VAR_19),VAR_14);
         FUNC_2('\n', VAR_14);
      }

   }

   FUNC_0(VAR_13);
   FUNC_0(VAR_14);

   FUNC_4(VAR_10);

   return 0;
}
