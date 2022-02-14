
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispmanx_video {scalar_t__ pageflip_pending; int update; int pending_mutex; int vsync_condition; } ;
struct dispmanx_surface {int numpages; int used; int element; struct dispmanx_surface* pages; int page_used_mutex; int resource; } ;


 int FUNC_0 (struct dispmanx_surface*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct dispmanx_video *VAR_0,
      struct dispmanx_surface **VAR_1)
{
   int VAR_2;
   struct dispmanx_surface *VAR_3 = *VAR_1;




   FUNC_3(VAR_0->pending_mutex);
   if (VAR_0->pageflip_pending > 0)
      FUNC_1(VAR_0->vsync_condition, VAR_0->pending_mutex);
   FUNC_4(VAR_0->pending_mutex);

   for (VAR_2 = 0; VAR_2 < VAR_3->numpages; VAR_2++)
   {
      FUNC_6(VAR_3->pages[VAR_2].resource);
      VAR_3->pages[VAR_2].used = 0;
      FUNC_2(VAR_3->pages[VAR_2].page_used_mutex);
   }

   FUNC_0(VAR_3->pages);

   VAR_0->update = FUNC_7(0);
   FUNC_5(VAR_0->update, VAR_3->element);
   FUNC_8(VAR_0->update);

   FUNC_0(VAR_3);
   *VAR_1 = ((void*)0);
}
