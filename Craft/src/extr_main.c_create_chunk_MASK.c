
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int *** light_maps; int *** block_maps; int q; int p; } ;
typedef TYPE_1__ WorkerItem ;
struct TYPE_7__ {int lights; int map; int q; int p; } ;
typedef TYPE_2__ Chunk ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int) ;

void FUNC_3(Chunk *VAR_0, int VAR_1, int VAR_2) {
    FUNC_0(VAR_0, VAR_1, VAR_2);

    WorkerItem VAR_3;
    WorkerItem *VAR_4 = &VAR_3;
    VAR_4->p = VAR_0->p;
    VAR_4->q = VAR_0->q;
    VAR_4->block_maps[1][1] = &VAR_0->map;
    VAR_4->light_maps[1][1] = &VAR_0->lights;
    FUNC_1(VAR_4);

    FUNC_2(VAR_1, VAR_2);
}
