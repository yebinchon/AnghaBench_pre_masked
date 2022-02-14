
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int yoffset; int used; void* buf; } ;
typedef TYPE_3__ omapfb_page_t ;
struct TYPE_10__ {int num_pages; int fb_framesize; TYPE_3__* cur_page; TYPE_3__* pages; int * old_page; scalar_t__ fb_mem; TYPE_2__* current_state; } ;
typedef TYPE_4__ omapfb_data_t ;
struct TYPE_7__ {int yres; } ;
struct TYPE_8__ {TYPE_1__ si; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(omapfb_data_t *VAR_0)
{
   int VAR_1;

   if (!VAR_0->pages)
   {
      VAR_0->pages = (omapfb_page_t*)FUNC_1(VAR_0->num_pages, sizeof(omapfb_page_t));

      if (!VAR_0->pages)
      {
         FUNC_0("[video_omap]: pages allocation failed.\n");
         return -1;
      }
   }

   for (VAR_1 = 0; VAR_1 < VAR_0->num_pages; ++VAR_1)
   {
      VAR_0->pages[VAR_1].yoffset = VAR_1 * VAR_0->current_state->si.yres;
      VAR_0->pages[VAR_1].buf = (void*)((uint8_t*)VAR_0->fb_mem + (VAR_1 * VAR_0->fb_framesize));
      VAR_0->pages[VAR_1].used = 0;
   }

   VAR_0->old_page = ((void*)0);
   VAR_0->cur_page = &VAR_0->pages[0];

   FUNC_2(VAR_0->cur_page->buf, 0, VAR_0->fb_framesize);

   FUNC_3(VAR_0);
   VAR_0->cur_page->used = 1;

   return 0;
}
