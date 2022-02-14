
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int enable; int full_screen; } ;
struct TYPE_6__ {TYPE_2__ frame; TYPE_1__ texture; } ;
typedef TYPE_3__ thread_video_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, bool VAR_1, bool VAR_2)
{
   thread_video_t *VAR_3 = (thread_video_t*)VAR_0;
   if (!VAR_3)
      return;

   FUNC_0(VAR_3->frame.lock);
   VAR_3->texture.enable = VAR_1;
   VAR_3->texture.full_screen = VAR_2;
   FUNC_1(VAR_3->frame.lock);
}
