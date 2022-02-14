
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int payload; } ;
struct TYPE_4__ {int a; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int,size_t) ;
 int FUNC_3 (int ,size_t) ;
 TYPE_2__* VAR_8 ;
 int FUNC_4 (int ,int ,int) ;
 int * VAR_9 ;
 int * VAR_10 ;

void FUNC_5(int VAR_11) {
    int VAR_12;

    FUNC_3(VAR_5, VAR_1);
    FUNC_3(VAR_7, VAR_3);
    FUNC_3(VAR_6, VAR_2);
    FUNC_3(VAR_4, VAR_0);
    for(VAR_12 = 0; VAR_12 < 49; VAR_12++) {
        if( FUNC_2(VAR_12, VAR_0) ) {
            FUNC_4(VAR_8[VAR_1].s.payload, VAR_9[VAR_12*3], VAR_11);
            FUNC_4(VAR_8[VAR_1].s.payload, VAR_9[VAR_12*3+1], VAR_11);
            FUNC_4(VAR_8[VAR_1].s.payload, VAR_9[VAR_12*3+2], 0);
        } else {

            FUNC_4(VAR_8[VAR_1].s.payload, VAR_9[VAR_12*3+1], 0);
            FUNC_4(VAR_8[VAR_1].s.payload, VAR_9[VAR_12*3+2], 0);
        }
    }
    FUNC_1(&VAR_10[3], VAR_8[VAR_1].a, sizeof(VAR_8[VAR_1].a));
    FUNC_1(&VAR_10[2], VAR_8[VAR_1].a, sizeof(VAR_8[VAR_1].a));
    FUNC_1(&VAR_10[1], VAR_8[VAR_1].a, sizeof(VAR_8[VAR_1].a));
    FUNC_1(&VAR_10[0], VAR_8[VAR_1].a, sizeof(VAR_8[VAR_1].a));
    FUNC_0(10);
}
