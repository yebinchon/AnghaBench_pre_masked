
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct playlist_entry {char* core_path; char* core_name; int member_0; } ;
struct TYPE_9__ {int show_hidden_files; } ;
struct TYPE_8__ {int directory_libretro; int path_libretro_info; } ;
struct TYPE_11__ {TYPE_2__ bools; TYPE_1__ paths; } ;
typedef TYPE_4__ settings_t ;
typedef int resolved_core_path ;
typedef int msg ;
struct TYPE_10__ {int unsigned_var; } ;
struct TYPE_12__ {TYPE_3__ scratchpad; } ;
typedef TYPE_5__ menu_handle_t ;
typedef int ext_name ;
typedef int core_display_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,struct playlist_entry*) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (char const*,char*,int,int ,int ,char*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 TYPE_5__* FUNC_5 () ;
 int FUNC_6 (size_t*,int ,int) ;
 size_t FUNC_7 () ;
 int FUNC_8 (size_t) ;
 char const* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_14(const char *VAR_5,
      const char *VAR_6, unsigned VAR_7, size_t VAR_8, size_t VAR_9)
{
   char VAR_10[255];
   char VAR_11[VAR_3];
   char VAR_12[VAR_3];
   char VAR_13[VAR_3];
   settings_t *VAR_14 = FUNC_1();
   size_t VAR_15 = FUNC_7();
   struct playlist_entry VAR_16 = {0};
   menu_handle_t *VAR_17 = FUNC_5();

   VAR_10[0] = '\0';
   VAR_11[0] = '\0';
   VAR_12[0] = '\0';
   VAR_13[0] = '\0';

   if (!VAR_17)
      return FUNC_4();

   if (!FUNC_3(VAR_10, sizeof(VAR_10)))
      return FUNC_4();

   FUNC_2(VAR_5,
         VAR_11, sizeof(VAR_11),
         VAR_14->paths.path_libretro_info,
         VAR_14->paths.directory_libretro,
         VAR_10,
         VAR_14->bools.show_hidden_files,
         1);

    FUNC_13(VAR_12, VAR_5, sizeof(VAR_12));
    FUNC_10(VAR_4, VAR_12, sizeof(VAR_12));



   VAR_16.core_path = (char*)VAR_12;
   VAR_16.core_name = VAR_11;

   FUNC_0(
         ((void*)0),
         VAR_17->scratchpad.unsigned_var,
         &VAR_16);


   FUNC_13(VAR_13, FUNC_9(VAR_2), sizeof(VAR_13));
   FUNC_12(VAR_13, VAR_11, sizeof(VAR_13));
   FUNC_11(VAR_13, 1, 100, 1, ((void*)0), VAR_1, VAR_0);

   FUNC_6(&VAR_15, 0, 1);
   FUNC_8(VAR_15);

   return FUNC_4();
}
