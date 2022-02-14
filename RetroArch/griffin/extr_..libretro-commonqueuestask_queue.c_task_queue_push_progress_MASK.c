
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int progress; int (* progress_cb ) (TYPE_1__*) ;int title; scalar_t__ error; scalar_t__ finished; int mute; } ;
typedef TYPE_1__ retro_task_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int,int,char*,...) ;

__attribute__((used)) static void FUNC_2(retro_task_t *VAR_0)
{
   if (VAR_0->title && !VAR_0->mute)
   {
      if (VAR_0->finished)
      {
         if (VAR_0->error)
            FUNC_1(VAR_0, 1, 60, 1, "%s: %s",
               "Task failed", VAR_0->title);
         else
            FUNC_1(VAR_0, 1, 60, 0, "100%%: %s", VAR_0->title);
      }
      else
      {
         if (VAR_0->progress >= 0 && VAR_0->progress <= 100)
            FUNC_1(VAR_0, 1, 60, 1, "%i%%: %s",
                  VAR_0->progress, VAR_0->title);
         else
            FUNC_1(VAR_0, 1, 60, 0, "%s...", VAR_0->title);
      }

      if (VAR_0->progress_cb)
         VAR_0->progress_cb(VAR_0);
   }
}
