
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int *** light_maps; int *** block_maps; int q; int p; scalar_t__ load; } ;
typedef TYPE_1__ WorkerItem ;
struct TYPE_9__ {scalar_t__ state; int mtx; TYPE_1__ item; } ;
typedef TYPE_2__ Worker ;
struct TYPE_11__ {TYPE_2__* workers; } ;
struct TYPE_10__ {int lights; int map; } ;
typedef int Map ;
typedef TYPE_3__ Chunk ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 TYPE_6__* VAR_3 ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8() {
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        Worker *VAR_5 = VAR_3->workers + VAR_4;
        FUNC_5(&VAR_5->mtx);
        if (VAR_5->state == VAR_1) {
            WorkerItem *VAR_6 = &VAR_5->item;
            Chunk *VAR_7 = FUNC_0(VAR_6->p, VAR_6->q);
            if (VAR_7) {
                if (VAR_6->load) {
                    Map *VAR_8 = VAR_6->block_maps[1][1];
                    Map *VAR_9 = VAR_6->light_maps[1][1];
                    FUNC_4(&VAR_7->map);
                    FUNC_4(&VAR_7->lights);
                    FUNC_3(&VAR_7->map, VAR_8);
                    FUNC_3(&VAR_7->lights, VAR_9);
                    FUNC_7(VAR_6->p, VAR_6->q);
                }
                FUNC_2(VAR_7, VAR_6);
            }
            for (int VAR_10 = 0; VAR_10 < 3; VAR_10++) {
                for (int VAR_11 = 0; VAR_11 < 3; VAR_11++) {
                    Map *VAR_12 = VAR_6->block_maps[VAR_10][VAR_11];
                    Map *VAR_13 = VAR_6->light_maps[VAR_10][VAR_11];
                    if (VAR_12) {
                        FUNC_4(VAR_12);
                        FUNC_1(VAR_12);
                    }
                    if (VAR_13) {
                        FUNC_4(VAR_13);
                        FUNC_1(VAR_13);
                    }
                }
            }
            VAR_5->state = VAR_2;
        }
        FUNC_6(&VAR_5->mtx);
    }
}
