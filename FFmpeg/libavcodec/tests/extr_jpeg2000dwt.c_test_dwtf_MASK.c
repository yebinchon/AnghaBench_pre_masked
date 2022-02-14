
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int member_0; } ;
struct TYPE_8__ {TYPE_2__ member_0; } ;
struct TYPE_10__ {TYPE_1__ member_0; } ;
typedef TYPE_3__ DWTContext ;


 float FUNC_0 (float) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,float*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,float*) ;
 int FUNC_4 (TYPE_3__*,int**,int,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*,int,int,int,int,int,double) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(float *VAR_3, float *VAR_4, int VAR_5[2][2], int VAR_6, float VAR_7) {
    int VAR_8, VAR_9;
    DWTContext VAR_10={{{0}}}, *VAR_11= &VAR_10;
    double VAR_12 = 0;

    VAR_8 = FUNC_4(VAR_11, VAR_5, VAR_6, VAR_0);
    if (VAR_8 < 0) {
        FUNC_5(VAR_2, "ff_jpeg2000_dwt_init failed\n");
        return 1;
    }
    VAR_8 = FUNC_3(VAR_11, VAR_3);
    if (VAR_8 < 0) {
        FUNC_5(VAR_2, "ff_dwt_encode failed\n");
        return 1;
    }
    VAR_8 = FUNC_1(VAR_11, VAR_3);
    if (VAR_8 < 0) {
        FUNC_5(VAR_2, "ff_dwt_encode failed\n");
        return 1;
    }
    for (VAR_9 = 0; VAR_9<VAR_1 * VAR_1; VAR_9++) {
        if (FUNC_0(VAR_3[VAR_9] - VAR_4[VAR_9]) > VAR_7) {
            FUNC_5(VAR_2, "missmatch at %d (%f != %f) decomp:%d border %d %d %d %d\n",
                    VAR_9, VAR_3[VAR_9], VAR_4[VAR_9],VAR_6, VAR_5[0][0], VAR_5[0][1], VAR_5[1][0], VAR_5[1][1]);
            return 2;
        }
        VAR_12 += (VAR_3[VAR_9] - VAR_4[VAR_9]) * (VAR_3[VAR_9] - VAR_4[VAR_9]);
        VAR_3[VAR_9] = VAR_4[VAR_9];
    }
    FUNC_2(VAR_11);

    FUNC_6("9/7f, decomp:%2d border %3d %3d %3d %3d err2:%20.3f\n",
           VAR_6, VAR_5[0][0], VAR_5[0][1], VAR_5[1][0], VAR_5[1][1],
           VAR_12 / ((VAR_5[0][1] - VAR_5[0][0])*(VAR_5[1][1] - VAR_5[1][0])));

    return 0;
}
