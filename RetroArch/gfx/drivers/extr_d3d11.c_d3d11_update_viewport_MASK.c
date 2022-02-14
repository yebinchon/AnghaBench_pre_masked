
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {float width; float height; int y; int x; } ;
struct TYPE_7__ {float x; float y; float z; float w; } ;
struct TYPE_6__ {float Width; float Height; float MaxDepth; int TopLeftY; int TopLeftX; } ;
struct TYPE_8__ {TYPE_2__ output_size; TYPE_1__ viewport; } ;
struct TYPE_9__ {int resize_render_targets; int resize_viewport; TYPE_5__ vp; TYPE_3__ frame; scalar_t__ shader_preset; int keep_aspect; } ;
typedef TYPE_4__ d3d11_video_t ;


 int FUNC_0 (TYPE_5__*,int,int ) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, bool VAR_1)
{
   d3d11_video_t* VAR_2 = (d3d11_video_t*)VAR_0;

   FUNC_0(&VAR_2->vp, VAR_1, VAR_2->keep_aspect);

   VAR_2->frame.viewport.TopLeftX = VAR_2->vp.x;
   VAR_2->frame.viewport.TopLeftY = VAR_2->vp.y;
   VAR_2->frame.viewport.Width = VAR_2->vp.width;
   VAR_2->frame.viewport.Height = VAR_2->vp.height;
   VAR_2->frame.viewport.MaxDepth = 0.0f;
   VAR_2->frame.viewport.MaxDepth = 1.0f;

   if (VAR_2->shader_preset && (VAR_2->frame.output_size.x != VAR_2->vp.width ||
            VAR_2->frame.output_size.y != VAR_2->vp.height))
      VAR_2->resize_render_targets = 1;

   VAR_2->frame.output_size.x = VAR_2->vp.width;
   VAR_2->frame.output_size.y = VAR_2->vp.height;
   VAR_2->frame.output_size.z = 1.0f / VAR_2->vp.width;
   VAR_2->frame.output_size.w = 1.0f / VAR_2->vp.height;

   VAR_2->resize_viewport = 0;
}
