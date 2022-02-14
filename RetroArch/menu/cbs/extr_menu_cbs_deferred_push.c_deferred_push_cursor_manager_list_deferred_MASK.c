
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int path_content_database; } ;
struct TYPE_8__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
typedef int rdb_path ;
struct TYPE_9__ {char* path; char* path_b; char* path_c; } ;
typedef TYPE_3__ menu_displaylist_info_t ;
typedef int config_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (int *,char*,char**) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (char*,int ,char*,int) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(
      menu_displaylist_info_t *VAR_2)
{
   char VAR_3[VAR_1];
   int VAR_4 = -1;
   char *VAR_5 = ((void*)0);
   char *VAR_6 = ((void*)0);
   const char *VAR_7 = VAR_2->path;
   config_file_t *VAR_8 = ((void*)0);

   if (!(VAR_8 = FUNC_1(VAR_7)))
      return -1;

   if (!FUNC_3(VAR_8, "query", &VAR_5))
      goto end;

   if (!FUNC_3(VAR_8, "rdb", &VAR_6))
      goto end;

   VAR_3[0] = '\0';

   {
      settings_t *VAR_9 = FUNC_2();
      if (VAR_9)
         FUNC_5(VAR_3,
               VAR_9->paths.path_content_database,
               VAR_6, sizeof(VAR_3));
   }

   if (!FUNC_8(VAR_2->path_b))
      FUNC_6(VAR_2->path_b);

   if (!FUNC_8(VAR_2->path_c))
      FUNC_6(VAR_2->path_c);

   VAR_2->path_b = FUNC_7(VAR_2->path);

   if (!FUNC_8(VAR_2->path))
      FUNC_6(VAR_2->path);

   VAR_2->path_c = FUNC_7(VAR_5);
   VAR_2->path = FUNC_7(VAR_3);

   VAR_4 = FUNC_4(VAR_2, VAR_0);

end:
   FUNC_0(VAR_8);
   FUNC_6(VAR_6);
   FUNC_6(VAR_5);
   return VAR_4;
}
