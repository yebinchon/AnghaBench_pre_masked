
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ handler; scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_5__ {int overlay_path; } ;
typedef TYPE_2__ overlay_loader_t ;


 int FUNC_0 (int ,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(retro_task_t *VAR_1, void *VAR_2)
{
   overlay_loader_t *VAR_3 = ((void*)0);

   if (!VAR_1 || (VAR_1->handler != VAR_0))
      return 0;

   if (!VAR_2)
      return 0;

   VAR_3 = (overlay_loader_t*)VAR_1->state;
   if (!VAR_3)
      return 0;

   return FUNC_0(VAR_3->overlay_path, (const char*)VAR_2);
}
