
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int suppress_screensaver; int lock; } ;
typedef TYPE_1__ thread_video_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, bool VAR_1)
{
   bool VAR_2;
   thread_video_t *VAR_3 = (thread_video_t*)VAR_0;

   FUNC_0(VAR_3->lock);
   VAR_2 = VAR_3->suppress_screensaver;
   FUNC_1(VAR_3->lock);

   return VAR_2;
}
