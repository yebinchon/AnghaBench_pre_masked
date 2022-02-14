
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_11__ {scalar_t__ vme_end; scalar_t__ vme_start; struct TYPE_11__* vme_next; } ;
struct TYPE_10__ {scalar_t__ max_offset; scalar_t__ min_offset; } ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(vm_map_t VAR_0,
  vm_map_size_t * VAR_1,
  vm_map_size_t * VAR_2,
  vm_map_size_t * VAR_3)
{
    vm_map_entry_t VAR_4;
    vm_map_offset_t VAR_5;
    vm_map_size_t VAR_6, VAR_7, VAR_8;
    boolean_t VAR_9;

    if (!VAR_0)
    {
        *VAR_1 = *VAR_2 = *VAR_3 = 0;
        return;
    }
    VAR_7 = VAR_8 = 0;

    FUNC_1(VAR_0);
    if (VAR_1) *VAR_1 = VAR_0->max_offset - VAR_0->min_offset;

    VAR_5 = VAR_0->min_offset;
    for (VAR_4 = FUNC_0(VAR_0);; VAR_4 = VAR_4->vme_next)
    {
 VAR_9 = (VAR_4 == FUNC_2(VAR_0));

 if (VAR_9) VAR_6 = VAR_4->vme_end - VAR_5;
 else VAR_6 = VAR_4->vme_start - VAR_5;

 VAR_7 += VAR_6;
 if (VAR_6 > VAR_8) VAR_8 = VAR_6;

 if (VAR_9) break;
 VAR_5 = VAR_4->vme_end;
    }
    FUNC_3(VAR_0);
    if (VAR_2) *VAR_2 = VAR_7;
    if (VAR_3) *VAR_3 = VAR_8;
}
