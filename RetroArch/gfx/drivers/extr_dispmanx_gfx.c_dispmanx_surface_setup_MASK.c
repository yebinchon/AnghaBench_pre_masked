
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dispmanx_video {float dispmanx_height; int dispmanx_width; int update; int display; int vc_image_ptr; } ;
struct TYPE_4__ {int opacity; scalar_t__ mask; int flags; } ;
struct dispmanx_surface {int numpages; TYPE_2__ alpha; int src_rect; TYPE_1__* pages; int dst_rect; int element; int bmp_rect; TYPE_1__* next_page; int pitch; } ;
struct dispmanx_page {int dummy; } ;
typedef scalar_t__ VC_IMAGE_TYPE_T ;
struct TYPE_3__ {int used; int resource; int page_used_mutex; struct dispmanx_video* dispvars; struct dispmanx_surface* surface; } ;
typedef int DISPMANX_TRANSFORM_T ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int,int *,int ,int *,int ,TYPE_2__*,int ,int ) ;
 int FUNC_4 (int *,int,int,int,int) ;
 int FUNC_5 (scalar_t__,int,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct dispmanx_video *VAR_3,
      int VAR_4, int VAR_5,
      int VAR_6, int VAR_7, VC_IMAGE_TYPE_T VAR_8,
      int VAR_9, float VAR_10, int VAR_11, int VAR_12,
      struct dispmanx_surface **VAR_13)
{
   int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
   struct dispmanx_surface *VAR_20 = ((void*)0);

   *VAR_13 = FUNC_1(1, sizeof(struct dispmanx_surface));

   VAR_20 = *VAR_13;


   VAR_20->numpages = VAR_11;



   VAR_20->pitch = FUNC_0(VAR_6, (VAR_8 == VAR_2 ? 64 : 32));


   VAR_20->alpha.flags = VAR_0;
   VAR_20->alpha.opacity = VAR_9;
   VAR_20->alpha.mask = 0;



   VAR_20->pages = FUNC_1(VAR_20->numpages, sizeof(struct dispmanx_page));

   for (VAR_14 = 0; VAR_14 < VAR_20->numpages; VAR_14++)
   {
      VAR_20->pages[VAR_14].used = 0;
      VAR_20->pages[VAR_14].surface = VAR_20;
      VAR_20->pages[VAR_14].dispvars = VAR_3;
      VAR_20->pages[VAR_14].page_used_mutex = FUNC_2();
   }



   VAR_20->next_page = &(VAR_20->pages[0]);
   VAR_20->next_page->used = 1;



   VAR_19 = VAR_6 / (VAR_7 / 8);

   VAR_15 = VAR_3->dispmanx_height * VAR_10;
   VAR_16 = VAR_3->dispmanx_height;



   if (VAR_15 > VAR_3->dispmanx_width)
      VAR_15 = VAR_3->dispmanx_width;

   VAR_17 = (VAR_3->dispmanx_width - VAR_15) / 2;
   VAR_18 = (VAR_3->dispmanx_height - VAR_16) / 2;


   FUNC_4(&VAR_20->dst_rect, VAR_17, VAR_18, VAR_15, VAR_16);
   FUNC_4(&VAR_20->bmp_rect, 0, 0, VAR_4, VAR_5);
   FUNC_4(&VAR_20->src_rect, 0, 0, VAR_4 << 16, VAR_5 << 16);

   for (VAR_14 = 0; VAR_14 < VAR_20->numpages; VAR_14++)
   {
      VAR_20->pages[VAR_14].resource = FUNC_5(VAR_8,
            VAR_19, VAR_5, &(VAR_3->vc_image_ptr));
   }

   VAR_3->update = FUNC_6(0);

   VAR_20->element = FUNC_3(
         VAR_3->update,VAR_3->display, VAR_12,
         &VAR_20->dst_rect, VAR_20->pages[0].resource,
         &VAR_20->src_rect, VAR_1,
         &VAR_20->alpha, 0, (DISPMANX_TRANSFORM_T)0);

   FUNC_7(VAR_3->update);
}
