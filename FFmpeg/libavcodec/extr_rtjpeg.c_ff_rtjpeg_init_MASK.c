
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * idct_permutation; } ;
struct TYPE_4__ {TYPE_3__ idsp; int * scan; } ;
typedef TYPE_1__ RTJpegContext ;
typedef int AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int* VAR_0 ;

void FUNC_1(RTJpegContext *VAR_1, AVCodecContext *VAR_2)
{
    int VAR_3;

    FUNC_0(&VAR_1->idsp, VAR_2);

    for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
        int VAR_4 = VAR_0[VAR_3];
        VAR_4 = ((VAR_4 << 3) | (VAR_4 >> 3)) & 63;


        VAR_1->scan[VAR_3] = VAR_1->idsp.idct_permutation[VAR_4];
    }
}
