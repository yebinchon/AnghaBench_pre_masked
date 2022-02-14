
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hb_container_t ;
struct TYPE_2__ {int const* next; } ;
typedef TYPE_1__ hb_container_internal_t ;


 int const* VAR_0 ;

const hb_container_t* FUNC_0(const hb_container_t *VAR_1)
{
    if (VAR_1 == ((void*)0))
    {
        return VAR_0;
    }
    return ((hb_container_internal_t*)VAR_1)->next;
}
