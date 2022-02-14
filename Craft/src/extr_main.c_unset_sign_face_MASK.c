
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirty; int signs; } ;
typedef int SignList ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int *,int,int,int,int) ;

void FUNC_4(int VAR_0, int VAR_1, int VAR_2, int VAR_3) {
    int VAR_4 = FUNC_0(VAR_0);
    int VAR_5 = FUNC_0(VAR_2);
    Chunk *VAR_6 = FUNC_2(VAR_4, VAR_5);
    if (VAR_6) {
        SignList *VAR_7 = &VAR_6->signs;
        if (FUNC_3(VAR_7, VAR_0, VAR_1, VAR_2, VAR_3)) {
            VAR_6->dirty = 1;
            FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
        }
    }
    else {
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
    }
}
