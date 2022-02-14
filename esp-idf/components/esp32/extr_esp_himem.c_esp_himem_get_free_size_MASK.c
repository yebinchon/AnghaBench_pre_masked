
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_alloced; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

size_t FUNC_0(void)
{
    size_t VAR_3=0;
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        if (!VAR_1[VAR_4].is_alloced) VAR_3+=VAR_0;
    }
    return VAR_3;
}
