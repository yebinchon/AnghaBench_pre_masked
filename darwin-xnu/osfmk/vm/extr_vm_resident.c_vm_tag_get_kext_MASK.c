
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t vm_tag_t ;
typedef int vm_size_t ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ vm_allocation_site_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

uint32_t
FUNC_3(vm_tag_t VAR_3, char * VAR_4, vm_size_t VAR_5)
{
    vm_allocation_site_t * VAR_6;
    uint32_t VAR_7;

    VAR_7 = 0;
    FUNC_1(&VAR_2);
    if ((VAR_6 = VAR_1[VAR_3]))
    {
        if (VAR_0 & VAR_6->flags)
        {
            VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5);
        }
    }
    FUNC_2(&VAR_2);

    return (VAR_7);
}
