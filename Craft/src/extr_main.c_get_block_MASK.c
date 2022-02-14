
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int map; } ;
typedef int Map ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int,int) ;

int FUNC_3(int VAR_0, int VAR_1, int VAR_2) {
    int VAR_3 = FUNC_0(VAR_0);
    int VAR_4 = FUNC_0(VAR_2);
    Chunk *VAR_5 = FUNC_1(VAR_3, VAR_4);
    if (VAR_5) {
        Map *VAR_6 = &VAR_5->map;
        return FUNC_2(VAR_6, VAR_0, VAR_1, VAR_2);
    }
    return 0;
}
