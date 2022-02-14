
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_tag_t ;
struct TYPE_6__ {int flags; scalar_t__ tag; } ;
typedef TYPE_1__ vm_allocation_site_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__**) ;
 scalar_t__ FUNC_4 () ;

vm_tag_t
FUNC_5(vm_allocation_site_t * VAR_3)
{
    vm_tag_t VAR_4;
    vm_allocation_site_t * VAR_5;

    if (VAR_1 & VAR_3->flags)
    {
  VAR_4 = FUNC_4();
  if (VAR_0 != VAR_4) return (VAR_4);
    }

    if (!VAR_3->tag)
    {
  VAR_5 = ((void*)0);
  FUNC_1(&VAR_2);
  FUNC_3(VAR_3, &VAR_5);
  FUNC_2(&VAR_2);
        if (VAR_5) FUNC_0(VAR_5);
    }

    return (VAR_3->tag);
}
