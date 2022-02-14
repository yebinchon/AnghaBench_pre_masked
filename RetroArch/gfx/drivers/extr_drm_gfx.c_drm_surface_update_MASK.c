
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct drm_video {int dummy; } ;
struct drm_surface {int src_height; size_t flip_page; scalar_t__ pitch; scalar_t__ total_pitch; TYPE_2__* pages; } ;
struct drm_page {int dummy; } ;
struct TYPE_3__ {scalar_t__ map; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;


 int FUNC_0 (struct drm_surface*) ;
 int FUNC_1 (scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, const void *VAR_1,
      struct drm_surface *VAR_2)
{
   struct drm_video *VAR_3 = VAR_0;
   struct drm_page *VAR_4 = ((void*)0);

   int VAR_5 = 0;
   int VAR_6 = 0;
   int VAR_7 = 0;

   for (VAR_5 = 0; VAR_5 < VAR_2->src_height; VAR_5++)
   {
      FUNC_1 (
            VAR_2->pages[VAR_2->flip_page].buf.map + VAR_7,
            (uint8_t*)VAR_1 + VAR_6,
            VAR_2->pitch);
      VAR_6 += VAR_2->total_pitch;
      VAR_7 += VAR_2->pitch;
   }


   FUNC_0(VAR_2);
}
