
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int context; int (* func ) (int ,int ,void*) ;} ;
struct TYPE_5__ {struct TYPE_5__* next; TYPE_1__ callback; } ;
typedef TYPE_2__ kd_iop_t ;
typedef int kd_callback_type ;


 int FUNC_0 (int ,int ,void*) ;

__attribute__((used)) static void
FUNC_1(kd_iop_t* VAR_0, kd_callback_type VAR_1, void* VAR_2)
{
 while (VAR_0) {
  VAR_0->callback.func(VAR_0->callback.context, VAR_1, VAR_2);
  VAR_0 = VAR_0->next;
 }
}
