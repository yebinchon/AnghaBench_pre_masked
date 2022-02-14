
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef enum override_type { ____Placeholder_override_type } override_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int,int,int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static void FUNC_10(enum override_type VAR_6)
{
   char VAR_7[128];

   VAR_7[0] = '\0';

   switch (VAR_6)
   {
      case 128:
         if (FUNC_6(VAR_4))
            FUNC_9(VAR_7, "[config] Config directory not set, cannot save configuration.",
                  sizeof(VAR_7));
         else
            FUNC_2(FUNC_5(VAR_4), VAR_7, sizeof(VAR_7));
         break;
      case 129:
      case 130:
      case 131:
         if (FUNC_3(VAR_6))
         {
            FUNC_9(VAR_7, FUNC_4(VAR_3), sizeof(VAR_7));
            FUNC_1("[config] [overrides] %s\n", VAR_7);



            VAR_5 = 1;
         }
         else
         {
            FUNC_9(VAR_7, FUNC_4(VAR_2), sizeof(VAR_7));
            FUNC_0("[config] [overrides] %s\n", VAR_7);
         }
         break;
   }

   if (!FUNC_8(VAR_7))
      FUNC_7(VAR_7, 1, 180, 1, ((void*)0), VAR_1, VAR_0);
}
