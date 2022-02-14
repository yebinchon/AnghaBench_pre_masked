
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int random_state; } ;
typedef TYPE_1__ COOKContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 float* VAR_1 ;
 float** VAR_2 ;
 float* VAR_3 ;

__attribute__((used)) static void FUNC_1(COOKContext *VAR_4, int VAR_5, int VAR_6,
                                 int *VAR_7, int *VAR_8,
                                 float *VAR_9)
{
    int VAR_10;
    float VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        if (VAR_7[VAR_10]) {
            VAR_11 = VAR_2[VAR_5][VAR_7[VAR_10]];
            if (VAR_8[VAR_10])
                VAR_11 = -VAR_11;
        } else {

            VAR_11 = VAR_1[VAR_5];
            if (FUNC_0(&VAR_4->random_state) < 0x80000000)
                VAR_11 = -VAR_11;
        }
        VAR_9[VAR_10] = VAR_11 * VAR_3[VAR_6 + 63];
    }
}
