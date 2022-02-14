
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct retro_system_info {char* library_name; } ;
struct TYPE_4__ {char const* directory_input_remapping; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
typedef int file ;
typedef int directory ;
typedef int content_dir ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*,char const*,char const*,int) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 struct retro_system_info* FUNC_12 () ;
 int FUNC_13 (int ,int,int,int,int *,int ,int ) ;
 int FUNC_14 (char const*) ;

__attribute__((used)) static int FUNC_15(const char *VAR_17,
      const char *VAR_18, unsigned VAR_19, size_t VAR_20, size_t VAR_21,
      unsigned VAR_22)
{
   char VAR_23[VAR_6];
   char VAR_24[VAR_6];
   char VAR_25[VAR_6];
   settings_t *VAR_26 = FUNC_0();
   struct retro_system_info *VAR_27 = FUNC_12();
   const char *VAR_28 = VAR_27 ? VAR_27->library_name : ((void*)0);

   VAR_23[0] = VAR_24[0] = '\0';

   if (!FUNC_14(VAR_28))
      FUNC_1(
            VAR_23,
            VAR_26->paths.directory_input_remapping,
            VAR_28,
            sizeof(VAR_23));

   switch (VAR_22)
   {
      case 129:
      case 132:
         if (!FUNC_14(VAR_28))
            FUNC_1(VAR_24, VAR_28, VAR_28, sizeof(VAR_24));
         break;
      case 128:
      case 131:
         if (!FUNC_14(VAR_28))
            FUNC_1(VAR_24, VAR_28,
                  FUNC_7(FUNC_8(VAR_16)), sizeof(VAR_24));
         break;
      case 130:
      case 133:
         if (!FUNC_14(VAR_28))
         {
            FUNC_2(VAR_25, FUNC_8(VAR_16), sizeof(VAR_25));
            FUNC_1(VAR_24, VAR_28,
                  VAR_25, sizeof(VAR_24));
         }
         break;
   }

   if (!FUNC_9(VAR_23))
       FUNC_10(VAR_23);

   if (VAR_22 < 132)
   {
      if (FUNC_4(VAR_24))
      {
         if (VAR_22 == 129)
            FUNC_11(VAR_11, ((void*)0));
         else if (VAR_22 == 128)
            FUNC_11(VAR_12, ((void*)0));
         else if (VAR_22 == 130)
            FUNC_11(VAR_10, ((void*)0));

         FUNC_13(
               FUNC_6(VAR_5),
               1, 100, 1,
               ((void*)0), VAR_1, VAR_0);
      }
      else
         FUNC_13(
               FUNC_6(VAR_3),
               1, 100, 1,
               ((void*)0), VAR_1, VAR_0);
   }
   else
   {
      if (FUNC_3(VAR_24))
      {
         if (VAR_22 == 132 &&
               FUNC_11(VAR_8, ((void*)0)))
         {
            FUNC_11(VAR_14, ((void*)0));
            FUNC_5(1);
         }

         else if (VAR_22 == 131 &&
               FUNC_11(VAR_9, ((void*)0)))
         {
            FUNC_11(VAR_15, ((void*)0));
            FUNC_5(1);
         }

         else if (VAR_22 == 133 &&
               FUNC_11(VAR_7, ((void*)0)))
         {
            FUNC_11(VAR_13, ((void*)0));
            FUNC_5(1);
         }

         FUNC_13(
               FUNC_6(VAR_4),
               1, 100, 1,
               ((void*)0), VAR_1, VAR_0);
      }
      else
         FUNC_13(
               FUNC_6(VAR_2),
               1, 100, 1,
               ((void*)0), VAR_1, VAR_0);
   }
   return 0;
}
