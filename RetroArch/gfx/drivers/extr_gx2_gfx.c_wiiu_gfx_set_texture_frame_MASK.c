
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {unsigned int width; unsigned int height; int imageSize; TYPE_8__* image; int pitch; } ;
struct TYPE_13__ {TYPE_4__ surface; } ;
struct TYPE_14__ {unsigned int width; unsigned int height; TYPE_8__* v; TYPE_5__ texture; } ;
struct TYPE_10__ {int height; int width; int y; int x; } ;
struct TYPE_15__ {TYPE_6__ menu; TYPE_2__ vp; } ;
typedef TYPE_7__ wiiu_video_t ;
typedef unsigned int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {float u; float v; float width; float height; } ;
struct TYPE_9__ {int height; int width; int y; int x; } ;
struct TYPE_16__ {TYPE_3__ coord; TYPE_1__ pos; } ;


 int FUNC_0 (int ,TYPE_8__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, const void *VAR_3, bool VAR_4,
                                       unsigned VAR_5, unsigned VAR_6, float VAR_7)
{
   uint32_t VAR_8;
   const uint16_t *VAR_9 = ((void*)0);
   uint16_t *VAR_10 = ((void*)0);
   wiiu_video_t *VAR_11 = (wiiu_video_t *) VAR_2;

   if (!VAR_11)
      return;

   if (!VAR_3 || !VAR_5 || !VAR_6)
      return;

   if (VAR_5 > VAR_11->menu.texture.surface.width)
      VAR_5 = VAR_11->menu.texture.surface.width;

   if (VAR_6 > VAR_11->menu.texture.surface.height)
      VAR_6 = VAR_11->menu.texture.surface.height;

   VAR_11->menu.width = VAR_5;
   VAR_11->menu.height = VAR_6;

   VAR_9 = VAR_3;
   VAR_10 = (uint16_t *)VAR_11->menu.texture.surface.image;

   for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
   {
      FUNC_1(VAR_10, VAR_9, VAR_5 * sizeof(uint16_t));
      VAR_10 += VAR_11->menu.texture.surface.pitch;
      VAR_9 += VAR_5;
   }

   FUNC_0(VAR_1, VAR_11->menu.texture.surface.image,
                 VAR_11->menu.texture.surface.imageSize);

   VAR_11->menu.v->pos.x = VAR_11->vp.x;
   VAR_11->menu.v->pos.y = VAR_11->vp.y;
   VAR_11->menu.v->pos.width = VAR_11->vp.width;
   VAR_11->menu.v->pos.height = VAR_11->vp.height;
   VAR_11->menu.v->coord.u = 0.0f;
   VAR_11->menu.v->coord.v = 0.0f;
   VAR_11->menu.v->coord.width = (float)VAR_5 / VAR_11->menu.texture.surface.width;
   VAR_11->menu.v->coord.height = (float)VAR_6 / VAR_11->menu.texture.surface.height;
   FUNC_0(VAR_0, VAR_11->menu.v, 4 * sizeof(*VAR_11->menu.v));

}
