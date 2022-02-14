
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef int uint64_t ;
struct sunxi_video {unsigned int src_width; unsigned int src_height; TYPE_1__* sunxi_disp; scalar_t__ menu_active; } ;
struct TYPE_2__ {int fd_fb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sunxi_video*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (void const*,struct sunxi_video*) ;

__attribute__((used)) static bool FUNC_5(void *VAR_1, const void *VAR_2, unsigned VAR_3,
      unsigned VAR_4, uint64_t VAR_5, unsigned VAR_6, const char *VAR_7,
      video_frame_info_t *VAR_8)
{
   struct sunxi_video *VAR_9 = (struct sunxi_video*)VAR_1;

   if (VAR_9->src_width != VAR_3 || VAR_9->src_height != VAR_4)
   {

      if (VAR_3 == 0 || VAR_4 == 0)
         return 1;

      FUNC_0("video_sunxi: internal resolution changed by core: %ux%u -> %ux%u\n",
            VAR_9->src_width, VAR_9->src_height, VAR_3, VAR_4);

      FUNC_3(VAR_9, VAR_3, VAR_4, VAR_6);
   }





   if (VAR_9->menu_active)
   {
      FUNC_1(VAR_9->sunxi_disp->fd_fb, VAR_0, 0);
      return 1;
   }

   FUNC_4(VAR_2, VAR_9);

   return 1;
}
