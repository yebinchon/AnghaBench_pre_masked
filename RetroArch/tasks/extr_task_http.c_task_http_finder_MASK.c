
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ handler; scalar_t__ state; } ;
typedef TYPE_2__ retro_task_t ;
struct TYPE_5__ {int url; } ;
struct TYPE_7__ {TYPE_1__ connection; } ;
typedef TYPE_3__ http_handle_t ;


 int FUNC_0 (int ,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(retro_task_t *VAR_1, void *VAR_2)
{
   http_handle_t *VAR_3 = ((void*)0);

   if (!VAR_1 || (VAR_1->handler != VAR_0))
      return 0;

   if (!VAR_2)
      return 0;

   VAR_3 = (http_handle_t*)VAR_1->state;
   if (!VAR_3)
      return 0;

   return FUNC_0(VAR_3->connection.url, (const char*)VAR_2);
}
