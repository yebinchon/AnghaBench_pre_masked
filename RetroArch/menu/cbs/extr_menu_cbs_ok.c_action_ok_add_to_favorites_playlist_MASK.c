
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union string_list_elem_attr {scalar_t__ i; } ;
struct string_list {int dummy; } ;
struct playlist_entry {char* path; char* label; char* core_path; char* core_name; char* crc32; char* db_name; } ;
typedef int playlist_t ;
struct TYPE_7__ {int rpl_entry_selection_ptr; } ;
typedef TYPE_2__ menu_handle_t ;
typedef int fallback_content_label ;
struct TYPE_8__ {char* path; TYPE_1__* inf; } ;
typedef TYPE_3__ core_info_ctx_find_t ;
typedef int core_display_name ;
struct TYPE_6__ {char* display_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ,struct playlist_entry const**) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct string_list*,char*,union string_list_elem_attr) ;
 int FUNC_9 (struct string_list*) ;
 struct string_list* FUNC_10 () ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int FUNC_12(const char *VAR_2,
      const char *VAR_3, unsigned VAR_4, size_t VAR_5, size_t VAR_6)
{
   playlist_t *VAR_7 = FUNC_5();
   const struct playlist_entry *VAR_8 = ((void*)0);
   menu_handle_t *VAR_9 = FUNC_4();
   int VAR_10 = 0;

   if (!VAR_7)
      return 0;
   if (!VAR_9)
      return FUNC_3();


   FUNC_6(VAR_7, VAR_9->rpl_entry_selection_ptr, &VAR_8);



   if (!FUNC_7(VAR_8->path))
   {
      struct string_list *VAR_11 = ((void*)0);
      union string_list_elem_attr VAR_12;
      char VAR_13[VAR_1];

      VAR_13[0] = '\0';


      VAR_12.i = 0;
      VAR_11 = FUNC_10();
      if (!VAR_11)
         return 0;
      FUNC_8(VAR_11, VAR_8->path, VAR_12);


      if (!FUNC_7(VAR_8->label))
      {
         FUNC_8(VAR_11, VAR_8->label, VAR_12);
      }
      else
      {

         char VAR_14[VAR_1];
         VAR_14[0] = '\0';
         FUNC_2(VAR_14, VAR_8->path, sizeof(VAR_14));
         FUNC_8(VAR_11, VAR_14, VAR_12);
      }


      if (!FUNC_7(VAR_8->core_path) && !FUNC_7(VAR_8->core_name))
      {
         core_info_ctx_find_t VAR_15;


         FUNC_8(VAR_11, VAR_8->core_path, VAR_12);



         VAR_15.inf = ((void*)0);
         VAR_15.path = VAR_8->core_path;

         if (FUNC_1(&VAR_15, VAR_8->core_path))
            if (!FUNC_7(VAR_15.inf->display_name))
               FUNC_11(VAR_13, VAR_15.inf->display_name, sizeof(VAR_13));

         if (!FUNC_7(VAR_13))
            FUNC_8(VAR_11, VAR_13, VAR_12);
         else
            FUNC_8(VAR_11, VAR_8->core_name, VAR_12);
      }
      else
      {
         FUNC_8(VAR_11, "DETECT", VAR_12);
         FUNC_8(VAR_11, "DETECT", VAR_12);
      }


      FUNC_8(VAR_11, !FUNC_7(VAR_8->crc32) ? VAR_8->crc32 : "", VAR_12);


      FUNC_8(VAR_11, !FUNC_7(VAR_8->db_name) ? VAR_8->db_name : "", VAR_12);


      if (!FUNC_0(VAR_0, (void*)VAR_11))
         VAR_10 = FUNC_3();


      FUNC_9(VAR_11);
      VAR_11 = ((void*)0);
   }

   return VAR_10;
}
