
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_disk_control_callback {unsigned int (* get_num_images ) () ;unsigned int (* get_image_index ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(
      const struct retro_disk_control_callback *VAR_2)
{
   unsigned VAR_3 = 0;
   unsigned VAR_4 = 0;
   bool VAR_5 = 0;

   if (!VAR_2 || !VAR_2->get_num_images)
      return;
   if (!VAR_2->get_image_index)
      return;

   VAR_3 = VAR_2->get_num_images();
   VAR_4 = VAR_2->get_image_index();
   VAR_5 = VAR_3 && VAR_3 != VAR_1;

   if (!VAR_5)
   {
      FUNC_0("%s.\n", FUNC_2(VAR_0));
      return;
   }

   if (VAR_4 < VAR_3 - 1)
      VAR_4++;
   FUNC_1(VAR_4);
}
