
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ctx_data; TYPE_1__* ctx_driver; } ;
typedef TYPE_2__ vk_t ;
struct TYPE_3__ {int (* show_mouse ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, bool VAR_1)
{
   vk_t *VAR_2 = (vk_t*)VAR_0;

   if (VAR_2 && VAR_2->ctx_driver->show_mouse)
      VAR_2->ctx_driver->show_mouse(VAR_2->ctx_data, VAR_1);
}
