
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; } ;
typedef TYPE_2__ retro_task_t ;
struct TYPE_9__ {int progress; int url; } ;
typedef TYPE_3__ http_transfer_info_t ;
struct TYPE_7__ {int url; } ;
struct TYPE_10__ {TYPE_1__ connection; } ;
typedef TYPE_4__ http_handle_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_2(retro_task_t *VAR_0, void *VAR_1)
{
   http_transfer_info_t *VAR_2 = (http_transfer_info_t*)VAR_1;


   http_handle_t *VAR_3 = (http_handle_t *)VAR_0->state;
   if (!VAR_3)
      return 0;


   FUNC_0(VAR_2->url, VAR_3->connection.url, sizeof(VAR_2->url));
   VAR_2->progress = FUNC_1(VAR_0);
   return 1;
}
