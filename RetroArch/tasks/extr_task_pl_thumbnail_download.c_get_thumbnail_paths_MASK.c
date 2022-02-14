
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp_buf ;
typedef int raw_url ;
struct TYPE_3__ {char* dir_thumbnails; int thumbnail_path_data; int type_idx; } ;
typedef TYPE_1__ pl_thumb_handle_t ;
typedef int content_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char const*,size_t) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char const**) ;
 int FUNC_4 (int ,char const**) ;
 int FUNC_5 (int ,char const**) ;
 int FUNC_6 (int ,char const**) ;
 int FUNC_7 (char*,char*,size_t) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (char*,int ,int) ;

__attribute__((used)) static bool FUNC_12(
   pl_thumb_handle_t *VAR_2,
   char *VAR_3, size_t VAR_4,
   char *VAR_5, size_t VAR_6)
{
   const char *VAR_7 = ((void*)0);
   const char *VAR_8 = ((void*)0);
   const char *VAR_9 = ((void*)0);
   const char *VAR_10 = ((void*)0);
   const char *VAR_11 = ((void*)0);
   char VAR_12[VAR_1];
   char VAR_13[2048];
   char VAR_14[VAR_1];

   VAR_12[0] = '\0';
   VAR_13[0] = '\0';
   VAR_14[0] = '\0';

   if (!VAR_2->thumbnail_path_data)
      return 0;

   if (FUNC_8(VAR_2->dir_thumbnails))
      return 0;


   FUNC_6(VAR_2->thumbnail_path_data, &VAR_7);
   FUNC_3(VAR_2->thumbnail_path_data, &VAR_8);
   if (!FUNC_4(VAR_2->thumbnail_path_data, &VAR_9))
      return 0;
   if (!FUNC_5(VAR_2->type_idx, &VAR_10))
      return 0;


   if (FUNC_8(VAR_8))
   {
      if (FUNC_8(VAR_7))
         return 0;





      if (FUNC_9(VAR_7, "history") ||
          FUNC_9(VAR_7, "favorites"))
      {
         if (!FUNC_2(
               VAR_2->thumbnail_path_data, VAR_12, sizeof(VAR_12)))
            return 0;

         VAR_11 = VAR_12;
      }
      else
         VAR_11 = VAR_7;
   }
   else
      VAR_11 = VAR_8;


   FUNC_1(VAR_3, VAR_2->dir_thumbnails,
         VAR_11, VAR_4);
   FUNC_1(VAR_14, VAR_3, VAR_10, sizeof(VAR_14));
   FUNC_1(VAR_3, VAR_14, VAR_9, VAR_4);

   if (FUNC_8(VAR_3))
      return 0;


   FUNC_11(VAR_13, FUNC_0(VAR_0), sizeof(VAR_13));
   FUNC_10(VAR_13, "/", sizeof(VAR_13));
   FUNC_10(VAR_13, VAR_11, sizeof(VAR_13));
   FUNC_10(VAR_13, "/", sizeof(VAR_13));
   FUNC_10(VAR_13, VAR_10, sizeof(VAR_13));
   FUNC_10(VAR_13, "/", sizeof(VAR_13));
   FUNC_10(VAR_13, VAR_9, sizeof(VAR_13));

   if (FUNC_8(VAR_13))
      return 0;

   FUNC_7(VAR_5, VAR_13, VAR_6);

   if (FUNC_8(VAR_5))
      return 0;

   return 1;
}
