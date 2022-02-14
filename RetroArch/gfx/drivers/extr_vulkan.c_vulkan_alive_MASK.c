
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int video_width; unsigned int video_height; int quitting; int should_resize; int ctx_data; TYPE_1__* ctx_driver; } ;
typedef TYPE_2__ vk_t ;
struct TYPE_3__ {int (* check_window ) (int ,int*,int*,unsigned int*,unsigned int*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int*,int*,unsigned int*,unsigned int*,int) ;
 int FUNC_2 (unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_1)
{
   bool VAR_2 = 0;
   bool VAR_3 = 0;
   bool VAR_4 = 0;
   vk_t *VAR_5 = (vk_t*)VAR_1;
   bool VAR_6 = FUNC_0(VAR_0, ((void*)0));
   unsigned VAR_7 = VAR_5->video_width;
   unsigned VAR_8 = VAR_5->video_height;

   VAR_5->ctx_driver->check_window(VAR_5->ctx_data,
            &VAR_3, &VAR_4, &VAR_7, &VAR_8, VAR_6);

   if (VAR_3)
      VAR_5->quitting = 1;
   else if (VAR_4)
      VAR_5->should_resize = 1;

   VAR_2 = !VAR_5->quitting;

   if (VAR_7 != 0 && VAR_8 != 0)
   {
      FUNC_2(&VAR_7, &VAR_8);
      VAR_5->video_width = VAR_7;
      VAR_5->video_height = VAR_8;
   }

   return VAR_2;
}
