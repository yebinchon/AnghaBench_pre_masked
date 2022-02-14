
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
struct string_list {int dummy; } ;
struct TYPE_6__ {int show_hidden_files; } ;
struct TYPE_7__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
typedef int ext_shaders ;
typedef int ext_name ;
typedef enum dir_list_type { ____Placeholder_dir_list_type } dir_list_type ;
struct TYPE_8__ {char* all_ext; } ;
typedef TYPE_3__ core_info_list_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (TYPE_3__**) ;
 struct string_list* FUNC_1 (char const*,char const*,int,int ,int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct string_list*,char*,union string_list_elem_attr) ;
 int FUNC_4 (struct string_list*) ;
 int FUNC_5 (char*,int,struct string_list*,char*) ;
 struct string_list* FUNC_6 () ;
 int FUNC_7 (int ) ;

struct string_list *FUNC_8(const char *VAR_4,
      enum dir_list_type VAR_5, const char *VAR_6)
{



   char VAR_7[255];
   const char *VAR_8 = ((void*)0);
   bool VAR_9 = 0;
   settings_t *VAR_10 = VAR_3;

   switch (VAR_5)
   {
      case 136:
         VAR_8 = VAR_6;
         break;
      case 134:
         {
            VAR_7[0] = '\0';

            if (!FUNC_2(VAR_7, sizeof(VAR_7)))
               return ((void*)0);

            VAR_8 = VAR_7;
         }
         break;
      case 129:
         VAR_9 = 1;

      case 133:
         {
            core_info_list_t *VAR_11 = ((void*)0);
            FUNC_0(&VAR_11);

            if (VAR_11)
               VAR_8 = VAR_11->all_ext;
         }
         break;
      case 128:
         break;
      case 135:
         VAR_8 = "lpl";
         break;
      case 132:
         VAR_8 = "rdb";
         break;
      case 130:
         VAR_8 = VAR_6;
         break;
      case 131:
      default:
         return ((void*)0);
   }

   return FUNC_1(VAR_4, VAR_8, 0,
         VAR_10->bools.show_hidden_files,
         VAR_5 == 133, VAR_9);
}
