
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct retro_game_info {char const* path; int member_0; } ;
struct retro_disk_control_callback {unsigned int (* get_num_images ) () ;int (* replace_image_index ) (unsigned int,struct retro_game_info*) ;int (* add_image_index ) () ;} ;
struct TYPE_3__ {int disk_control_cb; } ;
typedef TYPE_1__ rarch_system_info_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ,int,int,int *,int ,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_10 (char*,int,char*,char*,char const*) ;
 int FUNC_11 () ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (unsigned int,struct retro_game_info*) ;

__attribute__((used)) static bool FUNC_14(const char *VAR_7)
{
   unsigned VAR_8;
   char VAR_9[128];
   struct retro_game_info VAR_10 = {0};
   const struct retro_disk_control_callback *VAR_11 = ((void*)0);
   rarch_system_info_t *VAR_12 = &VAR_6;

   VAR_9[0] = '\0';

   if (VAR_12)
      VAR_11 = (const struct retro_disk_control_callback*)
         &VAR_12->disk_control_cb;

   if (!VAR_11)
      return 0;

   FUNC_2(1, 0);

   VAR_11->add_image_index();
   VAR_8 = VAR_11->get_num_images();
   if (!VAR_8)
      return 0;
   VAR_8--;

   VAR_10.path = VAR_7;
   VAR_11->replace_image_index(VAR_8, &VAR_10);

   FUNC_10(VAR_9, sizeof(VAR_9), "%s: %s", FUNC_4(VAR_3), VAR_7);
   FUNC_0("%s\n", VAR_9);
   FUNC_9(VAR_9, 0, 180, 1, ((void*)0), VAR_2, VAR_1);






   if (FUNC_6(VAR_5))
   {




      FUNC_7(VAR_4, VAR_7);
      FUNC_5();
   }

   FUNC_1(VAR_0, ((void*)0));
   FUNC_3(VAR_8);
   FUNC_2(0, 0);

   return 1;
}
