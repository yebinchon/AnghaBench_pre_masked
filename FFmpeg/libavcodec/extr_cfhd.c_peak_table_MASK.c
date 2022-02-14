
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {scalar_t__ level; int base; } ;
typedef TYPE_1__ Peak ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(int16_t *VAR_0, Peak *VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        if (FUNC_0(VAR_0[VAR_3]) > VAR_1->level)
            VAR_0[VAR_3] = FUNC_1(&VAR_1->base);
}
