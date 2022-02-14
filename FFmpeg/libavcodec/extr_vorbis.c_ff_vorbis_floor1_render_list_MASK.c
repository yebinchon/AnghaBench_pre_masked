
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sort; int x; } ;
typedef TYPE_1__ vorbis_floor1_entry ;
typedef int uint16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int,int,float*) ;

void FUNC_2(vorbis_floor1_entry * VAR_0, int VAR_1,
                                  uint16_t *VAR_2, int *VAR_3,
                                  int VAR_4, float *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    VAR_7 = 0;
    VAR_8 = VAR_2[0] * VAR_4;
    for (VAR_9 = 1; VAR_9 < VAR_1; VAR_9++) {
        int VAR_10 = VAR_0[VAR_9].sort;
        if (VAR_3[VAR_10]) {
            int VAR_11 = VAR_0[VAR_10].x;
            int VAR_12 = VAR_2[VAR_10] * VAR_4;
            if (VAR_7 < VAR_6)
                FUNC_1(VAR_7, VAR_8, FUNC_0(VAR_11,VAR_6), VAR_12, VAR_5);
            VAR_7 = VAR_11;
            VAR_8 = VAR_12;
        }
        if (VAR_7 >= VAR_6)
            break;
    }
    if (VAR_7 < VAR_6)
        FUNC_1(VAR_7, VAR_8, VAR_6, VAR_8, VAR_5);
}
