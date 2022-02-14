
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int stack_pos; scalar_t__* stack; } ;
typedef TYPE_1__ ePICContext ;



__attribute__((used)) static inline int FUNC_0(const ePICContext *VAR_0, uint32_t VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->stack_pos; VAR_2++)
        if (VAR_0->stack[VAR_2] == VAR_1)
            break;

    return VAR_2 != VAR_0->stack_pos;
}
