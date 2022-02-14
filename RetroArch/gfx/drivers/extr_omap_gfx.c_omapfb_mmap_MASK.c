
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * fb_mem; int fd; TYPE_2__* current_state; } ;
typedef TYPE_3__ omapfb_data_t ;
struct TYPE_5__ {int size; } ;
struct TYPE_6__ {TYPE_1__ mi; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(omapfb_data_t *VAR_3)
{
   FUNC_2(VAR_3->fb_mem == ((void*)0));

   VAR_3->fb_mem = FUNC_1(((void*)0), VAR_3->current_state->mi.size, VAR_2,
         VAR_1, VAR_3->fd, 0);

   if (VAR_3->fb_mem == VAR_0)
   {
      VAR_3->fb_mem = ((void*)0);
      FUNC_0("[video_omap]: framebuffer mmap failed\n");

      return -1;
   }

   return 0;
}
