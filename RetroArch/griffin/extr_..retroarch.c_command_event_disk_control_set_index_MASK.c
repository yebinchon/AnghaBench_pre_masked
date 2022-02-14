
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct retro_disk_control_callback {unsigned int (* get_num_images ) () ;scalar_t__ (* set_image_index ) (unsigned int) ;} ;
struct TYPE_3__ {int disk_control_cb; } ;
typedef TYPE_1__ rarch_system_info_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int,int,int *,int ,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_4 (char*,int,char*,char*,unsigned int,unsigned int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 unsigned int FUNC_7 () ;
 scalar_t__ FUNC_8 (unsigned int) ;

__attribute__((used)) static void FUNC_9(unsigned VAR_7)
{
   unsigned VAR_8;
   char VAR_9[128];
   bool VAR_10 = 0;
   const struct retro_disk_control_callback *VAR_11 = ((void*)0);
   rarch_system_info_t *VAR_12 = &VAR_6;

   VAR_9[0] = '\0';

   if (VAR_12)
      VAR_11 = (const struct retro_disk_control_callback*)&VAR_12->disk_control_cb;

   if (!VAR_11 || !VAR_11->get_num_images)
      return;

   VAR_8 = VAR_11->get_num_images();

   if (VAR_11->set_image_index(VAR_7))
   {
      if (VAR_7 < VAR_8)
         FUNC_4(VAR_9, sizeof(VAR_9), "%s: %u/%u.",
               FUNC_2(VAR_5),
               VAR_7 + 1, VAR_8);
      else
         FUNC_6(VAR_9,
               FUNC_2(VAR_4),
               sizeof(VAR_9));
   }
   else
   {
      if (VAR_7 < VAR_8)
         FUNC_4(VAR_9, sizeof(VAR_9), "%s %u/%u.",
               FUNC_2(VAR_3),
               VAR_7 + 1, VAR_8);
      else
         FUNC_6(VAR_9,
               FUNC_2(VAR_2),
               sizeof(VAR_9));
      VAR_10 = 1;
   }

   if (!FUNC_5(VAR_9))
   {
      if (VAR_10)
         FUNC_0("%s\n", VAR_9);
      else
         FUNC_1("%s\n", VAR_9);
      FUNC_3(VAR_9, 1, 180, 1, ((void*)0), VAR_1, VAR_0);
   }
}
