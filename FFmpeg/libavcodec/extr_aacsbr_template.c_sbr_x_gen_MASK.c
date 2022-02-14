
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* kx; int* m; TYPE_1__* data; } ;
struct TYPE_4__ {int t_env_num_env_old; } ;
typedef TYPE_2__ SpectralBandReplication ;
typedef int INTFLOAT ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ***,int ,int) ;

__attribute__((used)) static int FUNC_2(SpectralBandReplication *VAR_1, INTFLOAT VAR_2[2][38][64],
                     const INTFLOAT VAR_3[38][64][2], const INTFLOAT VAR_4[38][64][2],
                     const INTFLOAT VAR_5[32][40][2], int VAR_6)
{
    int VAR_7, VAR_8;
    const int VAR_9 = 32;
    const int VAR_10 = FUNC_0(2*VAR_1->data[VAR_6].t_env_num_env_old - VAR_9, 0);
    FUNC_1(VAR_2, 0, 2*sizeof(*VAR_2));
    for (VAR_7 = 0; VAR_7 < VAR_1->kx[0]; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
            VAR_2[0][VAR_8][VAR_7] = VAR_5[VAR_7][VAR_8 + VAR_0][0];
            VAR_2[1][VAR_8][VAR_7] = VAR_5[VAR_7][VAR_8 + VAR_0][1];
        }
    }
    for (; VAR_7 < VAR_1->kx[0] + VAR_1->m[0]; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
            VAR_2[0][VAR_8][VAR_7] = VAR_3[VAR_8 + VAR_9][VAR_7][0];
            VAR_2[1][VAR_8][VAR_7] = VAR_3[VAR_8 + VAR_9][VAR_7][1];
        }
    }

    for (VAR_7 = 0; VAR_7 < VAR_1->kx[1]; VAR_7++) {
        for (VAR_8 = VAR_10; VAR_8 < 38; VAR_8++) {
            VAR_2[0][VAR_8][VAR_7] = VAR_5[VAR_7][VAR_8 + VAR_0][0];
            VAR_2[1][VAR_8][VAR_7] = VAR_5[VAR_7][VAR_8 + VAR_0][1];
        }
    }
    for (; VAR_7 < VAR_1->kx[1] + VAR_1->m[1]; VAR_7++) {
        for (VAR_8 = VAR_10; VAR_8 < VAR_9; VAR_8++) {
            VAR_2[0][VAR_8][VAR_7] = VAR_4[VAR_8][VAR_7][0];
            VAR_2[1][VAR_8][VAR_7] = VAR_4[VAR_8][VAR_7][1];
        }
    }
    return 0;
}
