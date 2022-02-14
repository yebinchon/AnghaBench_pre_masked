
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_object_t ;
struct TYPE_5__ {scalar_t__ prev; scalar_t__ next; } ;
struct TYPE_6__ {TYPE_1__ cached_list; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;

void
FUNC_3(
 vm_object_t VAR_0)
{
 FUNC_0();

 if (VAR_0->cached_list.next &&
     VAR_0->cached_list.prev)
  FUNC_1(VAR_0);

 FUNC_2();
}
