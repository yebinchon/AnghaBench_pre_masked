
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
struct TYPE_8__ {int show_hidden_files; } ;
struct TYPE_11__ {TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
typedef int salamander_name ;
typedef int menu_handle_t ;
struct TYPE_12__ {char* path; int download_core; int need_sort; int list; int label; int exts; } ;
typedef TYPE_5__ menu_displaylist_info_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef enum msg_file_type { ____Placeholder_msg_file_type } msg_file_type ;
typedef int core_info_list_t ;
struct TYPE_9__ {int i; } ;
struct TYPE_10__ {char const* data; TYPE_2__ attr; } ;


 unsigned int VAR_0 ;
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




 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int *,char*,char*,size_t) ;
 int FUNC_3 (struct string_list*,char const*,int ,int,int ,int,int) ;
 int FUNC_4 (struct string_list*,int) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ,size_t,char*) ;
 int FUNC_7 (char*,char const*,char const*,size_t) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (size_t) ;
 int FUNC_14 (int ,char const*,char*,int,int,int ,int ) ;
 int FUNC_15 (int ,size_t,char const**,int *,unsigned int*,int *,int *) ;
 int FUNC_16 (char const**,int *,int *,int *,int *) ;
 int FUNC_17 (int ,char*,char const*,int ,int ,int ,int ) ;
 char* FUNC_18 (int) ;
 char* FUNC_19 (char const*) ;
 scalar_t__ FUNC_20 (char const*) ;
 scalar_t__ FUNC_21 (int ,char*) ;
 scalar_t__ FUNC_22 (char const*,char*) ;
 int FUNC_23 (struct string_list*) ;
 struct string_list* FUNC_24 () ;
 int FUNC_25 (struct string_list*) ;

__attribute__((used)) static unsigned FUNC_26(
      menu_handle_t *VAR_14,
      menu_displaylist_info_t *VAR_15)
{
   size_t VAR_16, VAR_17;
   struct string_list *VAR_18 = ((void*)0);
   unsigned VAR_19 = 0;
   settings_t *VAR_20 = FUNC_0();
   const char *VAR_21 = VAR_15->path;
   bool VAR_22;

   if (FUNC_20(VAR_21))
   {
      if (FUNC_12(VAR_15->list, 1) != 0)
         FUNC_14(VAR_15->list, "/", "",
               VAR_12, VAR_1, 0, 0);
      VAR_19++;
      return VAR_19;
   }

   VAR_18 = FUNC_24();
   VAR_22 = FUNC_3(VAR_18, VAR_21, VAR_15->exts,
         1, VAR_20->bools.show_hidden_files, 0, 0);
   if (!VAR_22)
   {
      FUNC_23(VAR_18);
      VAR_18 = ((void*)0);
   }


   {
      char *VAR_23 = (char*)FUNC_13(VAR_13 * sizeof(char));

      VAR_23[0] = '\0';

      FUNC_8(VAR_23, VAR_21,
            VAR_13 * sizeof(char));

      if (FUNC_20(VAR_23))
      {
         FUNC_17(VAR_15->list,
               FUNC_18(VAR_11),
               VAR_21,
               VAR_8,
               VAR_3, 0, 0);
      }

      FUNC_9(VAR_23);
   }

   if (!VAR_18)
   {
      const char *VAR_24 = FUNC_18(
            VAR_10);
      FUNC_14(VAR_15->list, VAR_24, "",
            VAR_10, 0, 0, 0);
      VAR_19++;
      return VAR_19;
   }

   if (FUNC_21(VAR_15->label, FUNC_18(VAR_4)))
      VAR_15->download_core = 1;

   FUNC_4(VAR_18, 1);

   VAR_17 = VAR_18->size;

   if (VAR_17 == 0)
   {
      FUNC_23(VAR_18);
      return 0;
   }

   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
   {
      bool VAR_25;
      char VAR_26[64];
      const char *VAR_27 = ((void*)0);
      enum msg_hash_enums VAR_28 = VAR_12;
      enum msg_file_type VAR_29 = VAR_2;

      VAR_26[0] = '\0';

      switch (VAR_18->elems[VAR_16].attr.i)
      {
         case 129:
            VAR_29 = VAR_1;
            break;
         case 131:
         case 130:

            continue;
         case 128:
         default:
            VAR_29 = VAR_0;
            break;
      }

      VAR_25 = (VAR_29 == VAR_1);


      VAR_27 = VAR_18->elems[VAR_16].data;

      if (!FUNC_20(VAR_27))
         VAR_27 = FUNC_19(VAR_27);


      if (FUNC_11())
      {
         char VAR_30[VAR_13];

         VAR_30[0] = '\0';

         if (FUNC_10(
                  VAR_30, sizeof(VAR_30)))
         {
            if (FUNC_22(VAR_27, VAR_30))
               continue;
         }

         if (VAR_25)
            continue;
      }


      if (VAR_25)
      {
         VAR_29 = VAR_1;
         VAR_28 = VAR_6;
      }
      else
      {
         VAR_29 = VAR_0;
         if (FUNC_21(VAR_15->label, FUNC_18(VAR_9)))
            VAR_28 = VAR_7;
         else
            VAR_28 = VAR_5;
      }

      VAR_19++;

      FUNC_14(VAR_15->list, VAR_27, VAR_26,
            VAR_28,
            VAR_29, 0, 0);
   }

   FUNC_23(VAR_18);

   if (VAR_19 == 0)
      return 0;

   {
      core_info_list_t *VAR_31 = ((void*)0);
      const char *VAR_32 = ((void*)0);

      FUNC_1(&VAR_31);

      FUNC_16(&VAR_32, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

      VAR_17 = FUNC_5(VAR_15->list);

      for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
      {
         unsigned VAR_33 = 0;
         const char *VAR_34 = ((void*)0);

         FUNC_15(VAR_15->list,
               VAR_16, &VAR_34, ((void*)0), &VAR_33, ((void*)0),
               ((void*)0));

         if (VAR_33 == VAR_0)
         {
            size_t VAR_35 = VAR_13 * sizeof(char);
            char *VAR_36 = (char*)FUNC_13(VAR_35);
            char *VAR_37 = (char*)FUNC_13(VAR_35);
            VAR_36[0] =
            VAR_37[0] = '\0';

            FUNC_7(VAR_36, VAR_32, VAR_34, VAR_35);

            if (FUNC_2(VAR_31,
                     VAR_36, VAR_37, VAR_35))
               FUNC_6(VAR_15->list, VAR_16, VAR_37);

            FUNC_9(VAR_36);
            FUNC_9(VAR_37);
         }
      }
      VAR_15->need_sort = 1;
   }

   return VAR_19;
}
