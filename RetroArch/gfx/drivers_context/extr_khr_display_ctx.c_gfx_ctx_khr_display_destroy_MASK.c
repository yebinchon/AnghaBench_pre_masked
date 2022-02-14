
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ queue_lock; } ;
struct TYPE_7__ {TYPE_1__ context; } ;
struct TYPE_6__ {TYPE_3__ vk; } ;
typedef TYPE_2__ khr_display_ctx_data_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   khr_display_ctx_data_t *VAR_1 = (khr_display_ctx_data_t*)VAR_0;
   if (!VAR_1)
      return;

   FUNC_2(&VAR_1->vk, 1);




   FUNC_0(VAR_1);
}
