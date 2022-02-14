
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dispmanx_surface {struct dispmanx_page* current_page; } ;
struct dispmanx_page {int used; TYPE_1__* dispvars; int page_used_mutex; struct dispmanx_surface* surface; } ;
struct TYPE_2__ {int pending_mutex; int vsync_condition; int pageflip_pending; } ;
typedef int DISPMANX_UPDATE_HANDLE_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(DISPMANX_UPDATE_HANDLE_T VAR_0, void *VAR_1)
{
   struct dispmanx_page *VAR_2 = VAR_1;
   struct dispmanx_surface *VAR_3 = VAR_2->surface;




   if (VAR_3->current_page)
   {
      FUNC_1(VAR_3->current_page->page_used_mutex);


      VAR_3->current_page->used = 0;
      FUNC_2(VAR_3->current_page->page_used_mutex);
   }



   VAR_3->current_page = VAR_2;



   FUNC_1(VAR_2->dispvars->pending_mutex);

   VAR_2->dispvars->pageflip_pending--;
   FUNC_0(VAR_2->dispvars->vsync_condition);

   FUNC_2(VAR_2->dispvars->pending_mutex);
}
