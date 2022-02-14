
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


union string_list_elem_attr {scalar_t__ i; } ;
struct string_list {int dummy; } ;
struct retro_system_info {char const* library_name; } ;
typedef int playlist_t ;
struct TYPE_11__ {int rpl_entry_selection_ptr; } ;
typedef TYPE_3__ menu_handle_t ;
struct TYPE_9__ {char const* label; } ;
struct TYPE_12__ {TYPE_1__ name; } ;
typedef TYPE_4__ global_t ;
typedef int core_path ;
typedef int core_name ;
struct TYPE_13__ {char* path; TYPE_2__* inf; } ;
typedef TYPE_5__ core_info_ctx_find_t ;
typedef int content_label ;
struct TYPE_10__ {char const* display_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_3__* FUNC_5 () ;
 char* FUNC_6 (int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int ,char const**) ;
 int FUNC_9 (int *,int ,char const**) ;
 scalar_t__ FUNC_10 (int *,int ,char const*,char*) ;
 struct retro_system_info* FUNC_11 () ;
 scalar_t__ FUNC_12 (char const*) ;
 int FUNC_13 (struct string_list*,char const*,union string_list_elem_attr) ;
 int FUNC_14 (struct string_list*) ;
 struct string_list* FUNC_15 () ;
 int FUNC_16 (char*,char*,int) ;

__attribute__((used)) static int FUNC_17(const char *VAR_4,
      const char *VAR_5, unsigned VAR_6, size_t VAR_7, size_t VAR_8)
{
   const char *VAR_9 = FUNC_6(VAR_2);
   int VAR_10 = 0;



   if (!FUNC_12(VAR_9))
   {
      global_t *VAR_11 = FUNC_3();
      struct retro_system_info *VAR_12 = FUNC_11();
      struct string_list *VAR_13 = ((void*)0);
      const char *VAR_14 = ((void*)0);
      const char *VAR_15 = ((void*)0);

      union string_list_elem_attr VAR_16;
      char VAR_17[VAR_1];
      char VAR_18[VAR_1];
      char VAR_19[VAR_1];

      VAR_17[0] = '\0';
      VAR_18[0] = '\0';
      VAR_19[0] = '\0';


      VAR_16.i = 0;
      VAR_13 = FUNC_15();
      if (!VAR_13)
         return 0;




      if (VAR_11)
         if (!FUNC_12(VAR_11->name.label))
            FUNC_16(VAR_17, VAR_11->name.label, sizeof(VAR_17));

      if (FUNC_12(VAR_17))
         FUNC_2(VAR_17, VAR_9, sizeof(VAR_17));


      if (VAR_12)
      {
         if (!FUNC_12(FUNC_6(VAR_3)))
         {
            core_info_ctx_find_t VAR_20;


            FUNC_16(VAR_18, FUNC_6(VAR_3), sizeof(VAR_18));



            VAR_20.inf = ((void*)0);
            VAR_20.path = VAR_18;

            if (FUNC_1(&VAR_20, VAR_18))
               if (!FUNC_12(VAR_20.inf->display_name))
                  FUNC_16(VAR_19, VAR_20.inf->display_name, sizeof(VAR_19));
         }


         if (FUNC_12(VAR_19) && !FUNC_12(VAR_12->library_name))
            FUNC_16(VAR_19, VAR_12->library_name, sizeof(VAR_19));
      }

      if (FUNC_12(VAR_18) || FUNC_12(VAR_19))
      {
         FUNC_16(VAR_18, "DETECT", sizeof(VAR_18));
         FUNC_16(VAR_19, "DETECT", sizeof(VAR_19));
      }


      {
         menu_handle_t *VAR_21 = FUNC_5();
         if (VAR_21)
         {
            playlist_t *VAR_22 = FUNC_7();

            if (FUNC_10(VAR_22, VAR_21->rpl_entry_selection_ptr, VAR_9, VAR_18))
            {
               FUNC_8(VAR_22, VAR_21->rpl_entry_selection_ptr, &VAR_14);
               FUNC_9(VAR_22, VAR_21->rpl_entry_selection_ptr, &VAR_15);
            }
         }
      }
      FUNC_13(VAR_13, VAR_9, VAR_16);
      FUNC_13(VAR_13, VAR_17, VAR_16);
      FUNC_13(VAR_13, VAR_18, VAR_16);
      FUNC_13(VAR_13, VAR_19, VAR_16);
      FUNC_13(VAR_13, !FUNC_12(VAR_14) ? VAR_14 : "", VAR_16);
      FUNC_13(VAR_13, !FUNC_12(VAR_15) ? VAR_15 : "", VAR_16);


      if (!FUNC_0(VAR_0, (void*)VAR_13))
         VAR_10 = FUNC_4();


      FUNC_14(VAR_13);
      VAR_13 = ((void*)0);
   }

   return VAR_10;
}
