
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dispmanx_video {scalar_t__ pageflip_pending; int update; int pending_mutex; int vsync_condition; } ;
struct dispmanx_surface {TYPE_1__* next_page; int element; int bmp_rect; int pitch; int pixformat; } ;
struct TYPE_2__ {int resource; } ;


 TYPE_1__* FUNC_0 (struct dispmanx_video*,struct dispmanx_surface*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,void*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,void*) ;

__attribute__((used)) static void FUNC_8(struct dispmanx_video *VAR_1, const void *VAR_2,
      struct dispmanx_surface *VAR_3)
{

   FUNC_5(VAR_3->next_page->resource, VAR_3->pixformat,
         VAR_3->pitch, (void*)VAR_2, &(VAR_3->bmp_rect));



   FUNC_2(VAR_1->pending_mutex);
   if (VAR_1->pageflip_pending > 0)
      FUNC_1(VAR_1->vsync_condition, VAR_1->pending_mutex);
   FUNC_3(VAR_1->pending_mutex);


   VAR_1->update = FUNC_6(0);

   FUNC_4(VAR_1->update, VAR_3->element,
         VAR_3->next_page->resource);

   FUNC_2(VAR_1->pending_mutex);
   VAR_1->pageflip_pending++;
   FUNC_3(VAR_1->pending_mutex);

   FUNC_7(VAR_1->update,
      VAR_0, (void*)(VAR_3->next_page));


   VAR_3->next_page = FUNC_0(VAR_1, VAR_3);
}
