
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
typedef int playlist_t ;
struct TYPE_3__ {char* right_path; char* left_path; char* system; void* playlist_left_mode; void* playlist_right_mode; } ;
typedef TYPE_1__ menu_thumbnail_path_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 char const* FUNC_0 (int ) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int *) ;
 void* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char*,char const*,int) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

bool FUNC_9(menu_thumbnail_path_data_t *VAR_6,
      const char *VAR_7, playlist_t *VAR_8)
{
   if (!VAR_6)
      return 0;



   VAR_6->right_path[0] = '\0';
   VAR_6->left_path[0] = '\0';


   VAR_6->system[0] = '\0';


   VAR_6->playlist_right_mode = VAR_4;
   VAR_6->playlist_left_mode = VAR_4;

   if (FUNC_5(VAR_7))
      return 0;



   if (FUNC_8(VAR_7, "MAME", 4) == 0)
      FUNC_7(VAR_6->system, "MAME", sizeof(VAR_6->system));
   else
      FUNC_7(VAR_6->system, VAR_7, sizeof(VAR_6->system));




   if (VAR_8)
   {
      const char *VAR_9 = FUNC_3(VAR_8);
      const char *VAR_10 = ((void*)0);
      bool VAR_11 = 0;



      if (FUNC_5(VAR_9))
         return 1;

      VAR_10 = FUNC_1(VAR_9);



      if (FUNC_5(VAR_10))
         return 1;


      VAR_11 =
            (FUNC_6(VAR_7, "history") &&
             FUNC_6(VAR_10,
                FUNC_0(VAR_1))) ||
            (FUNC_6(VAR_7, "favorites") &&
             FUNC_6(VAR_10,
                FUNC_0(VAR_0)));

      if (!VAR_11)
      {



         char *VAR_12 = ((void*)0);
         char VAR_13[VAR_2];

         VAR_13[0] = '\0';

         FUNC_7(VAR_13, VAR_10, sizeof(VAR_13));
         VAR_12 = FUNC_2(VAR_13);
         VAR_11 = FUNC_6(VAR_12, VAR_7);
      }


      if (VAR_11)
      {
         VAR_6->playlist_right_mode =
               FUNC_4(VAR_8, VAR_5);
         VAR_6->playlist_left_mode =
               FUNC_4(VAR_8, VAR_3);
      }
   }

   return 1;
}
