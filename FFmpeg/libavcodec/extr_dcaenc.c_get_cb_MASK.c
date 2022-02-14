
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__* cb_to_level; } ;
typedef TYPE_1__ DCAEncContext ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int32_t FUNC_1(DCAEncContext *VAR_0, int32_t VAR_1)
{
    int VAR_2, VAR_3 = 0;
    VAR_1 = FUNC_0(VAR_1);

    for (VAR_2 = 1024; VAR_2 > 0; VAR_2 >>= 1) {
        if (VAR_0->cb_to_level[VAR_2 + VAR_3] >= VAR_1)
            VAR_3 += VAR_2;
    }
    return -VAR_3;
}
