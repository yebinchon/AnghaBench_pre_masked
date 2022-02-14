
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_info_t ;
struct video_viewport {unsigned int width; unsigned int height; } ;
struct LinkInfo {int tex_h; int tex_w; } ;
struct TYPE_5__ {scalar_t__ renderchain_data; int dev; } ;
typedef TYPE_1__ d3d8_video_t ;
struct TYPE_6__ {int pixel_size; int tex_h; int tex_w; void* dev; } ;
typedef TYPE_2__ d3d8_renderchain_t ;
typedef int LPDIRECT3DDEVICE8 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int const*) ;
 int FUNC_1 (unsigned int*,unsigned int*) ;
 struct video_viewport* FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(void *VAR_2,
      const void *VAR_3,
      void *VAR_4,
      const void *VAR_5,
      bool VAR_6
      )
{
   unsigned VAR_7, VAR_8;
   d3d8_video_t *VAR_9 = (d3d8_video_t*)VAR_2;
   LPDIRECT3DDEVICE8 VAR_10 = (LPDIRECT3DDEVICE8)VAR_9->dev;
   const video_info_t *VAR_11 = (const video_info_t*)VAR_3;
   const struct LinkInfo *VAR_12 = (const struct LinkInfo*)VAR_5;
   d3d8_renderchain_t *VAR_13 = (d3d8_renderchain_t*)VAR_9->renderchain_data;
   unsigned VAR_14 = (VAR_6) ? VAR_1 : VAR_0;
   struct video_viewport *VAR_15 = FUNC_2();

   FUNC_1(&VAR_7, &VAR_8);

   VAR_13->dev = VAR_4;
   VAR_13->pixel_size = (VAR_14 == VAR_0) ? 2 : 4;
   VAR_13->tex_w = VAR_12->tex_w;
   VAR_13->tex_h = VAR_12->tex_h;

   if (!FUNC_0(VAR_9, VAR_13, VAR_11))
      return 0;


   if (VAR_15->width == 0)
      VAR_15->width = VAR_7;

   if (VAR_15->height == 0)
      VAR_15->height = VAR_8;

   return 1;
}
