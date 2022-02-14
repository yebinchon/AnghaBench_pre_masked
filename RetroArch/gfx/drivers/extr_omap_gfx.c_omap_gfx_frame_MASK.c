
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef int uint64_t ;
struct TYPE_5__ {unsigned int out_height; unsigned int out_stride; } ;
struct TYPE_6__ {void const* frame; TYPE_1__ scaler; scalar_t__ active; } ;
struct TYPE_7__ {unsigned int width; unsigned int height; TYPE_2__ menu; int omap; } ;
typedef TYPE_3__ omap_video_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,char const*) ;
 int FUNC_4 (int ,void const*,unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_7(void *VAR_0, const void *VAR_1, unsigned VAR_2,
      unsigned VAR_3, uint64_t VAR_4, unsigned VAR_5, const char *VAR_6,
      video_frame_info_t *VAR_7)
{
   omap_video_t *VAR_8 = (omap_video_t*)VAR_0;

   if (!VAR_1)
      return 1;

   if (VAR_2 > 4 && VAR_3 > 4 && (VAR_2 != VAR_8->width || VAR_3 != VAR_8->height))
   {
      FUNC_1("[video_omap]: mode set (resolution changed by core)\n");

      if (FUNC_6(VAR_8->omap, VAR_2, VAR_3) != 0)
      {
         FUNC_0("[video_omap]: mode set failed\n");
         return 0;
      }

      VAR_8->width = VAR_2;
      VAR_8->height = VAR_3;
   }

   FUNC_5(VAR_8->omap);
   FUNC_4(VAR_8->omap, VAR_1, VAR_8->height, VAR_5);





   if (VAR_8->menu.active)
      FUNC_4(VAR_8->omap, VAR_8->menu.frame,
            VAR_8->menu.scaler.out_height,
            VAR_8->menu.scaler.out_stride);

   if (VAR_6)
      FUNC_3(VAR_8, VAR_6);

   return 1;
}
