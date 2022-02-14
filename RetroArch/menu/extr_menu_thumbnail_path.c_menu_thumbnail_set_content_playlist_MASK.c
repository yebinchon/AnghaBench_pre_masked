
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp_buf ;
struct playlist_entry {char* path; char* label; char* core_name; char* db_name; } ;
typedef int playlist_t ;
struct TYPE_4__ {char* right_path; char* left_path; char* content_path; char* content_label; char* content_core_name; char* content_db_name; char* content_img; void* playlist_left_mode; void* playlist_right_mode; } ;
typedef TYPE_1__ menu_thumbnail_path_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,size_t,struct playlist_entry const**) ;
 size_t FUNC_4 (int *) ;
 void* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,int) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

bool FUNC_9(menu_thumbnail_path_data_t *VAR_4, playlist_t *VAR_5, size_t VAR_6)
{
   const char *VAR_7 = ((void*)0);
   const char *VAR_8 = ((void*)0);
   const char *VAR_9 = ((void*)0);
   const char *VAR_10 = ((void*)0);
   const struct playlist_entry *VAR_11 = ((void*)0);

   if (!VAR_4)
      return 0;



   VAR_4->right_path[0] = '\0';
   VAR_4->left_path[0] = '\0';


   VAR_4->content_path[0] = '\0';
   VAR_4->content_label[0] = '\0';
   VAR_4->content_core_name[0] = '\0';
   VAR_4->content_db_name[0] = '\0';
   VAR_4->content_img[0] = '\0';


   VAR_4->playlist_right_mode = VAR_2;
   VAR_4->playlist_left_mode = VAR_2;

   if (!VAR_5)
      return 0;

   if (VAR_6 >= FUNC_4(VAR_5))
      return 0;


   FUNC_3(VAR_5, VAR_6, &VAR_11);

   VAR_7 = VAR_11->path;
   VAR_8 = VAR_11->label;
   VAR_9 = VAR_11->core_name;
   VAR_10 = VAR_11->db_name;


   if (FUNC_6(VAR_7))
      return 0;



   FUNC_7(VAR_4->content_path,
            VAR_7, sizeof(VAR_4->content_path));



   if (!FUNC_6(VAR_9))
      FUNC_7(VAR_4->content_core_name,
            VAR_9, sizeof(VAR_4->content_core_name));


   if (!FUNC_6(VAR_8))
      FUNC_7(VAR_4->content_label,
            VAR_8, sizeof(VAR_4->content_label));
   else
      FUNC_1(VAR_4->content_label,
            VAR_7, sizeof(VAR_4->content_label));


   FUNC_0(VAR_4);


   if (FUNC_6(VAR_4->content_img))
      return 0;



   if (!FUNC_6(VAR_10))
   {


      if (FUNC_8(VAR_10, "MAME", 4) == 0)
         FUNC_7(VAR_4->content_db_name, "MAME",
               sizeof(VAR_4->content_db_name));
      else
      {
         char *VAR_12 = ((void*)0);
         char VAR_13[VAR_0];
         VAR_13[0] = '\0';




         FUNC_7(VAR_13, VAR_10, sizeof(VAR_13));
         VAR_12 = FUNC_2(VAR_13);

         if (!FUNC_6(VAR_12))
            FUNC_7(VAR_4->content_db_name,
                  VAR_12, sizeof(VAR_4->content_db_name));
         else
            FUNC_7(VAR_4->content_db_name,
                  VAR_13, sizeof(VAR_4->content_db_name));
      }
   }




   VAR_4->playlist_right_mode =
         FUNC_5(VAR_5, VAR_3);
   VAR_4->playlist_left_mode =
         FUNC_5(VAR_5, VAR_1);

   return 1;
}
