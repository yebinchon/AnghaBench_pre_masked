
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* buffer; } ;
struct TYPE_9__ {TYPE_5__* frame_coords; TYPE_5__* texture_swizzled; TYPE_5__* texture_linear; } ;
struct TYPE_7__ {int left; } ;
struct TYPE_8__ {TYPE_1__ top; } ;
struct TYPE_11__ {TYPE_4__ vertex_cache; struct TYPE_11__* empty_framebuffer; TYPE_3__ menu; struct TYPE_11__* frame_coords; struct TYPE_11__* texture_swizzled; struct TYPE_11__* texture_linear; struct TYPE_11__* display_list; TYPE_2__ drawbuffers; int dvlb; int shader; int lcd_aptHook; } ;
typedef TYPE_5__ ctr_video_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int *,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void* VAR_1)
{
   ctr_video_t* VAR_2 = (ctr_video_t*)VAR_1;

   if (!VAR_2)
      return;

   FUNC_1(&VAR_2->lcd_aptHook);
   FUNC_3(VAR_0, ((void*)0), ((void*)0), 1);
   FUNC_5(&VAR_2->shader);
   FUNC_0(VAR_2->dvlb);
   FUNC_6(VAR_2->drawbuffers.top.left);
   FUNC_4(VAR_2->display_list);
   FUNC_4(VAR_2->texture_linear);
   FUNC_4(VAR_2->texture_swizzled);
   FUNC_4(VAR_2->frame_coords);
   FUNC_4(VAR_2->menu.texture_linear);
   FUNC_4(VAR_2->menu.texture_swizzled);
   FUNC_4(VAR_2->menu.frame_coords);
   FUNC_4(VAR_2->empty_framebuffer);
   FUNC_4(VAR_2->vertex_cache.buffer);
   FUNC_4(VAR_2);



}
