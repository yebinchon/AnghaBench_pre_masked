
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct playlist_entry {char* core_path; char* core_name; int label; int path; int member_0; } ;
typedef int playlist_t ;
typedef int new_core_path ;
struct TYPE_7__ {size_t unsigned_var; } ;
struct TYPE_9__ {TYPE_1__ scratchpad; } ;
typedef TYPE_3__ menu_handle_t ;
struct TYPE_10__ {char* path; TYPE_2__* inf; } ;
typedef TYPE_4__ core_info_ctx_find_t ;
struct TYPE_8__ {char* display_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char const*,unsigned int,size_t,size_t) ;
 int FUNC_1 (int *,size_t,struct playlist_entry*) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,size_t) ;
 TYPE_3__* FUNC_6 () ;
 int * FUNC_7 () ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t,struct playlist_entry const**) ;
 int FUNC_10 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_14(const char *VAR_3,
      const char *VAR_4, unsigned VAR_5, size_t VAR_6, size_t VAR_7)
{
   size_t VAR_8 = 0;
   playlist_t *VAR_9 = FUNC_7();
   const struct playlist_entry *VAR_10 = ((void*)0);
   menu_handle_t *VAR_11 = FUNC_6();

   if (!VAR_9 || !VAR_11)
      return FUNC_4();

   VAR_8 = VAR_11->scratchpad.unsigned_var;

   FUNC_9(VAR_9, VAR_8, &VAR_10);

   if ( FUNC_12(VAR_10->core_path, "DETECT")
         && FUNC_12(VAR_10->core_name, "DETECT"))
   {
      core_info_ctx_find_t VAR_12;
      char VAR_13[VAR_2];
      const char *VAR_14 = ((void*)0);
      const char *VAR_15 =
            FUNC_8(VAR_9);
      bool VAR_16 = 0;

      VAR_13[0] = '\0';

      if (!FUNC_11(VAR_15))
      {
         FUNC_13(VAR_13, VAR_15, sizeof(VAR_13));
         VAR_16 = 1;
      }

      VAR_12.inf = ((void*)0);
      VAR_12.path = VAR_13;

      if (!FUNC_2(&VAR_12, VAR_13))
         VAR_16 = 0;





      if (!VAR_16)
         return FUNC_0(VAR_14,
               VAR_4, VAR_5, VAR_8, VAR_7);

      {
         struct playlist_entry VAR_17 = {0};

         VAR_17.core_path = VAR_13;
         VAR_17.core_name = VAR_12.inf->display_name;

         FUNC_1(
               VAR_9,
               VAR_8,
               &VAR_17);
      }
   }

   if (!FUNC_5(VAR_9, VAR_8))
   {
      FUNC_10("File could not be loaded from playlist.\n", 1, 100, 1, ((void*)0), VAR_1, VAR_0);
      goto error;
   }

   FUNC_9(VAR_9, VAR_8, &VAR_10);

   return FUNC_3(VAR_10->core_path, VAR_10->path, VAR_10->label);

error:
   return FUNC_4();
}
