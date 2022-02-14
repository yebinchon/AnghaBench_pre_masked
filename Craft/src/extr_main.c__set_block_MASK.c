
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int map; } ;
typedef int Map ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int *,int,int,int,int) ;
 int FUNC_5 (int,int,int,int,int,int ) ;
 int FUNC_6 (int,int,int) ;

void FUNC_7(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
    Chunk *VAR_7 = FUNC_3(VAR_0, VAR_1);
    if (VAR_7) {
        Map *VAR_8 = &VAR_7->map;
        if (FUNC_4(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5)) {
            if (VAR_6) {
                FUNC_2(VAR_7);
            }
            FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
        }
    }
    else {
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    }
    if (VAR_5 == 0 && FUNC_0(VAR_2) == VAR_0 && FUNC_0(VAR_4) == VAR_1) {
        FUNC_6(VAR_2, VAR_3, VAR_4);
        FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0);
    }
}
