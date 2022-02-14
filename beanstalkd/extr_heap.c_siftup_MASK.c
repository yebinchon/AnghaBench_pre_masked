
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t len; } ;
typedef TYPE_1__ Heap ;


 scalar_t__ FUNC_0 (TYPE_1__*,size_t,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_2(Heap *VAR_0, size_t VAR_1)
{
    for (;;) {
        size_t VAR_2 = VAR_1*2 + 1;
        size_t VAR_3 = VAR_1*2 + 2;


        size_t VAR_4 = VAR_1;
        if (VAR_2 < VAR_0->len && FUNC_0(VAR_0, VAR_2, VAR_4)) VAR_4 = VAR_2;
        if (VAR_3 < VAR_0->len && FUNC_0(VAR_0, VAR_3, VAR_4)) VAR_4 = VAR_3;

        if (VAR_4 == VAR_1) {
            return;
        }

        FUNC_1(VAR_0, VAR_1, VAR_4);
        VAR_1 = VAR_4;
    }
}
