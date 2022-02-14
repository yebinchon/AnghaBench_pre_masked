
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct playlist_entry {char* label; char* core_path; char* core_name; int path; int member_0; } ;
typedef int playlist_t ;
typedef int new_core_path ;
typedef int menu_handle_t ;
struct TYPE_5__ {char* path; TYPE_1__* inf; } ;
typedef TYPE_2__ core_info_ctx_find_t ;
struct TYPE_4__ {char* display_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char const*,unsigned int,size_t,size_t) ;
 int FUNC_1 (int *,size_t,struct playlist_entry*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (char*,int ,char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,size_t) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t,struct playlist_entry const**) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_15(const char *VAR_4,
      const char *VAR_5, unsigned VAR_6, size_t VAR_7, size_t VAR_8)
{
   char VAR_9[VAR_2];
   size_t VAR_10 = 0;
   playlist_t *VAR_11 = FUNC_7();
   const struct playlist_entry *VAR_12 = ((void*)0);
   const char *VAR_13 = ((void*)0);
   menu_handle_t *VAR_14 = FUNC_6();

   VAR_9[0] = '\0';

   if (!VAR_11 || !VAR_14)
      return FUNC_4();

   VAR_10 = VAR_8;

   FUNC_9(VAR_11, VAR_10, &VAR_12);

   VAR_13 = VAR_12->label;

   if ( FUNC_13(VAR_12->core_path, "DETECT")
         && FUNC_13(VAR_12->core_name, "DETECT"))
   {
      core_info_ctx_find_t VAR_15;
      const char *VAR_16 =
            FUNC_8(VAR_11);
      bool VAR_17 = 0;

      if (!FUNC_12(VAR_16))
      {
         FUNC_14(VAR_9, VAR_16, sizeof(VAR_9));
         FUNC_10(VAR_3, VAR_9, sizeof(VAR_9));
         VAR_17 = 1;
      }

      VAR_15.inf = ((void*)0);
      VAR_15.path = VAR_9;

      if (!FUNC_2(&VAR_15, VAR_9))
         VAR_17 = 0;

      if (!VAR_17)


         return FUNC_0(VAR_12->path,
               VAR_5, VAR_6, VAR_10, VAR_8);

      {
         struct playlist_entry VAR_18 = {0};

         VAR_18.core_path = (char*)VAR_16;
         VAR_18.core_name = VAR_15.inf->display_name;

         FUNC_1(((void*)0),
               VAR_10,
               &VAR_18);
      }

   }
   else if (!FUNC_12(VAR_12->core_path)) {
       FUNC_14(VAR_9, VAR_12->core_path, sizeof(VAR_9));
       FUNC_10(VAR_3, VAR_9, sizeof(VAR_9));
   }

   if (!VAR_11 || !FUNC_5(VAR_11, VAR_10))
   {
      FUNC_11(
            "File could not be loaded from playlist.\n",
            1, 100, 1,
            ((void*)0), VAR_1, VAR_0);
      return FUNC_4();
   }

   FUNC_9(VAR_11,
         VAR_10, &VAR_12);

   return FUNC_3(
         VAR_9, VAR_12->path, VAR_13);
}
