
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct retro_disk_control_callback {unsigned int (* get_num_images ) () ;unsigned int (* get_image_index ) () ;} ;
struct TYPE_3__ {struct retro_disk_control_callback disk_control_cb; } ;
typedef TYPE_1__ rarch_system_info_t ;
typedef int file_list_t ;


 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,size_t,char*,unsigned int) ;
 int FUNC_3 (char*,char const*,size_t) ;
 unsigned int FUNC_4 () ;
 unsigned int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(
      file_list_t* VAR_1,
      unsigned *VAR_2, unsigned VAR_3, unsigned VAR_4,
      const char *VAR_5,
      char *VAR_6, size_t VAR_7,
      const char *VAR_8,
      char *VAR_9, size_t VAR_10)
{
   unsigned VAR_11 = 0, VAR_12 = 0;
   struct retro_disk_control_callback *VAR_13 = ((void*)0);
   rarch_system_info_t *VAR_14 = FUNC_1();

   if (!VAR_14)
      return;

   VAR_13 = &VAR_14->disk_control_cb;

   if (!VAR_13)
      return;

   *VAR_2 = 19;
   *VAR_6 = '\0';
   FUNC_3(VAR_9, VAR_8, VAR_10);

   if (!VAR_13->get_num_images)
      return;
   if (!VAR_13->get_image_index)
      return;

   VAR_11 = VAR_13->get_num_images();
   VAR_12 = VAR_13->get_image_index();

   if (VAR_12 >= VAR_11)
      FUNC_3(VAR_6, FUNC_0(VAR_0), VAR_7);
   else
      FUNC_2(VAR_6, VAR_7, "%u", VAR_12 + 1);
}
