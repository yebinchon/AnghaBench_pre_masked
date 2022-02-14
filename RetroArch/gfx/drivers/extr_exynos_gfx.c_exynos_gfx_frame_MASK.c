
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int osd_stat_params; int stat_text; scalar_t__ statistics_show; } ;
typedef TYPE_1__ video_frame_info_t ;
typedef int uint64_t ;
struct font_params {int dummy; } ;
struct exynos_video {unsigned int width; unsigned int height; int data; int menu_rotation; scalar_t__ menu_active; int bytes_per_pixel; } ;
struct exynos_page {int clear; int used; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,void const*,unsigned int) ;
 scalar_t__ FUNC_3 (int ,struct exynos_page*) ;
 struct exynos_page* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct exynos_video*,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int,unsigned int,int ) ;
 int FUNC_8 (TYPE_1__*,int *,int ,struct font_params const*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_10(void *VAR_0, const void *VAR_1, unsigned VAR_2,
      unsigned VAR_3, uint64_t VAR_4, unsigned VAR_5, const char *VAR_6,
      video_frame_info_t *VAR_7)
{
   struct exynos_video *VAR_8 = VAR_0;
   struct exynos_page *VAR_9 = ((void*)0);


   if (!VAR_8->menu_active && !VAR_1)
      return 1;

   if (VAR_1 != ((void*)0))
   {
      if (VAR_2 != VAR_8->width || VAR_3 != VAR_8->height)
      {

         if (VAR_2 == 0 || VAR_3 == 0)
            return 1;

         FUNC_0("[video_exynos]: resolution changed by core: %ux%u -> %ux%u\n",
               VAR_8->width, VAR_8->height, VAR_2, VAR_3);
         FUNC_7(VAR_8->data, VAR_2, VAR_3, VAR_8->bytes_per_pixel);

         VAR_8->width = VAR_2;
         VAR_8->height = VAR_3;
      }

      VAR_9 = FUNC_4(VAR_8->data);

      if (FUNC_2(VAR_8->data, VAR_1, VAR_5) != 0)
         goto fail;
   }



   if (VAR_8->width == 0 || VAR_8->height == 0)
      FUNC_6(VAR_8->data);

   if (!VAR_9)
      VAR_9 = FUNC_4(VAR_8->data);

   if (VAR_8->menu_active)
   {
      if (FUNC_1(VAR_8->data, VAR_8->menu_rotation) != 0)
         goto fail;



   }
   else if (VAR_7->statistics_show)
   {
      struct font_params *VAR_10 = VAR_7 ?
         (struct font_params*)&VAR_7->osd_stat_params : ((void*)0);

      if (VAR_10)
      {
         FUNC_8(VAR_7, ((void*)0), VAR_7->stat_text,
               (const struct font_params*)&VAR_7->osd_stat_params);
      }
   }

   if (VAR_6)
   {
      if (FUNC_5(VAR_8, VAR_6) != 0)
         goto fail;


      VAR_9->clear = 1;
   }

   if (FUNC_3(VAR_8->data, VAR_9) != 0)
      goto fail;

   return 1;

fail:


   VAR_9->used = 0;

   return 0;
}
