
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct string_list {size_t size; TYPE_3__* elems; } ;
struct TYPE_8__ {int show_hidden_files; scalar_t__ menu_content_show_video; scalar_t__ menu_content_show_music; scalar_t__ menu_content_show_images; scalar_t__ menu_content_show_favorites; scalar_t__ menu_content_show_add; } ;
struct TYPE_11__ {TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_12__ {char* path; int list; int type_default; } ;
typedef TYPE_5__ menu_displaylist_info_t ;
typedef enum msg_file_type { ____Placeholder_msg_file_type } msg_file_type ;
struct TYPE_9__ {int i; } ;
struct TYPE_10__ {char* data; TYPE_2__ attr; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;


 TYPE_4__* FUNC_0 () ;
 struct string_list* FUNC_1 (char const*,int *,int,int ,int,int) ;
 int FUNC_2 (struct string_list*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,char const*,char*,int ,int,int ,int ) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct string_list*) ;

__attribute__((used)) static unsigned FUNC_13(
      menu_displaylist_info_t *VAR_23, bool VAR_24)
{
   size_t VAR_25, VAR_26;
   struct string_list *VAR_27 = ((void*)0);
   unsigned VAR_28 = 0;
   settings_t *VAR_29 = FUNC_0();
   const char *VAR_30 = VAR_23->path;

   if (FUNC_9(VAR_30))
   {
      int VAR_31 = FUNC_4(VAR_23->list, 1);

      if (VAR_31 == 0)
         VAR_28++;
      else
         if (FUNC_5(VAR_23->list, "/", "",
               VAR_22, VAR_5, 0, 0))
            VAR_28++;
      return VAR_28;
   }

   if (!VAR_24)
   {
     if (VAR_29->bools.menu_content_show_favorites)
      if (FUNC_5(VAR_23->list,
            FUNC_6(VAR_15),
            FUNC_6(VAR_8),
            VAR_8,
            VAR_21, 0, 0))
         VAR_28++;
     if (VAR_29->bools.menu_content_show_images)
      if (FUNC_5(VAR_23->list,
            FUNC_6(VAR_16),
            FUNC_6(VAR_9),
            VAR_9,
            VAR_21, 0, 0))
         VAR_28++;

     if (VAR_29->bools.menu_content_show_music)
      if (FUNC_5(VAR_23->list,
            FUNC_6(VAR_17),
            FUNC_6(VAR_10),
            VAR_10,
            VAR_21, 0, 0))
         VAR_28++;
   }

   VAR_27 = FUNC_1(VAR_30, ((void*)0), 1,
         VAR_29->bools.show_hidden_files, 1, 0);

   if (!VAR_27)
      return VAR_28;

   FUNC_2(VAR_27, 1);

   VAR_26 = VAR_27->size;

   for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++)
   {
      const char *VAR_32 = VAR_27->elems[VAR_25].data;
      const char *VAR_33 = ((void*)0);
      enum msg_file_type VAR_34 = VAR_6;

      switch (VAR_27->elems[VAR_25].attr.i)
      {
         case 129:
            VAR_34 = VAR_5;
            break;
         case 128:
         default:
            VAR_34 = (enum msg_file_type)VAR_23->type_default;
            break;
      }

      if (VAR_34 == VAR_5)
         continue;

      if (FUNC_9(VAR_32))
         continue;

      VAR_33 = FUNC_7(VAR_32);

      if (FUNC_9(VAR_33))
         continue;


      if (!FUNC_11(FUNC_8(VAR_33),
               "lpl"))
         continue;


      if (FUNC_10(VAR_33, FUNC_3(VAR_1)) ||
          FUNC_10(VAR_33, FUNC_3(VAR_3)) ||
          FUNC_10(VAR_33, FUNC_3(VAR_4)) ||
          FUNC_10(VAR_33, FUNC_3(VAR_2)) ||
          FUNC_10(VAR_33, FUNC_3(VAR_0)))
         continue;

      VAR_34 = VAR_7;

      if (VAR_24)
         VAR_32 = VAR_33;

      if (FUNC_5(VAR_23->list, VAR_32, "",
            VAR_12,
            VAR_34, 0, 0))
         VAR_28++;
   }

   FUNC_12(VAR_27);

   return VAR_28;
}
