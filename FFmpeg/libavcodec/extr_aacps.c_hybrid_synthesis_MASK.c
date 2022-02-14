
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int out ;
typedef scalar_t__ UINTFLOAT ;
struct TYPE_3__ {int (* hybrid_synthesis_deint ) (scalar_t__***,scalar_t__***,int,int) ;} ;
typedef TYPE_1__ PSDSPContext ;
typedef scalar_t__ INTFLOAT ;


 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (scalar_t__***,scalar_t__***,int,int) ;
 int FUNC_2 (scalar_t__***,scalar_t__***,int,int) ;

__attribute__((used)) static void FUNC_3(PSDSPContext *VAR_0, INTFLOAT VAR_1[2][38][64],
                             INTFLOAT VAR_2[91][32][2], int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    if (VAR_3) {
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
            FUNC_0(VAR_1[0][VAR_6], 0, 5*sizeof(VAR_1[0][VAR_6][0]));
            FUNC_0(VAR_1[1][VAR_6], 0, 5*sizeof(VAR_1[1][VAR_6][0]));
            for (VAR_5 = 0; VAR_5 < 12; VAR_5++) {
                VAR_1[0][VAR_6][0] += (UINTFLOAT)VAR_2[ VAR_5][VAR_6][0];
                VAR_1[1][VAR_6][0] += (UINTFLOAT)VAR_2[ VAR_5][VAR_6][1];
            }
            for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
                VAR_1[0][VAR_6][1] += (UINTFLOAT)VAR_2[12+VAR_5][VAR_6][0];
                VAR_1[1][VAR_6][1] += (UINTFLOAT)VAR_2[12+VAR_5][VAR_6][1];
            }
            for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
                VAR_1[0][VAR_6][2] += (UINTFLOAT)VAR_2[20+VAR_5][VAR_6][0];
                VAR_1[1][VAR_6][2] += (UINTFLOAT)VAR_2[20+VAR_5][VAR_6][1];
                VAR_1[0][VAR_6][3] += (UINTFLOAT)VAR_2[24+VAR_5][VAR_6][0];
                VAR_1[1][VAR_6][3] += (UINTFLOAT)VAR_2[24+VAR_5][VAR_6][1];
                VAR_1[0][VAR_6][4] += (UINTFLOAT)VAR_2[28+VAR_5][VAR_6][0];
                VAR_1[1][VAR_6][4] += (UINTFLOAT)VAR_2[28+VAR_5][VAR_6][1];
            }
        }
        VAR_0->hybrid_synthesis_deint(VAR_1, VAR_2 + 27, 5, VAR_4);
    } else {
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
            VAR_1[0][VAR_6][0] = (UINTFLOAT)VAR_2[0][VAR_6][0] + VAR_2[1][VAR_6][0] + VAR_2[2][VAR_6][0] +
                           (UINTFLOAT)VAR_2[3][VAR_6][0] + VAR_2[4][VAR_6][0] + VAR_2[5][VAR_6][0];
            VAR_1[1][VAR_6][0] = (UINTFLOAT)VAR_2[0][VAR_6][1] + VAR_2[1][VAR_6][1] + VAR_2[2][VAR_6][1] +
                           (UINTFLOAT)VAR_2[3][VAR_6][1] + VAR_2[4][VAR_6][1] + VAR_2[5][VAR_6][1];
            VAR_1[0][VAR_6][1] = (UINTFLOAT)VAR_2[6][VAR_6][0] + VAR_2[7][VAR_6][0];
            VAR_1[1][VAR_6][1] = (UINTFLOAT)VAR_2[6][VAR_6][1] + VAR_2[7][VAR_6][1];
            VAR_1[0][VAR_6][2] = (UINTFLOAT)VAR_2[8][VAR_6][0] + VAR_2[9][VAR_6][0];
            VAR_1[1][VAR_6][2] = (UINTFLOAT)VAR_2[8][VAR_6][1] + VAR_2[9][VAR_6][1];
        }
        VAR_0->hybrid_synthesis_deint(VAR_1, VAR_2 + 7, 3, VAR_4);
    }
}
