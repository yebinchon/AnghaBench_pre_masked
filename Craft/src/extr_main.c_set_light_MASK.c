
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lights; } ;
typedef int Map ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (int,int,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int *,int,int,int,int) ;

void FUNC_4(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
    Chunk *VAR_6 = FUNC_2(VAR_0, VAR_1);
    if (VAR_6) {
        Map *VAR_7 = &VAR_6->lights;
        if (FUNC_3(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5)) {
            FUNC_1(VAR_6);
            FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
        }
    }
    else {
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    }
}
