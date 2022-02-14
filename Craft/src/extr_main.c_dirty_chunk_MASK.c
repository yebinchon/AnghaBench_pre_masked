
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dirty; scalar_t__ q; scalar_t__ p; } ;
typedef TYPE_1__ Chunk ;


 TYPE_1__* FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

void FUNC_2(Chunk *VAR_0) {
    VAR_0->dirty = 1;
    if (FUNC_1(VAR_0)) {
        for (int VAR_1 = -1; VAR_1 <= 1; VAR_1++) {
            for (int VAR_2 = -1; VAR_2 <= 1; VAR_2++) {
                Chunk *VAR_3 = FUNC_0(VAR_0->p + VAR_1, VAR_0->q + VAR_2);
                if (VAR_3) {
                    VAR_3->dirty = 1;
                }
            }
        }
    }
}
