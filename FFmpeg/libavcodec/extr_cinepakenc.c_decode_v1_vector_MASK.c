
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * v1_codebook; } ;
typedef TYPE_1__ strip_info ;
struct TYPE_6__ {scalar_t__ pix_fmt; } ;
typedef TYPE_2__ CinepakEncContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(CinepakEncContext *VAR_1, uint8_t *VAR_2[4],
                             int VAR_3[4], int VAR_4, strip_info *VAR_5)
{
    int VAR_6 = VAR_1->pix_fmt == VAR_0 ? 6 : 4;

    VAR_2[0][0] =
    VAR_2[0][1] =
    VAR_2[0][ VAR_3[0]] =
    VAR_2[0][1 + VAR_3[0]] = VAR_5->v1_codebook[VAR_4 * VAR_6];

    VAR_2[0][2] =
    VAR_2[0][3] =
    VAR_2[0][2 + VAR_3[0]] =
    VAR_2[0][3 + VAR_3[0]] = VAR_5->v1_codebook[VAR_4 * VAR_6 + 1];

    VAR_2[0][ 2 * VAR_3[0]] =
    VAR_2[0][1 + 2 * VAR_3[0]] =
    VAR_2[0][ 3 * VAR_3[0]] =
    VAR_2[0][1 + 3 * VAR_3[0]] = VAR_5->v1_codebook[VAR_4 * VAR_6 + 2];

    VAR_2[0][2 + 2 * VAR_3[0]] =
    VAR_2[0][3 + 2 * VAR_3[0]] =
    VAR_2[0][2 + 3 * VAR_3[0]] =
    VAR_2[0][3 + 3 * VAR_3[0]] = VAR_5->v1_codebook[VAR_4 * VAR_6 + 3];

    if (VAR_1->pix_fmt == VAR_0) {
        VAR_2[1][0] =
        VAR_2[1][1] =
        VAR_2[1][ VAR_3[1]] =
        VAR_2[1][1 + VAR_3[1]] = VAR_5->v1_codebook[VAR_4 * VAR_6 + 4];

        VAR_2[2][0] =
        VAR_2[2][1] =
        VAR_2[2][ VAR_3[2]] =
        VAR_2[2][1 + VAR_3[2]] = VAR_5->v1_codebook[VAR_4 * VAR_6 + 5];
    }
}
