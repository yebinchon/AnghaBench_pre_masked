
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int menu_show_advanced_settings; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_10__ {int flags; char* short_description; char* name; } ;
typedef TYPE_3__ rarch_setting_t ;
typedef int file_list_t ;
typedef enum setting_type { ____Placeholder_setting_type } setting_type ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef enum menu_displaylist_parse_type { ____Placeholder_menu_displaylist_parse_type } menu_displaylist_parse_type ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int *,char const*,char const*,unsigned int,int ,int ) ;
 int FUNC_2 (int *,char const*,char const*,int,unsigned int,int ,int ) ;
 unsigned int FUNC_3 (TYPE_3__*) ;
 char const* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(
      file_list_t *VAR_6,
      enum menu_displaylist_parse_type VAR_7,
      bool VAR_8,
      rarch_setting_t *VAR_9,
      unsigned VAR_10,
      bool VAR_11
      )
{
   static enum setting_type VAR_12[] =
   {
      140,
      134,
      144,
      135,
      128,
      142,
      138,
      143,
      140,
      131,
      133,
      130,
      136,
      141,
      134,
      132,
   };
   enum setting_type VAR_13 = VAR_12[VAR_7];
   size_t VAR_14 = 0;
   settings_t *VAR_15 = FUNC_0();
   bool VAR_16 = VAR_15->bools.menu_show_advanced_settings;

   if (!VAR_9)
      return -1;

   if (!VAR_16)
   {
      uint64_t VAR_17 = VAR_9->flags;
      if (VAR_17 & VAR_4)
         goto end;




   }

   for (;;)
   {
      bool VAR_18 = 0;
      const char *VAR_19 = VAR_9->short_description;
      const char *VAR_20 = VAR_9->name;
      enum setting_type VAR_21 = FUNC_5(VAR_9);
      rarch_setting_t **VAR_22 = &VAR_9;

      switch (VAR_7)
      {
         case 158:
            switch (VAR_21)
            {
               case 137:
               case 140:
               case 129:
               case 139:
                  goto loop;
               default:
                  break;
            }
            break;
         case 159:
         case 153:
            if (VAR_21 == 137)
               break;
            goto loop;
         case 145:
            break;
         case 160:
         case 151:
         case 146:
         case 149:
         case 157:
         case 156:
         case 154:
         case 152:
         case 148:
         case 150:
         case 155:
         case 147:
            if (VAR_21 == VAR_13)
               break;
            goto loop;
      }

      if (VAR_11)
         FUNC_2(VAR_6,
               VAR_19, VAR_20,
               (enum msg_hash_enums)VAR_10,
               FUNC_3(VAR_9), 0, 0);
      else
      {
         if (
               (VAR_10 >= VAR_2) &&
               (VAR_10 < VAR_3)
            )
            VAR_10 = (unsigned)(VAR_2 + VAR_14);
         if (VAR_10 == 0)
            VAR_10 = FUNC_3(VAR_9);

         FUNC_1(VAR_6, VAR_19,
               VAR_20, VAR_10, 0, 0);
      }
      VAR_14++;

loop:
      switch (VAR_7)
      {
         case 158:
         case 159:
         case 153:
         case 145:
            if (FUNC_5(VAR_9) == VAR_13)
               VAR_18 = 1;
            break;
         case 157:
         case 154:
         case 152:
         case 156:
         case 151:
         case 146:
         case 149:
         case 150:
         case 155:
         case 148:
         case 147:
         case 160:
            VAR_18 = 1;
            break;
      }

      if (VAR_18)
         break;
      (*VAR_22 = *VAR_22 + 1);
   }

end:
   if (VAR_14 == 0)
   {
      if (VAR_8)
         FUNC_2(VAR_6,
               FUNC_4(VAR_1),
               FUNC_4(VAR_0),
               VAR_0,
               0, 0, 0);
      return -1;
   }

   return 0;
}
