
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
typedef int tmp_str2 ;
typedef int tmp_str ;
struct string_list {unsigned int size; TYPE_1__* elems; } ;
struct retro_system_info {char* valid_extensions; int member_0; } ;
struct TYPE_13__ {scalar_t__ multimedia_builtin_imageviewer_enable; scalar_t__ multimedia_builtin_mediaplayer_enable; int filter_by_current_core; } ;
struct TYPE_14__ {TYPE_2__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_15__ {int scratch_buf; int scratch2_buf; } ;
typedef TYPE_4__ menu_handle_t ;
struct TYPE_16__ {char* path; char* label; char* exts; int setting; int enum_idx; int type_default; } ;
typedef TYPE_5__ menu_displaylist_info_t ;
typedef enum menu_displaylist_ctl_state { ____Placeholder_menu_displaylist_ctl_state } menu_displaylist_ctl_state ;
struct TYPE_17__ {char* all_ext; } ;
typedef TYPE_6__ core_info_list_t ;
struct TYPE_12__ {char* data; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_6__**) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (char*,int ,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct retro_system_info*) ;
 int FUNC_6 (struct retro_system_info*) ;
 int FUNC_7 (struct retro_system_info*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 TYPE_4__* FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct retro_system_info* FUNC_13 () ;
 void* FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct string_list*,char const*,union string_list_elem_attr) ;
 int FUNC_17 (struct string_list*,char*) ;
 int FUNC_18 (struct string_list*) ;
 int FUNC_19 (char*,size_t,struct string_list*,char*) ;
 struct string_list* FUNC_20 () ;
 struct string_list* FUNC_21 (char*,char*) ;
 int FUNC_22 (char*,char*,int) ;
 int FUNC_23 (char*,char*,int) ;

__attribute__((used)) static int FUNC_24(menu_displaylist_info_t *VAR_3,
      unsigned VAR_4, enum menu_displaylist_ctl_state VAR_5)
{
   char *VAR_6 = ((void*)0);
   core_info_list_t *VAR_7 = ((void*)0);
   settings_t *VAR_8 = FUNC_0();
   menu_handle_t *VAR_9 = FUNC_10();

   if (!VAR_9)
      return FUNC_9();

   FUNC_1(&VAR_7);

   switch (VAR_4)
   {
      case 129:
      case 128:
         break;
      default:
         {
            char VAR_10[VAR_1];
            char VAR_11[VAR_1];

            VAR_10[0] = '\0';
            VAR_11[0] = '\0';

            FUNC_3(VAR_10, VAR_9->scratch2_buf,
                  VAR_9->scratch_buf, sizeof(VAR_10));
            FUNC_3(VAR_11, VAR_9->scratch2_buf,
                  VAR_9->scratch_buf, sizeof(VAR_11));

            if (!FUNC_15(VAR_3->path))
               FUNC_4(VAR_3->path);
            if (!FUNC_15(VAR_3->label))
               FUNC_4(VAR_3->label);

            VAR_3->path = FUNC_14(VAR_10);
            VAR_3->label = FUNC_14(VAR_11);
         }
         break;
   }

   VAR_3->type_default = VAR_0;

   switch (VAR_4)
   {
      case 130:
      case 131:
      case 129:
         VAR_3->setting = FUNC_11(VAR_3->enum_idx);
         break;
      default:
         break;
   }

   VAR_6 = (char*)FUNC_8(VAR_1 * sizeof(char));

   VAR_6[0] = '\0';

   switch (VAR_4)
   {
      case 131:
         {
            struct retro_system_info *VAR_12 =
               FUNC_13();
            if (VAR_12)
            {
               if (!FUNC_15(VAR_12->valid_extensions))
                  FUNC_23(VAR_6, VAR_12->valid_extensions,
                        VAR_1 * sizeof(char));
            }
         }
         break;
      case 129:
         {
            bool VAR_13 = 0;
            char *VAR_14 = ((void*)0);

            if (FUNC_12(VAR_3->setting) == VAR_2)
            {
            }
            else
            {
               struct retro_system_info *VAR_15 =
                  FUNC_13();
               if (VAR_15 && !FUNC_15(VAR_15->valid_extensions))
               {
                  VAR_14 = FUNC_14(VAR_15->valid_extensions);
                  VAR_13 = 1;
               }
            }

            if (!VAR_14)
               VAR_14 = VAR_3->exts;

            if (!FUNC_15(VAR_14))
            {
               size_t VAR_16 = VAR_1 * sizeof(char);
               struct string_list *VAR_17 = FUNC_21(VAR_14, "|");
               FUNC_19(VAR_6, VAR_16,
                     VAR_17, "|");
               FUNC_18(VAR_17);

            }

            if (VAR_13)
            {
               FUNC_4(VAR_14);

               if (VAR_14 == VAR_3->exts)
                  VAR_3->exts = ((void*)0);
            }
         }
         break;
      case 130:
      case 128:
         {
            union string_list_elem_attr VAR_18;
            size_t VAR_19 = VAR_1 * sizeof(char);
            char *VAR_20 = (char*)FUNC_8(VAR_1 * sizeof(char));
            struct string_list *VAR_21 = FUNC_20();
            struct retro_system_info *VAR_22 = FUNC_13();

            VAR_20[0] = '\0';
            VAR_18.i = 0;

            if (VAR_22)
            {
               if (!FUNC_15(VAR_22->valid_extensions))
               {
                  unsigned VAR_23;
                  struct string_list *VAR_24 = FUNC_21(VAR_22->valid_extensions, "|");

                  for (VAR_23 = 0; VAR_23 < VAR_24->size; VAR_23++)
                  {
                     const char *VAR_25 = VAR_24->elems[VAR_23].data;
                     FUNC_16(VAR_21, VAR_25, VAR_18);
                  }

                  FUNC_18(VAR_24);
               }
            }

            if (!VAR_8->bools.filter_by_current_core)
            {
               if (VAR_7 && !FUNC_15(VAR_7->all_ext))
               {
                  unsigned VAR_26;
                  struct string_list *VAR_27 = FUNC_21(VAR_7->all_ext, "|");

                  for (VAR_26 = 0; VAR_26 < VAR_27->size; VAR_26++)
                  {
                     if (!FUNC_17(VAR_21, VAR_27->elems[VAR_26].data))
                     {
                        const char *VAR_28 = VAR_27->elems[VAR_26].data;
                        FUNC_16(VAR_21, VAR_28, VAR_18);
                     }
                  }

                  FUNC_18(VAR_27);
               }
            }

            FUNC_19(VAR_20, VAR_19,
                  VAR_21, "|");

            {
               struct string_list *VAR_29 = FUNC_21(VAR_20, "|");
               FUNC_19(VAR_6, VAR_19,
                     VAR_29, "|");
               FUNC_18(VAR_29);
            }
            FUNC_4(VAR_20);
            FUNC_18(VAR_21);
         }
         break;
   }

   if (VAR_8->bools.multimedia_builtin_mediaplayer_enable ||
         VAR_8->bools.multimedia_builtin_imageviewer_enable)
   {
      struct retro_system_info VAR_30 = {0};

      (void)VAR_30;
   }

   if (!FUNC_15(VAR_6))
   {
      if (!FUNC_15(VAR_3->exts))
         FUNC_4(VAR_3->exts);
      VAR_3->exts = FUNC_14(VAR_6);
   }
   FUNC_4(VAR_6);

   return FUNC_2(VAR_3, VAR_5);
}
