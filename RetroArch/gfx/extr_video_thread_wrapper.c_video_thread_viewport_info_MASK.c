
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_viewport {int dummy; } ;
struct TYPE_2__ {int lock; struct video_viewport vp; int read_vp; } ;
typedef TYPE_1__ thread_video_t ;


 int FUNC_0 (int *,struct video_viewport*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct video_viewport *VAR_1)
{
   thread_video_t *VAR_2 = (thread_video_t*)VAR_0;

   if (!VAR_2)
      return;

   FUNC_1(VAR_2->lock);
   *VAR_1 = VAR_2->vp;


   FUNC_0(&VAR_2->read_vp, &VAR_2->vp, sizeof(VAR_2->vp));
   FUNC_2(VAR_2->lock);
}
