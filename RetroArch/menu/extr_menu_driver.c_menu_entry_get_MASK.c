
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tmp ;
typedef int newpath ;
struct TYPE_14__ {char* action_sublabel_cache; scalar_t__ (* action_sublabel ) (TYPE_5__*,int ,unsigned int,char const*,char const*,char*,int) ;TYPE_2__* setting; int (* action_get_value ) (TYPE_5__*,int *,int ,unsigned int,char const*,char*,int,char const*,char*,int) ;int (* action_label ) (TYPE_5__*,int ,unsigned int,char const*,char const*,char*,int) ;int checked; int enum_idx; } ;
typedef TYPE_3__ menu_file_list_cbs_t ;
struct TYPE_15__ {int path_enabled; unsigned int idx; char* label; char* rich_label; char* value; char* password_value; char* sublabel; char* path; int type; scalar_t__ sublabel_enabled; scalar_t__ value_enabled; int spacing; scalar_t__ rich_label_enabled; int checked; int enum_idx; scalar_t__ label_enabled; int entry_idx; } ;
typedef TYPE_4__ menu_entry_t ;
struct TYPE_16__ {TYPE_1__* list; } ;
typedef TYPE_5__ file_list_t ;
struct TYPE_13__ {scalar_t__ enum_value_idx; int dont_use_enum_idx_representation; } ;
struct TYPE_12__ {char* path; char* label; scalar_t__ actiondata; int entry_idx; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char const**,int *,int *,int *) ;
 TYPE_5__* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char const*) ;
 size_t FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (TYPE_5__*,int ,unsigned int,char const*,char const*,char*,int) ;
 int FUNC_7 (TYPE_5__*,int *,int ,unsigned int,char const*,char*,int,char const*,char*,int) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ,unsigned int,char const*,char const*,char*,int) ;

void FUNC_9(menu_entry_t *VAR_2, size_t VAR_3,
      size_t VAR_4, void *VAR_5, bool VAR_6)
{
   char VAR_7[255];
   const char *VAR_8 = ((void*)0);
   const char *VAR_9 = ((void*)0);
   menu_file_list_cbs_t *VAR_10 = ((void*)0);
   file_list_t *VAR_11 = FUNC_1(VAR_3);
   file_list_t *VAR_12 = (VAR_5) ? (file_list_t*)VAR_5 : VAR_11;
   bool VAR_13 = VAR_2->path_enabled;

   VAR_7[0] = '\0';

   if (!VAR_12)
      return;

   VAR_8 = VAR_12->list[VAR_4].path;
   VAR_9 = VAR_12->list[VAR_4].label;
   VAR_2->type = VAR_12->list[VAR_4].type;
   VAR_2->entry_idx = VAR_12->list[VAR_4].entry_idx;

   VAR_10 = (menu_file_list_cbs_t*)VAR_12->list[VAR_4].actiondata;
   VAR_2->idx = (unsigned)VAR_4;

   if (VAR_2->label_enabled && !FUNC_4(VAR_9))
      FUNC_5(VAR_2->label, VAR_9, sizeof(VAR_2->label));

   if (VAR_10)
   {
      const char *VAR_14 = ((void*)0);

      VAR_2->enum_idx = VAR_10->enum_idx;
      VAR_2->checked = VAR_10->checked;

      FUNC_0(((void*)0), &VAR_14, ((void*)0), ((void*)0), ((void*)0));

      if (VAR_2->rich_label_enabled && VAR_10->action_label)
      {
         VAR_10->action_label(VAR_12,
               VAR_2->type, (unsigned)VAR_4,
               VAR_14, VAR_8,
               VAR_2->rich_label,
               sizeof(VAR_2->rich_label));

         if (FUNC_4(VAR_2->rich_label))
            VAR_13 = 1;
      }

      if ((VAR_13 || VAR_2->value_enabled) &&
          VAR_10->action_get_value &&
          VAR_6)
      {
         VAR_10->action_get_value(VAR_12,
               &VAR_2->spacing, VAR_2->type,
               (unsigned)VAR_4, VAR_14,
               VAR_2->value,
               VAR_2->value_enabled ? sizeof(VAR_2->value) : 0,
               VAR_8,
               VAR_7,
               VAR_13 ? sizeof(VAR_7) : 0);

         if (!FUNC_4(VAR_2->value))
         {
            if (FUNC_2(VAR_2))
            {
               size_t VAR_15, VAR_16;
               VAR_15 = FUNC_5(VAR_2->password_value, VAR_2->value,
                     sizeof(VAR_2->password_value));
               for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
                  VAR_2->password_value[VAR_16] = '*';
            }
         }
      }

      if (VAR_2->sublabel_enabled)
      {
         if (!FUNC_4(VAR_10->action_sublabel_cache))
            FUNC_5(VAR_2->sublabel,
                     VAR_10->action_sublabel_cache, sizeof(VAR_2->sublabel));
         else if (VAR_10->action_sublabel)
         {
            char VAR_17[VAR_0];
            VAR_17[0] = '\0';

            if (VAR_10->action_sublabel(VAR_12,
                     VAR_2->type, (unsigned)VAR_4,
                     VAR_14, VAR_8,
                     VAR_17,
                     sizeof(VAR_17)) > 0)
            {



               FUNC_5(VAR_10->action_sublabel_cache,
                     VAR_17, sizeof(VAR_10->action_sublabel_cache));
            }

            FUNC_5(VAR_2->sublabel, VAR_17, sizeof(VAR_2->sublabel));
         }
      }
   }

   if (VAR_13)
   {
      if (!FUNC_4(VAR_8) && !VAR_6)
         FUNC_5(VAR_7, VAR_8, sizeof(VAR_7));
      else if (VAR_10 && VAR_10->setting && VAR_10->setting->enum_value_idx != VAR_1
            && !VAR_10->setting->dont_use_enum_idx_representation)
         FUNC_5(VAR_7,
               FUNC_3(VAR_10->setting->enum_value_idx),
               sizeof(VAR_7));

      if (!FUNC_4(VAR_7))
         FUNC_5(VAR_2->path, VAR_7, sizeof(VAR_2->path));
   }
}
