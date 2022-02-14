
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buffers; int allocated; } ;
typedef TYPE_1__ rmt_obj_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static rmt_obj_t* FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{
    size_t VAR_4;

    VAR_0[VAR_2].buffers = VAR_3;

    for (VAR_4=0; VAR_4<VAR_3; VAR_4++) {

        VAR_0[VAR_4+VAR_2].allocated = 1;
    }
    return &(VAR_0[VAR_2]);
}
