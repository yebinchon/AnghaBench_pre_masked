
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lights; } ;
typedef int Map ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int *,int,int,int) ;
 int FUNC_6 (int *,int,int,int,int) ;

void FUNC_7(int VAR_0, int VAR_1, int VAR_2) {
    int VAR_3 = FUNC_0(VAR_0);
    int VAR_4 = FUNC_0(VAR_2);
    Chunk *VAR_5 = FUNC_4(VAR_3, VAR_4);
    if (VAR_5) {
        Map *VAR_6 = &VAR_5->lights;
        int VAR_7 = FUNC_5(VAR_6, VAR_0, VAR_1, VAR_2) ? 0 : 15;
        FUNC_6(VAR_6, VAR_0, VAR_1, VAR_2, VAR_7);
        FUNC_2(VAR_3, VAR_4, VAR_0, VAR_1, VAR_2, VAR_7);
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_7);
        FUNC_3(VAR_5);
    }
}
