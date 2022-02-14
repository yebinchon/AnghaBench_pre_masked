
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* elos; } ;
typedef TYPE_1__ sortable_bbox ;


 size_t VAR_0 ;

int FUNC_0(const void*VAR_1, const void *VAR_2)
{
    sortable_bbox VAR_3 = *(sortable_bbox*)VAR_1;
    sortable_bbox VAR_4 = *(sortable_bbox*)VAR_2;
    if(VAR_3[VAR_0] == VAR_4[VAR_0]) return 0;
    if(VAR_3[VAR_0] > VAR_4[VAR_0]) return -1;
    return 1;
}
