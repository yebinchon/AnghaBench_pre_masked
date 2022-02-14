
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alive; int can_sleep; int * thread; int cond; int cond_lock; int lock; } ;
typedef TYPE_1__ ffmpeg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(ffmpeg_t *VAR_0)
{
   if (!VAR_0->thread)
      return;

   FUNC_3(VAR_0->cond_lock);
   VAR_0->alive = 0;
   VAR_0->can_sleep = 0;
   FUNC_4(VAR_0->cond_lock);

   FUNC_1(VAR_0->cond);
   FUNC_5(VAR_0->thread);

   FUNC_2(VAR_0->lock);
   FUNC_2(VAR_0->cond_lock);
   FUNC_0(VAR_0->cond);

   VAR_0->thread = ((void*)0);
}
