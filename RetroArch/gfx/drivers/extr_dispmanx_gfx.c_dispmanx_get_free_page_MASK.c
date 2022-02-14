
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispmanx_video {scalar_t__ pageflip_pending; int pending_mutex; int vsync_condition; } ;
struct dispmanx_surface {unsigned int numpages; struct dispmanx_page* pages; } ;
struct dispmanx_page {int used; int page_used_mutex; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct dispmanx_page *FUNC_3(struct dispmanx_video *VAR_0,
      struct dispmanx_surface *VAR_1)
{
   unsigned VAR_2;
   struct dispmanx_page *VAR_3 = ((void*)0);

   while (!VAR_3)
   {

      for (VAR_2 = 0; VAR_2 < VAR_1->numpages; ++VAR_2)
      {
         if (!VAR_1->pages[VAR_2].used)
         {
            VAR_3 = (VAR_1->pages) + VAR_2;
            break;
         }
      }



      if (!VAR_3)
      {
         FUNC_1(VAR_0->pending_mutex);
          if (VAR_0->pageflip_pending > 0)
             FUNC_0(VAR_0->vsync_condition, VAR_0->pending_mutex);
         FUNC_2(VAR_0->pending_mutex);
      }
   }


   FUNC_1(VAR_3->page_used_mutex);
   VAR_3->used = 1;
   FUNC_2(VAR_3->page_used_mutex);

   return VAR_3;
}
