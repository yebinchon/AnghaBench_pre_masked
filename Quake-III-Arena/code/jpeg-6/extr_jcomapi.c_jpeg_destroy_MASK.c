
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* j_common_ptr ;
struct TYPE_6__ {scalar_t__ global_state; TYPE_1__* mem; } ;
struct TYPE_5__ {int (* self_destruct ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1 (j_common_ptr VAR_0)
{


  if (VAR_0->mem != ((void*)0))
    (*VAR_0->mem->self_destruct) (VAR_0);
  VAR_0->mem = ((void*)0);
  VAR_0->global_state = 0;
}
