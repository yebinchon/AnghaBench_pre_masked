
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int*** yuv_convert; } ;
typedef TYPE_1__ ColorMatrixContext ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 void* FUNC_0 (double) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (double**,double**) ;
 int FUNC_3 (double**,double**,double**) ;
 double** VAR_1 ;

__attribute__((used)) static void FUNC_4(AVFilterContext *VAR_2)
{
    ColorMatrixContext *VAR_3 = VAR_2->priv;
    double VAR_4[5][3][3];
    double VAR_5[5][3][3];
    double VAR_6[25][3][3];
    double VAR_7, VAR_8;
    int VAR_9 = 0;
    int VAR_10, VAR_11, VAR_12;
    for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
        VAR_4[VAR_10][0][0] = VAR_1[VAR_10][0];
        VAR_4[VAR_10][0][1] = VAR_1[VAR_10][1];
        VAR_4[VAR_10][0][2] = VAR_1[VAR_10][2];
        VAR_7 = 0.5 / (VAR_4[VAR_10][0][1] - 1.0);
        VAR_8 = 0.5 / (VAR_4[VAR_10][0][2] - 1.0);
        VAR_4[VAR_10][1][0] = VAR_7 * VAR_4[VAR_10][0][0];
        VAR_4[VAR_10][1][1] = 0.5;
        VAR_4[VAR_10][1][2] = VAR_7 * VAR_4[VAR_10][0][2];
        VAR_4[VAR_10][2][0] = VAR_8 * VAR_4[VAR_10][0][0];
        VAR_4[VAR_10][2][1] = VAR_8 * VAR_4[VAR_10][0][1];
        VAR_4[VAR_10][2][2] = 0.5;
    }
    for (VAR_10 = 0; VAR_10 < 5; VAR_10++)
        FUNC_2(VAR_5[VAR_10], VAR_4[VAR_10]);
    for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
        for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
            FUNC_3(VAR_6[VAR_9], VAR_5[VAR_10], VAR_4[VAR_11]);
            for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
                VAR_3->yuv_convert[VAR_9][VAR_12][0] = FUNC_0(VAR_6[VAR_9][VAR_12][0]);
                VAR_3->yuv_convert[VAR_9][VAR_12][1] = FUNC_0(VAR_6[VAR_9][VAR_12][1]);
                VAR_3->yuv_convert[VAR_9][VAR_12][2] = FUNC_0(VAR_6[VAR_9][VAR_12][2]);
            }
            if (VAR_3->yuv_convert[VAR_9][0][0] != 65536 || VAR_3->yuv_convert[VAR_9][1][0] != 0 ||
                VAR_3->yuv_convert[VAR_9][2][0] != 0) {
                FUNC_1(VAR_2, VAR_0, "error calculating conversion coefficients\n");
            }
            VAR_9++;
        }
    }
}
