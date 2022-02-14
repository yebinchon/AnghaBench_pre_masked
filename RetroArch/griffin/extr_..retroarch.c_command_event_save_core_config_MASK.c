
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_4__ {char* directory_menu_config; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_2__* VAR_8 ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (char*,char*,char*,size_t) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 char* FUNC_10 (int ) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char const*) ;
 int FUNC_14 (char*,int,int,int,int *,int ,int ) ;
 int VAR_9 ;
 int FUNC_15 (char*,int,char*,unsigned int) ;
 char* FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*) ;
 int FUNC_18 (char*,char*,size_t) ;

__attribute__((used)) static bool FUNC_19(void)
{
   char VAR_10[128];
   bool VAR_11 = 0;
   bool VAR_12 = 0;
   const char *VAR_13 = ((void*)0);
   char *VAR_14 = ((void*)0);
   char *VAR_15 = ((void*)0);
   char *VAR_16 = ((void*)0);
   size_t VAR_17 = VAR_5 * sizeof(char);
   settings_t *VAR_18 = VAR_8;

   VAR_10[0] = '\0';

   if (VAR_18 && !FUNC_17(VAR_18->paths.directory_menu_config))
      VAR_16 = FUNC_16(VAR_18->paths.directory_menu_config);
   else if (!FUNC_12(VAR_6))
   {
      VAR_16 = (char*)FUNC_9(VAR_5 * sizeof(char));
      VAR_16[0] = '\0';
      FUNC_6(VAR_16, FUNC_11(VAR_6),
            VAR_17);
   }

   if (FUNC_17(VAR_16))
   {
      FUNC_14(FUNC_10(VAR_3), 1, 180, 1, ((void*)0), VAR_1, VAR_0);
      FUNC_0("[config] %s\n", FUNC_10(VAR_3));
      FUNC_8 (VAR_16);
      return 0;
   }

   VAR_13 = FUNC_11(VAR_7);
   VAR_14 = (char*)FUNC_9(VAR_5 * sizeof(char));
   VAR_15 = (char*)FUNC_9(VAR_5 * sizeof(char));
   VAR_14[0] = '\0';
   VAR_15[0] = '\0';


   if (FUNC_13(VAR_13))
   {
      unsigned VAR_19;
      FUNC_1("%s\n", FUNC_10(VAR_4));


      for (VAR_19 = 0; VAR_19 < 16; VAR_19++)
      {
         char VAR_20[64] = {0};

         FUNC_5(
               VAR_14,
               VAR_13,
               VAR_17);

         FUNC_7(VAR_15, VAR_16, VAR_14,
               VAR_17);

         if (VAR_19)
            FUNC_15(VAR_20, sizeof(VAR_20), "-%u", VAR_19);

         FUNC_18(VAR_20, ".cfg", sizeof(VAR_20));
         FUNC_18(VAR_15, VAR_20, VAR_17);

         if (!FUNC_13(VAR_15))
         {
            VAR_11 = 1;
            break;
         }
      }
   }

   if (!VAR_11)
   {

      FUNC_2("[config] %s\n",
            FUNC_10(VAR_2));
      FUNC_4(VAR_14, ".cfg", VAR_17);
      FUNC_7(VAR_15, VAR_16, VAR_14,
            VAR_17);
   }

   if (VAR_9)
   {



      VAR_9 = 0;
      VAR_12 = 1;
   }

   FUNC_3(VAR_15, VAR_10, sizeof(VAR_10));

   if (!FUNC_17(VAR_10))
      FUNC_14(VAR_10, 1, 180, 1, ((void*)0), VAR_1, VAR_0);

   if (VAR_12)
      VAR_9 = 1;
   else
      VAR_9 = 0;

   FUNC_8(VAR_16);
   FUNC_8(VAR_14);
   FUNC_8(VAR_15);
   return 1;
}
