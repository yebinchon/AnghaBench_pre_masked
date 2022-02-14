
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {float width; float height; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {float x; float y; float z; float w; } ;
struct TYPE_8__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_7__ {float Width; float Height; float MaxDepth; scalar_t__ TopLeftY; scalar_t__ TopLeftX; } ;
struct TYPE_10__ {TYPE_3__ output_size; TYPE_2__ scissorRect; TYPE_1__ viewport; } ;
struct TYPE_11__ {int resize_render_targets; int resize_viewport; TYPE_6__ vp; TYPE_4__ frame; scalar_t__ shader_preset; int keep_aspect; } ;
typedef TYPE_5__ d3d12_video_t ;


 int FUNC_0 (TYPE_6__*,int,int ) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, bool VAR_1)
{
   d3d12_video_t* VAR_2 = (d3d12_video_t*)VAR_0;

   FUNC_0(&VAR_2->vp, VAR_1, VAR_2->keep_aspect);

   VAR_2->frame.viewport.TopLeftX = VAR_2->vp.x;
   VAR_2->frame.viewport.TopLeftY = VAR_2->vp.y;
   VAR_2->frame.viewport.Width = VAR_2->vp.width;
   VAR_2->frame.viewport.Height = VAR_2->vp.height;
   VAR_2->frame.viewport.MaxDepth = 0.0f;
   VAR_2->frame.viewport.MaxDepth = 1.0f;


   VAR_2->frame.scissorRect.top = 0;
   VAR_2->frame.scissorRect.left = 0;
   VAR_2->frame.scissorRect.right = VAR_2->vp.x + VAR_2->vp.width;
   VAR_2->frame.scissorRect.bottom = VAR_2->vp.y + VAR_2->vp.height;

   if (VAR_2->shader_preset && (VAR_2->frame.output_size.x != VAR_2->vp.width ||
                                VAR_2->frame.output_size.y != VAR_2->vp.height))
      VAR_2->resize_render_targets = 1;

   VAR_2->frame.output_size.x = VAR_2->vp.width;
   VAR_2->frame.output_size.y = VAR_2->vp.height;
   VAR_2->frame.output_size.z = 1.0f / VAR_2->vp.width;
   VAR_2->frame.output_size.w = 1.0f / VAR_2->vp.height;

   VAR_2->resize_viewport = 0;
}
