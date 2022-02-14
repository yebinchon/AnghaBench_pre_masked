
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_video {int pageflip_pending; int pending_mutex; int vsync_condition; int * pages; int * nextPage; TYPE_1__* sunxi_disp; scalar_t__ keep_vsync; } ;
struct TYPE_2__ {int fd_fb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
   struct sunxi_video *VAR_2 = (struct sunxi_video*)VAR_1;

   while (VAR_2->keep_vsync)
   {

      FUNC_0(VAR_2->sunxi_disp->fd_fb, VAR_0, 0);



      if (VAR_2->nextPage == &VAR_2->pages[0])
         VAR_2->nextPage = &VAR_2->pages[1];
      else
         VAR_2->nextPage = &VAR_2->pages[0];



      FUNC_2(VAR_2->pending_mutex);
      VAR_2->pageflip_pending = 0;
      FUNC_1(VAR_2->vsync_condition);
      FUNC_3(VAR_2->pending_mutex);
   }
}
