
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int *** light_maps; int *** block_maps; scalar_t__ q; scalar_t__ p; } ;
typedef TYPE_1__ WorkerItem ;
struct TYPE_9__ {scalar_t__ dirty; int lights; int map; scalar_t__ q; scalar_t__ p; } ;
typedef TYPE_2__ Chunk ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

void FUNC_3(Chunk *VAR_0) {
    WorkerItem VAR_1;
    WorkerItem *VAR_2 = &VAR_1;
    VAR_2->p = VAR_0->p;
    VAR_2->q = VAR_0->q;
    for (int VAR_3 = -1; VAR_3 <= 1; VAR_3++) {
        for (int VAR_4 = -1; VAR_4 <= 1; VAR_4++) {
            Chunk *VAR_5 = VAR_0;
            if (VAR_3 || VAR_4) {
                VAR_5 = FUNC_1(VAR_0->p + VAR_3, VAR_0->q + VAR_4);
            }
            if (VAR_5) {
                VAR_2->block_maps[VAR_3 + 1][VAR_4 + 1] = &VAR_5->map;
                VAR_2->light_maps[VAR_3 + 1][VAR_4 + 1] = &VAR_5->lights;
            }
            else {
                VAR_2->block_maps[VAR_3 + 1][VAR_4 + 1] = 0;
                VAR_2->light_maps[VAR_3 + 1][VAR_4 + 1] = 0;
            }
        }
    }
    FUNC_0(VAR_2);
    FUNC_2(VAR_0, VAR_2);
    VAR_0->dirty = 0;
}
