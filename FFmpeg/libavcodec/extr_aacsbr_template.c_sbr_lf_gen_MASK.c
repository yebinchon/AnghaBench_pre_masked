
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* kx; } ;
typedef TYPE_1__ SpectralBandReplication ;
typedef int INTFLOAT ;
typedef int AACContext ;


 int FUNC_0 (int ***,int ,int) ;

__attribute__((used)) static int FUNC_1(AACContext *VAR_0, SpectralBandReplication *VAR_1,
                      INTFLOAT VAR_2[32][40][2], const INTFLOAT VAR_3[2][32][32][2],
                      int VAR_4)
{
    int VAR_5, VAR_6;
    const int VAR_7 = 8;
    const int VAR_8 = 32;
    FUNC_0(VAR_2, 0, 32*sizeof(*VAR_2));
    for (VAR_6 = 0; VAR_6 < VAR_1->kx[1]; VAR_6++) {
        for (VAR_5 = VAR_7; VAR_5 < VAR_8 + VAR_7; VAR_5++) {
            VAR_2[VAR_6][VAR_5][0] = VAR_3[VAR_4][VAR_5 - VAR_7][VAR_6][0];
            VAR_2[VAR_6][VAR_5][1] = VAR_3[VAR_4][VAR_5 - VAR_7][VAR_6][1];
        }
    }
    VAR_4 = 1-VAR_4;
    for (VAR_6 = 0; VAR_6 < VAR_1->kx[0]; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
            VAR_2[VAR_6][VAR_5][0] = VAR_3[VAR_4][VAR_5 + VAR_8 - VAR_7][VAR_6][0];
            VAR_2[VAR_6][VAR_5][1] = VAR_3[VAR_4][VAR_5 + VAR_8 - VAR_7][VAR_6][1];
        }
    }
    return 0;
}
