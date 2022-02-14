
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p; int q; int *** light_maps; int *** block_maps; } ;
typedef TYPE_1__ WorkerItem ;
typedef int Map ;


 int FUNC_0 (int,int,int ,int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int VAR_0 ;

void FUNC_3(WorkerItem *VAR_1) {
    int VAR_2 = VAR_1->p;
    int VAR_3 = VAR_1->q;
    Map *VAR_4 = VAR_1->block_maps[1][1];
    Map *VAR_5 = VAR_1->light_maps[1][1];
    FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4);
    FUNC_1(VAR_4, VAR_2, VAR_3);
    FUNC_2(VAR_5, VAR_2, VAR_3);
}
